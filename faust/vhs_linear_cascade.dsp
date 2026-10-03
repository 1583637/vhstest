declare name        "VHS Linear Track + Generation Loss";
declare description "Cascade of up to 8 VHS copies (linear track or Hi-Fi FM), each with its own deck, tape wear and damage history";
declare version     "0.4.1";

import("stdfaust.lib");

NG    = 8;                 // maximum number of generations
TWOPI = 2.0*ma.PI;

//======================================================================
// UI
//======================================================================
deckG(x) = vgroup("Deck", x);
histG(x) = vgroup("Generation History", x);
tapeG(x) = vgroup("Tape (per generation, scaled by history)", x);
washG(x) = vgroup("HF Compression", x);
hissG(x) = vgroup("Hiss", x);
hifiG(x) = vgroup("Hi-Fi Path", x);
buzzG(x) = vgroup("Buzz", x);

// Deck / format
ntsc    = deckG(nentry("Standard [style:menu{'PAL':0;'NTSC':1}]", 1, 0, 1, 1));
spd     = deckG(nentry("Tape Speed [style:menu{'SP':0;'LP':1;'EP':2}]", 0, 0, 2, 1));
monoOn  = deckG(checkbox("Mono Linear Track"));
drive   = deckG(hslider("Record Drive [unit:dB]", 3, -12, 24, 0.1)) : ba.db2linear : si.smoo;
bias    = deckG(hslider("Bias (asymmetry)", 0.1, 0, 0.8, 0.01)) : si.smoo;
outTrim = deckG(hslider("Output [unit:dB]", 0, -24, 12, 0.1)) : ba.db2linear : si.smoo;

// How the chain of copies differs from copy to copy
gens      = histG(hslider("Generations", 4, 0, 8, 1));
seedI     = int(histG(hslider("History Seed", 7, 0, 999, 1)));
vary      = histG(hslider("Variability", 0.7, 0, 1, 0.01));
wear      = histG(hslider("Wear Over Time", 0.6, 0, 1, 0.01));
speedMix  = histG(hslider("Speed Mix", 0.25, 0, 1, 0.01));
creaseRate = histG(hslider("Tape Damage [unit:/min]", 1.5, 0, 10, 0.1));
hifiMix   = histG(hslider("Hi-Fi Copies", 0.5, 0, 1, 0.01));

// Tape / transport defects (base values; every generation scales them differently)
az       = tapeG(hslider("Azimuth Error [unit:deg]", 0.12, 0, 1, 0.01));
wfPct    = tapeG(hslider("Wow and Flutter [unit:%]", 0.15, 0, 0.6, 0.01));
bwTrim   = tapeG(hslider("Bandwidth Trim", 1.0, 0.5, 1.5, 0.01));
dropRate = tapeG(hslider("Dropouts [unit:/min]", 6, 0, 60, 0.5));
dropDep  = tapeG(hslider("Dropout Depth", 0.4, 0, 1, 0.01));
dropLen  = tapeG(hslider("Dropout Length [unit:ms]", 8, 1, 40, 0.5));

// HF compression (level-dependent highs loss)
washAmt = washG(hslider("Amount", 0.25, 0, 1, 0.01));
fc0     = washG(hslider("Open Cutoff [unit:Hz]", 9000, 1000, 16000, 10));
rel     = washG(hslider("Recovery [unit:ms]", 150, 20, 800, 1)) * 0.001;
hfRide  = washG(hslider("HF Squash", 0.4, 0, 1, 0.01)) : si.smoo;

// Hi-Fi FM path (used by the copies that Hi-Fi Copies selects)
fmLv    = hifiG(hslider("FM Noise [unit:dB]", -50, -90, -20, 0.1)) : ba.db2linear : si.smoo;
trkErr  = hifiG(hslider("Tracking Error", 0.25, 0, 1, 0.01));
hsRes   = hifiG(hslider("Head-Switch Residue", 0.15, 0, 1, 0.01));
hdRate  = hifiG(hslider("Hi-Fi Dropouts [unit:/min]", 20, 0, 600, 1));
fmWhLv  = hifiG(hslider("Whine in FM Channel [unit:dB]", -48, -90, -10, 0.1)) : ba.db2linear : si.smoo;
cmpRef  = hifiG(hslider("Compander Reference [unit:dBFS]", -20, -40, 0, 0.5));
cmpAtt  = hifiG(hslider("Compander Attack [unit:ms]", 3, 0.5, 20, 0.1)) * 0.001;
cmpRel  = hifiG(hslider("Compander Release [unit:ms]", 90, 20, 400, 1)) * 0.001;
cmpTilt = hifiG(hslider("Sidechain HF Tilt", 0.6, 0, 1, 0.01));
cmpMis  = hifiG(hslider("Compander Mismatch", 0.5, 0, 1, 0.01));

// Hiss: constant floor, fixed within a generation, different between generations
hissLv  = hissG(hslider("Hiss Level [unit:dB]", -34, -90, -20, 0.1)) : ba.db2linear : si.smoo;
hissHP  = hissG(hslider("Hiss Low Cut [unit:Hz]", 300, 20, 4000, 1)) : si.smoo;

// Line whine and head-switch rasp, added once at the output
detune  = buzzG(hslider("Whine Detune [unit:cents]", 0, -2400, 200, 1)) : si.smoo;
whineLv = buzzG(hslider("Whine Level [unit:dB]", -52, -90, -20, 0.1)) : ba.db2linear : si.smoo;
wander  = buzzG(hslider("Whine Wander", 0.3, 0, 1, 0.01)) : si.smoo;
fieldAM = buzzG(hslider("Field-rate AM", 0.5, 0, 1, 0.01)) : si.smoo;
follow  = buzzG(hslider("Follows Signal", 0.5, 0, 1, 0.01)) : si.smoo;
bleed   = buzzG(hslider("Signal Bleed (ring)", 0.03, 0, 0.3, 0.001)) : si.smoo;
hsLv    = buzzG(hslider("Head-Switch Rasp, Hi-Fi [unit:dB]", -90, -90, -20, 0.1)) : ba.db2linear : si.smoo;
hsTone  = buzzG(hslider("Rasp Tone [unit:Hz]", 4000, 500, 12000, 10)) : si.smoo;

//======================================================================
// Random sources
//======================================================================
// integer LCG noise; each seed gives its own stream
rnd(s) = (+(12345 + 2*s) ~ *(1103515245)) / 2147483647.0;

// integer hash -> uniform [0,1); fixed per (seed, generation, slot), so the
// whole copy history can be re-rolled with the History Seed slider.
// Everything is kept inside 24 bits and masked after every multiply, so no
// signed integer ever overflows (overflow is undefined behaviour in C++ and
// some optimisers miscompile it).
hash(n) = u
with {
    x0 = (n & 16777215) xor (((n >> 24)*40503) & 16777215);
    x1 = (x0*127 + 8191) & 16777215;
    x2 = x1 xor (x1 >> 11);
    x3 = (x2*125 + 52711) & 16777215;
    x4 = x3 xor (x3 >> 9);
    x5 = (x4*121 + 10007) & 16777215;
    x6 = x5 xor (x5 >> 12);
    x7 = (x6*113 + 3571) & 16777215;
    u  = x7 / 16777216.0;
};
rv(i,s) = hash(seedI*104729 + i*7919 + s*131 + 17);
gz(i,k) = (rv(i,3*k) + rv(i,3*k+1) + rv(i,3*k+2) - 1.5)*2.0;   // ~N(0,1)
lgn(i,k,sg) = exp(sg*vary*gz(i,k));                            // lognormal spread, 1 at Variability 0

// slow Gaussian-ish noise with unit std (2 cascaded one-pole smoothers)
slowNoise(sd, tau) = rnd(sd) : si.smooth(p) : si.smooth(p) : *(gn)
with {
    p  = ba.tau2pole(tau);
    gn = 1.0/sqrt((1.0-p)*(1.0+p*p)/(3.0*(1.0+p)^3));
};

// TV standard
line  = select2(ntsc, 15625.0, 15734.27);
field = select2(ntsc, 50.0, 59.94);
vBase = select2(ntsc, 23.39, 33.34);          // SP linear tape speed in mm/s

//======================================================================
// What differs between generations (generation i = 0..7)
//======================================================================
// tape speed: copies are often recorded slower to save tape
spdI(i) = min(2, spd + extra)
with {
    u     = rv(i,42);
    pEP   = 0.20*speedMix;
    pLP   = 0.35*speedMix;
    extra = (u < pEP)*2 + ((u >= pEP) & (u < pEP+pLP));
};
vI(i) = vBase / (1.0 + spdI(i));

azMul(i)   = lgn(i,0,0.9);                           // alignment of this deck/tape pair
bwMul(i)   = exp(-0.3*vary*abs(gz(i,1)));            // head wear: HF only ever lost
hissMul(i) = lgn(i,2,0.5) * 1.41^(spdI(i)-spd);      // slower speed = noisier (about 3 dB/step)
wfMul(i)   = lgn(i,3,0.8);                           // pinch roller / capstan condition
drMul(i)   = lgn(i,4,1.0);                           // oxide condition
ddMul(i)   = lgn(i,5,0.5);
driveI(i)  = drive * ba.db2linear(2.5*vary*gz(i,6)); // record level differs per deck
biasI(i)   = min(0.8, bias*lgn(i,7,0.6));
washAI(i)  = min(1.0, washAmt*lgn(i,10,0.5));
fc0I(i)    = fc0*exp(-0.3*vary*abs(gz(i,11)));
bwI(i)     = bwTrim*10000.0*(vI(i)/33.34)^0.8*bwMul(i) : min(0.45*ma.SR);

// each deck/tape pair has its own frequency-response errors; they stack in dB
eqI(i) = fi.peak_eq(2.2*vary*gz(i,8), fA, 0.7*fA) : fi.peak_eq(2.2*vary*gz(i,9), fB, 0.9*fB)
with {
    fA = 700.0*2.0^(3.3*rv(i,40));
    fB = 700.0*2.0^(3.3*rv(i,41));
};

//======================================================================
// What changes over time inside a generation
//======================================================================
// slow wear: defects come and go over seconds
condW(i)  = exp(0.9*wear*slowNoise(5000+i, 2.5) - 0.405*wear*wear);
burstF(i) = exp(1.2*wear*slowNoise(6000+i, 0.2) - 0.72*wear*wear);

// tape damage events: crease / edge damage. For a fraction of a second the
// azimuth goes bad, dropouts cluster, wow and flutter jump and the speed lurches
creaseTrig(i) = abs(rnd(7000+i)) < (creaseRate*condW(i)*drMul(i)/60.0/ma.SR);
creaseAmp(i)  = (0.3 + 0.7*abs(rnd(7100+i))) : ba.sAndH(creaseTrig(i));
creaseSg(i)   = select2(rnd(7200+i) > 0.0, -1.0, 1.0) : ba.sAndH(creaseTrig(i));
creaseEnv(i)  = (creaseTrig(i)*creaseAmp(i)) : (max ~ *(exp(-1.0/(0.45*ma.SR)))) : si.smooth(ba.tau2pole(0.02));
lurch(i)      = 30.0*(ma.SR/44100.0)*creaseEnv(i)*creaseSg(i);

//======================================================================
// Hi-Fi FM path: what differs between copies and over time
//======================================================================
gzx(i,k)    = (rv(i,60+3*k) + rv(i,61+3*k) + rv(i,62+3*k) - 1.5)*2.0;
hf(i)       = rv(i,50) < hifiMix;                         // 1 = this copy is a Hi-Fi recording
trkMul(i)   = exp(0.8*vary*gzx(i,0));                     // head alignment / tracking
hsrMul(i)   = exp(0.7*vary*gzx(i,1));                     // head wear: how well switching is hidden
hdrMul(i)   = exp(0.9*vary*gzx(i,2));
fmMul(i)    = exp(0.4*vary*gzx(i,3));
refOff(i)   = 2.0*cmpMis*gzx(i,4);                        // expander level vs compressor level, dB
tcMul(i)    = exp(0.5*cmpMis*gzx(i,5));                   // expander time constants vs compressor's

// field phase 0..1, and the "bat wing" shape of the RF envelope: with tracking
// error the carrier is weakest at the two ends of every head sweep
fph       = os.lf_sawpos(field);
bat       = (abs(2.0*fph - 1.0))^3;
trkSig(i) = trkErr*trkMul(i)*(0.3 + abs(slowNoise(9500+i, 1.5)))*condW(i);
eRF(i)    = max(0.05, min(1.0, 1.0 - 0.9*trkSig(i)*bat)); // relative FM carrier level
nf(i)     = 1.0/max(eRF(i), 0.2);                         // FM noise rises as the carrier falls
clickP(i) = 1500.0*(max(0.0, 0.35 - eRF(i))/0.35)^2/ma.SR; // FM threshold clicks below ~0.35

// Hi-Fi dropouts: short carrier losses (about 0.6 ms median, a few ms at the long end)
hdTrig(i) = abs(rnd(9000+i)) < (hdRate*hdrMul(i)*condW(i)/60.0/ma.SR);
hdDur(i)  = (0.0006*exp(1.3*(rnd(9100+3*i) + rnd(9101+3*i) + rnd(9102+3*i)))) : ba.sAndH(hdTrig(i));
hdAge(i)  = ((_ + 1) * (1.0 - hdTrig(i))) ~ _;
hdSeen(i) = hdTrig(i) : (max ~ _);
hdGate(i) = hdSeen(i) * (hdAge(i) < hdDur(i)*ma.SR);
// the deck repeats the last good sample for up to 4 ms, then gives up and mutes
hdMute(i) = (hdGate(i) * (hdAge(i) > 0.004*ma.SR)) : si.smooth(ba.tau2pole(0.0005));
hsGate    = fph < (0.0006*field);                         // head-switch window, 0.6 ms per field

//======================================================================
// Signal blocks
//======================================================================
// time-varying one-pole lowpass: inputs (a, g, x), y = a*y[n-1] + g*x
lpv = ((_*_) + (_*_)) ~ _;
// one stage: (a, g, x) -> (a, g, y)
stg = (_,_,_) <: ((_,_,!), lpv);
coefmap = *(-2.0*ma.PI/ma.SR) : exp;

// record side: asymmetric soft saturation (unity gain for small signals)
atsat = *(ma.PI/2) : atan : *(2.0/ma.PI);
recSat(i) = *(driveI(i)) : sat : *(slopeC) : /(driveI(i))
with {
    b      = biasI(i);
    satOff = atan(b*ma.PI/2)*(2.0/ma.PI);
    sat    = +(b) : atsat : (_ - satOff);
    slopeC = 1.0 + (b*ma.PI/2)^2;
};

// HF compression: cutoff falls with level, highs squashed by own envelope
washC(i) = _ <: (_, lowBand) <: (!, _, -) : (_, hiSquash) :> _
with {
    wa       = washAI(i);
    cutoff   = *(0.0 - 4.0*wa) : exp : *(fc0I(i)) : max(300.0) : min(0.45*ma.SR);
    coefs    = abs : an.amp_follower_ar(0.004, rel) : cutoff : coefmap <: (_, (1.0 - _));
    lowBand  = _ <: (coefs, _) : stg : stg : (!,!,_);
    hiSquash = _ <: (_, denom) : /;
    denom    = abs : an.amp_follower_ar(0.001, rel*0.5) : *(40.0*hfRide*wa) : +(1.0);
};
recMono(i) = recSat(i) : washC(i);

// azimuth error: a moving average of length T = W*tan(theta)/v (W = 1 mm)
azDeg(i)  = min(6.0, az*azMul(i)*abs(1.0 + 0.5*wear*slowNoise(5500+i, 3.0))*(1.0 + 6.0*creaseEnv(i)));
smearT(i) = min(0.009*ma.SR, tan(azDeg(i)*ma.PI/180.0) / vI(i) * ma.SR);   // at most 9 ms
smear(T)  = _ <: par(k, 8, de.fdelay(2048, k*T/8.0)) :> *(0.125);   // first null at 1/T

// wow and flutter: one modulation signal per generation, common to L and R
wfdI(i) = min(0.02, wfPct*0.01*wfMul(i)*condW(i)*(1.0 + 8.0*creaseEnv(i)));
wfMod(i) = wfdI(i)*ma.SR*( 0.50*os.oscp(f1, phs)/(TWOPI*f1)
                         + 0.60*os.oscp(f2, phs*1.7)/(TWOPI*f2)
                         + 0.25*os.oscp(fdrum, phs*2.3)/(TWOPI*fdrum)
                         + 0.50*ou/2.79 )     // 2.79 rad/s = RMS angular rate of the unit drift
with {
    phs   = TWOPI*rv(i,43);
    f1    = 0.43*(0.8 + 0.4*rv(i,44));                 // wow
    f2    = 7.3*(0.8 + 0.4*rv(i,45));                  // flutter
    fdrum = field*0.5;                                 // drum rotation rate
    ou    = rnd(2000+i) : seq(k, 4, si.smooth(ba.tau2pole(0.16))) : *(365.0*sqrt(ma.SR/44100.0));
};
wfDelay(i) = (0.0058*ma.SR + wfMod(i) + lurch(i)) : max(8.0) : min(8000.0);   // base delay 5.8 ms

// dropouts: spacing loss is 54.6 dB per wavelength, so highs go first.
// A random event opens a gap d(t); a 2-pole lowpass follows it.
dropEv(sd, rate) = (trig*amp) : (max ~ *(cdec)) : si.smooth(ba.tau2pole(0.0006))
with {
    trig = abs(rnd(sd)) < (rate/60.0/ma.SR);
    amp  = (0.25 + 0.75*abs(rnd(sd+1000))) : ba.sAndH(trig);
    cdec = exp(-1.0/(dropLen*0.001*ma.SR));
};
dropRateI(i) = dropRate*drMul(i)*condW(i)*burstF(i)*(1.0 + 25.0*creaseEnv(i));
dropDmmI(i)  = dropDep*0.006*ddMul(i)*(1.0 + 1.5*creaseEnv(i));
// one event stream shared by both tracks, plus smaller per-track ones (tracks are narrow)
dropEnvK(i,k) = max(dropEv(3000+i, dropRateI(i)), 0.7*dropEv(3100+10*i+k, 0.5*dropRateI(i)));
dropFc(i,k)   = vI(i) / (2.0*ma.PI*1.31*(dropDmmI(i)*dropEnvK(i,k) + 0.0000001)) : max(200.0) : min(200000.0);
dropCoefs(i,k) = dropFc(i,k) : coefmap <: (_, (1.0 - _));
dropLP(i,k)    = (dropCoefs(i,k), _) : stg : stg : (!,!,_);

// playback: constant hiss, then the record+playback bandwidth
hissS(i,k) = rnd(1000 + 10*i + k) : fi.highpass(1, hissHP) : *(hissLv*hissMul(i));
bandl(i)   = fi.highpass(2, 90.0) : fi.lowpass(6, bwI(i));

//======================================================================
// Linear-track copy (stereo in, stereo out)
//======================================================================
monoFx = + : *(0.5) <: (_,_);

stageL(i) = ba.bypass2(monoOn < 0.5, monoFx)               // most linear tracks are mono
          : par(k, 2, recMono(i))
          : par(k, 2, smear(smearT(i)))
          : par(k, 2, de.fdelay4(8192, wfDelay(i)))
          : par(k, 2, dropLP(i,k))
          : par(k, 2, *(1.0 - 0.35*creaseEnv(i)))     // head contact loss during damage
          : par(k, 2, eqI(i))
          : (_ + hissS(i,0), _ + hissS(i,1))
          : par(k, 2, bandl(i));

//======================================================================
// Hi-Fi FM copy (stereo in, stereo out)
//   record:   compressor -> pre-emphasis -> limiter -> FM
//   playback: FM -> dropout compensator -> de-emphasis -> expander
// The compander is single-band with an HF-weighted detector. Its level law is
// a two-slope fit to the numbers in US patent 8160423: +10 dB in -> +5 dB out,
// -70 dB in -> -50 dB out (80 dB squeezed to 55 dB). The attack/release times
// and the weighting are approximations, not the IEC 60774-2 values.
//======================================================================
// level -> dB relative to reference, clamped to the law's range
sidew = _ <: (*(1.0 - 0.6*cmpTilt), (fi.highpass(1, 2000.0) : *(2.0*cmpTilt))) :> _;
detDb(att, rel, ref) = sidew : abs : an.amp_follower_ar(att, rel) : max(0.000001)
                     : ba.linear2db : (_ - ref) : max(-70.0);
cLaw = _ <: (_ > 0.0, *(0.714), *(0.5)) : select2;             // compressor: out dB for in dB
eLaw = _ <: (_ > 0.0, *(1.0/0.714), *(2.0)) : select2;         // expander: exact inverse
hComp(ref) = _ <: (_, (detDb(cmpAtt, cmpRel, ref) <: (cLaw, _) : - : ba.db2linear)) : *;
hExp(ref, tc) = _ <: (_, (detDb(cmpAtt*tc, cmpRel*tc, ref) : max(-50.0) : min(25.0) <: (eLaw, _) : - : ba.db2linear)) : *;   // gain limited to +25 dB

// first-order pre/de-emphasis (zero 3.2 kHz, pole 14 kHz); exact inverses of each other
fzE = 3200.0;
fpE = min(14000.0, 0.45*ma.SR);
czE = tan(ma.PI*fzE/ma.SR);
cpE = tan(ma.PI*fpE/ma.SR);
preE = fi.tf1((cpE/czE)*(czE+1.0)/(cpE+1.0), (cpE/czE)*(czE-1.0)/(cpE+1.0), (cpE-1.0)/(cpE+1.0));
deE  = fi.tf1((czE/cpE)*(cpE+1.0)/(czE+1.0), (czE/cpE)*(cpE-1.0)/(czE+1.0), (czE-1.0)/(czE+1.0));
fmLimit = *(ma.PI/2) : atan : *(2.0/ma.PI);                    // FM over-deviation

// conceal a glitch: while g = 1 the output sits on the last good sample, then
// fades back to the live signal as `live` goes 0 -> 1 (no step at either end)
holdFade(g, live) = _ <: (_, ba.sAndH(1.0 - g)) <: ((- : *(live)), (!, _)) :> _;
hsWn      = 0.0006*ma.SR;
liveHS    = 1.0 - hsGate*(1.0 - min(1.0, max(0.0, (fph*ma.SR/field - 0.4*hsWn)/(0.6*hsWn))));
liveHD(i) = 1.0 - hdGate(i)*(1.0 - min(1.0, max(0.0, (hdAge(i) - 0.7*hdDur(i)*ma.SR)/(0.3*hdDur(i)*ma.SR + 1.0))));

// what the FM channel adds, per track
fmNoise(i,k) = rnd(9300+10*i+k) : fi.tf1(1.0, -1.0, 0.0) : *(0.5*fmLv*fmMul(i)*nf(i));  // triangular noise
fmClicks(i,k) = (abs(rnd(9400+10*i+k)) < clickP(i)) * rnd(9450+10*i+k) * 0.7;
hsResid(i,k) = os.lf_imptrain(field) : (+ ~ *(exp(-1.0/(0.0005*ma.SR)))) : *(rnd(9600+10*i+k)) : *(0.25*hsRes*hsrMul(i));
fmWhine = whine*fmWhLv;
hCh(i,k) = holdFade(hsGate, liveHS)            // head-switch concealment
         : holdFade(hdGate(i), liveHD(i)) : *(1.0 - hdMute(i))   // dropout compensator
         : (_ + fmNoise(i,k) + fmClicks(i,k) + hsResid(i,k) + fmWhine);

hiOutLim = *(0.5) : *(ma.PI/2) : atan : *(2.0/ma.PI) : *(2.0);   // output headroom: unity gain, ceiling 2.0
bandH = fi.highpass(1, 20.0) : fi.lowpass(2, min(19000.0, 0.45*ma.SR)) : hiOutLim;

stageH(i) = par(k, 2, hComp(cmpRef))
          : par(k, 2, preE : fmLimit)
          : par(k, 2, hCh(i,k))
          : par(k, 2, deE)
          : par(k, 2, hExp(cmpRef + refOff(i), tcMul(i)))
          : par(k, 2, bandH);

//======================================================================
// Each copy is a linear or a Hi-Fi recording; both run, one is selected
//======================================================================
stageX(i) = _,_ <: ((stageL(i) : par(k, 2, *(1.0 - hf(i)))), (stageH(i) : par(k, 2, *(hf(i))))) :> (_,_);

cascade = seq(i, NG, ba.bypass2(i >= gens, stageX(i)));

//======================================================================
// Line whine + head-switch rasp, injected once after the last generation
//======================================================================
drift  = no.noise : fi.lowpass(2, 6.0) : *(30.0);
whineF = (line * 2.0^(detune/1200.0)) * (1.0 + 0.002*wander*drift) : min(0.45*ma.SR);
whine  = os.osc(whineF) + 0.35*os.osc(2.0*whineF)*(2.0*whineF < 0.45*ma.SR);
fieldEnv = 1.0 + 0.6*fieldAM*os.osc(field);

buzzMono = _ <: (tracked, ring) :> _
with {
    tracked = abs : an.amp_follower_ar(0.01, 0.25) : *(4.0*follow) : +(1.0)
            : *(whine*fieldEnv*whineLv);
    ring    = *(whine*bleed);
};

hsBurst = os.lf_imptrain(field)
        : (+ ~ *(exp(-1.0/(0.0007*ma.SR))))
        : *(no.noise)
        : fi.lowpass(2, hsTone);

buzzAll   = (+ : *(0.5) : buzzMono) + (hsBurst*hsLv);
buzzStage = _,_ <: (_, _, buzzAll, buzzAll) :> (_,_);

//======================================================================
process = cascade : buzzStage : par(k, 2, *(outTrim));
