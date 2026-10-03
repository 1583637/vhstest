/* ------------------------------------------------------------
name: "VHS Linear Track + Generation Loss"
version: "0.4.1"
Code generated with Faust 2.70.3 (https://faust.grame.fr)
Compilation options: -a arch_min.cpp -lang cpp -ct 1 -cn VhsDsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __VhsDsp_H__
#define  __VhsDsp_H__

#include "faust/gui/meta.h"
#include "faust/gui/UI.h"
#include "faust/dsp/dsp.h"
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS VhsDsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

class VhsDspSIG0 {
	
  private:
	
	int iVec1[2];
	int iRec150[2];
	
  public:
	
	int getNumInputsVhsDspSIG0() {
		return 0;
	}
	int getNumOutputsVhsDspSIG0() {
		return 1;
	}
	
	void instanceInitVhsDspSIG0(int sample_rate) {
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			iVec1[l76] = 0;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			iRec150[l77] = 0;
		}
	}
	
	void fillVhsDspSIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			iVec1[0] = 1;
			iRec150[0] = (iVec1[1] + iRec150[1]) % 65536;
			table[i1] = std::sin(9.58738e-05f * float(iRec150[0]));
			iVec1[1] = iVec1[0];
			iRec150[1] = iRec150[0];
		}
	}

};

static VhsDspSIG0* newVhsDspSIG0() { return (VhsDspSIG0*)new VhsDspSIG0(); }
static void deleteVhsDspSIG0(VhsDspSIG0* dsp) { delete dsp; }

class VhsDspSIG1 {
	
  private:
	
	int iVec11[2];
	int iRec227[2];
	
  public:
	
	int getNumInputsVhsDspSIG1() {
		return 0;
	}
	int getNumOutputsVhsDspSIG1() {
		return 1;
	}
	
	void instanceInitVhsDspSIG1(int sample_rate) {
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			iVec11[l159] = 0;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			iRec227[l160] = 0;
		}
	}
	
	void fillVhsDspSIG1(int count, float* table) {
		for (int i2 = 0; i2 < count; i2 = i2 + 1) {
			iVec11[0] = 1;
			iRec227[0] = (iVec11[1] + iRec227[1]) % 65536;
			table[i2] = std::cos(9.58738e-05f * float(iRec227[0]));
			iVec11[1] = iVec11[0];
			iRec227[1] = iRec227[0];
		}
	}

};

static VhsDspSIG1* newVhsDspSIG1() { return (VhsDspSIG1*)new VhsDspSIG1(); }
static void deleteVhsDspSIG1(VhsDspSIG1* dsp) { delete dsp; }

static float VhsDsp_faustpower2_f(float value) {
	return value * value;
}
static float VhsDsp_faustpower3_f(float value) {
	return value * value * value;
}
static float ftbl0VhsDspSIG0[65536];
static float ftbl1VhsDspSIG1[65536];

class VhsDsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	int iVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst3;
	float fConst5;
	float fConst7;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fConst8;
	int iRec8[2];
	float fConst9;
	float fConst10;
	float fRec7[2];
	float fRec6[2];
	float fConst11;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	float fConst12;
	int iRec9[2];
	int iRec10[2];
	int iRec11[2];
	int iRec12[2];
	float fRec5[2];
	float fConst13;
	float fConst14;
	float fRec13[2];
	int iRec14[2];
	FAUSTFLOAT fEntry0;
	float fConst15;
	float fRec17[2];
	int iRec29[2];
	float fRec28[2];
	float fRec27[2];
	int iRec30[2];
	int iRec31[2];
	int iRec32[2];
	int iRec33[2];
	float fRec26[2];
	float fRec34[2];
	int iRec35[2];
	int iRec49[2];
	float fRec48[2];
	float fRec47[2];
	int iRec50[2];
	int iRec51[2];
	int iRec52[2];
	int iRec53[2];
	float fRec46[2];
	float fRec54[2];
	int iRec55[2];
	int iRec69[2];
	float fRec68[2];
	float fRec67[2];
	int iRec70[2];
	int iRec71[2];
	int iRec72[2];
	int iRec73[2];
	float fRec66[2];
	float fRec74[2];
	int iRec75[2];
	int iRec89[2];
	float fRec88[2];
	float fRec87[2];
	int iRec90[2];
	int iRec91[2];
	int iRec92[2];
	int iRec93[2];
	float fRec86[2];
	float fRec94[2];
	int iRec95[2];
	int iRec109[2];
	float fRec108[2];
	float fRec107[2];
	int iRec110[2];
	int iRec111[2];
	int iRec112[2];
	int iRec113[2];
	float fRec106[2];
	float fRec114[2];
	int iRec115[2];
	int iRec129[2];
	float fRec128[2];
	float fRec127[2];
	int iRec130[2];
	int iRec131[2];
	int iRec132[2];
	int iRec133[2];
	float fRec126[2];
	float fRec134[2];
	int iRec135[2];
	float fConst17;
	float fConst19;
	float fConst21;
	int iRec147[2];
	float fRec146[3];
	float fConst22;
	float fConst23;
	FAUSTFLOAT fHslider7;
	float fRec148[2];
	float fConst24;
	FAUSTFLOAT fHslider8;
	float fRec149[2];
	float fConst25;
	float fRec151[2];
	float fRec152[2];
	FAUSTFLOAT fHslider9;
	float fRec153[2];
	int iRec154[2];
	float fConst26;
	float fRec155[2];
	FAUSTFLOAT fHslider10;
	float fConst27;
	int iRec158[2];
	float fConst28;
	float fConst29;
	float fRec157[2];
	float fRec156[2];
	float fConst30;
	int iRec161[2];
	float fRec160[2];
	float fRec159[2];
	FAUSTFLOAT fHslider11;
	float fConst31;
	int iRec162[2];
	int iRec163[2];
	FAUSTFLOAT fHslider12;
	float fRec164[2];
	int iRec166[2];
	float fVec2[2];
	int iRec168[2];
	int iRec169[2];
	int iRec170[2];
	int iRec171[2];
	float fRec167[2];
	float fRec172[2];
	int iRec173[2];
	float fVec3[2];
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec178[2];
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	float fRec177[2];
	float fVec4[2];
	float fConst36;
	float fConst37;
	float fConst39;
	float fConst40;
	float fConst41;
	float fConst42;
	float fRec176[2];
	float fRec175[2];
	float fRec174[2];
	float fConst43;
	float fConst44;
	float fRec179[2];
	float fVec5[2];
	float fConst45;
	float fConst46;
	float fRec145[2];
	float fRec144[2];
	float fRec143[2];
	float fVec6[2];
	float fConst47;
	float fConst48;
	float fConst49;
	float fRec142[2];
	float fRec141[3];
	float fConst50;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fHslider18;
	float fConst51;
	float fConst54;
	float fConst56;
	float fConst58;
	FAUSTFLOAT fHslider19;
	float fRec184[2];
	FAUSTFLOAT fHslider20;
	float fRec186[2];
	int iRec187[2];
	float fVec7[2];
	float fRec185[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fConst63;
	float fConst64;
	FAUSTFLOAT fHslider21;
	int iRec192[2];
	int iRec194[2];
	float fRec193[2];
	float fRec191[2];
	float fConst65;
	float fRec190[2];
	float fConst66;
	FAUSTFLOAT fHslider22;
	float fConst67;
	float fConst68;
	int iRec200[2];
	float fConst69;
	float fConst70;
	float fRec199[2];
	float fRec198[2];
	float fConst71;
	FAUSTFLOAT fHslider23;
	int iRec201[2];
	int iRec203[2];
	float fRec202[2];
	float fRec197[2];
	float fConst72;
	float fRec196[2];
	float fConst73;
	int iRec206[2];
	int iRec208[2];
	float fRec207[2];
	float fRec205[2];
	float fRec204[2];
	FAUSTFLOAT fHslider24;
	float fConst74;
	float fConst75;
	float fConst76;
	int iRec212[2];
	float fConst77;
	float fConst78;
	float fRec211[2];
	float fRec210[2];
	float fConst79;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	float fRec213[2];
	FAUSTFLOAT fHslider27;
	float fRec217[2];
	FAUSTFLOAT fHslider28;
	float fRec218[2];
	FAUSTFLOAT fCheckbox0;
	float fVec8[2];
	FAUSTFLOAT fHslider29;
	float fConst80;
	float fRec216[2];
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	float fRec219[2];
	float fRec215[2];
	float fConst81;
	float fRec214[2];
	int IOTA0;
	float fVec9[2048];
	float fVec10[8192];
	int iRec221[2];
	float fRec220[2];
	float fConst82;
	int iRec226[2];
	float fConst83;
	float fConst84;
	float fRec225[2];
	float fRec224[2];
	float fRec223[2];
	float fRec222[2];
	float fConst85;
	float fConst86;
	float fRec228[2];
	float fConst87;
	float fRec229[2];
	float fConst88;
	float fRec230[2];
	FAUSTFLOAT fHslider32;
	float fRec209[2];
	float fRec195[2];
	float fRec189[3];
	float fRec188[3];
	float fRec183[3];
	float fConst89;
	float fRec182[3];
	float fRec181[3];
	float fRec180[3];
	float fVec12[2];
	float fRec140[2];
	float fRec139[2];
	float fVec13[2];
	float fRec138[2];
	float fRec137[2];
	float fRec136[2];
	float fRec231[2];
	int iRec234[2];
	float fRec233[2];
	float fRec232[2];
	int iRec236[2];
	float fVec14[2];
	int iRec237[2];
	int iRec238[2];
	int iRec239[2];
	float fVec15[2];
	float fRec125[2];
	float fRec124[2];
	float fRec123[2];
	float fVec16[2];
	float fRec122[2];
	float fRec121[3];
	int iRec245[2];
	float fVec17[2];
	float fRec244[2];
	int iRec250[2];
	int iRec252[2];
	float fRec251[2];
	float fRec249[2];
	float fRec248[2];
	int iRec258[2];
	float fRec257[2];
	float fRec256[2];
	int iRec259[2];
	int iRec261[2];
	float fRec260[2];
	float fRec255[2];
	float fRec254[2];
	int iRec264[2];
	int iRec266[2];
	float fRec265[2];
	float fRec263[2];
	float fRec262[2];
	int iRec270[2];
	float fRec269[2];
	float fRec268[2];
	float fRec283[2];
	float fRec282[2];
	float fVec18[2];
	float fRec281[2];
	float fRec280[2];
	float fRec279[2];
	int iRec285[2];
	float fVec19[2];
	int iRec286[2];
	int iRec287[2];
	int iRec288[2];
	float fVec20[2];
	float fRec278[2];
	float fRec277[2];
	float fRec276[2];
	float fVec21[2];
	float fRec275[2];
	float fRec274[3];
	int iRec294[2];
	float fVec22[2];
	float fRec293[2];
	int iRec300[2];
	int iRec302[2];
	float fRec301[2];
	float fRec299[2];
	float fRec298[2];
	float fRec306[2];
	float fRec307[2];
	float fRec305[2];
	float fRec304[2];
	float fVec23[2048];
	float fVec24[8192];
	float fRec303[2];
	float fRec297[2];
	float fRec296[3];
	float fRec295[3];
	float fRec292[3];
	float fRec291[3];
	float fRec290[3];
	float fRec289[3];
	float fVec25[2];
	float fRec273[2];
	float fRec308[2];
	float fRec272[2];
	float fRec271[2];
	float fVec26[2048];
	float fVec27[8192];
	int iRec310[2];
	float fRec309[2];
	int iRec315[2];
	float fRec314[2];
	float fRec313[2];
	float fRec312[2];
	float fRec311[2];
	float fRec316[2];
	float fRec317[2];
	float fRec267[2];
	float fRec253[2];
	float fRec247[3];
	float fRec246[3];
	float fRec243[3];
	float fRec242[3];
	float fRec241[3];
	float fRec240[3];
	float fVec28[2];
	float fRec120[2];
	float fRec119[2];
	float fVec29[2];
	float fRec118[2];
	float fRec117[2];
	float fRec116[2];
	float fRec318[2];
	int iRec321[2];
	float fRec320[2];
	float fRec319[2];
	int iRec323[2];
	float fVec30[2];
	int iRec324[2];
	int iRec325[2];
	int iRec326[2];
	float fVec31[2];
	float fRec105[2];
	float fRec104[2];
	float fRec103[2];
	float fVec32[2];
	float fRec102[2];
	float fRec101[3];
	int iRec332[2];
	float fVec33[2];
	float fRec331[2];
	int iRec337[2];
	int iRec339[2];
	float fRec338[2];
	float fRec336[2];
	float fRec335[2];
	int iRec345[2];
	float fRec344[2];
	float fRec343[2];
	int iRec346[2];
	int iRec348[2];
	float fRec347[2];
	float fRec342[2];
	float fRec341[2];
	int iRec351[2];
	int iRec353[2];
	float fRec352[2];
	float fRec350[2];
	float fRec349[2];
	int iRec357[2];
	float fRec356[2];
	float fRec355[2];
	float fRec370[2];
	float fRec369[2];
	float fVec34[2];
	float fRec368[2];
	float fRec367[2];
	float fRec366[2];
	int iRec372[2];
	float fVec35[2];
	int iRec373[2];
	int iRec374[2];
	int iRec375[2];
	float fVec36[2];
	float fRec365[2];
	float fRec364[2];
	float fRec363[2];
	float fVec37[2];
	float fRec362[2];
	float fRec361[3];
	int iRec381[2];
	float fVec38[2];
	float fRec380[2];
	int iRec387[2];
	int iRec389[2];
	float fRec388[2];
	float fRec386[2];
	float fRec385[2];
	float fRec393[2];
	float fRec394[2];
	float fRec392[2];
	float fRec391[2];
	float fVec39[2048];
	float fVec40[8192];
	float fRec390[2];
	float fRec384[2];
	float fRec383[3];
	float fRec382[3];
	float fRec379[3];
	float fRec378[3];
	float fRec377[3];
	float fRec376[3];
	float fVec41[2];
	float fRec360[2];
	float fRec395[2];
	float fRec359[2];
	float fRec358[2];
	float fVec42[2048];
	float fVec43[8192];
	int iRec397[2];
	float fRec396[2];
	int iRec402[2];
	float fRec401[2];
	float fRec400[2];
	float fRec399[2];
	float fRec398[2];
	float fRec403[2];
	float fRec404[2];
	float fRec354[2];
	float fRec340[2];
	float fRec334[3];
	float fRec333[3];
	float fRec330[3];
	float fRec329[3];
	float fRec328[3];
	float fRec327[3];
	float fVec44[2];
	float fRec100[2];
	float fRec99[2];
	float fVec45[2];
	float fRec98[2];
	float fRec97[2];
	float fRec96[2];
	float fRec405[2];
	int iRec408[2];
	float fRec407[2];
	float fRec406[2];
	int iRec410[2];
	float fVec46[2];
	int iRec411[2];
	int iRec412[2];
	int iRec413[2];
	float fVec47[2];
	float fRec85[2];
	float fRec84[2];
	float fRec83[2];
	float fVec48[2];
	float fRec82[2];
	float fRec81[3];
	int iRec419[2];
	float fVec49[2];
	float fRec418[2];
	int iRec424[2];
	int iRec426[2];
	float fRec425[2];
	float fRec423[2];
	float fRec422[2];
	int iRec432[2];
	float fRec431[2];
	float fRec430[2];
	int iRec433[2];
	int iRec435[2];
	float fRec434[2];
	float fRec429[2];
	float fRec428[2];
	int iRec438[2];
	int iRec440[2];
	float fRec439[2];
	float fRec437[2];
	float fRec436[2];
	int iRec444[2];
	float fRec443[2];
	float fRec442[2];
	float fRec457[2];
	float fRec456[2];
	float fVec50[2];
	float fRec455[2];
	float fRec454[2];
	float fRec453[2];
	int iRec459[2];
	float fVec51[2];
	int iRec460[2];
	int iRec461[2];
	int iRec462[2];
	float fVec52[2];
	float fRec452[2];
	float fRec451[2];
	float fRec450[2];
	float fVec53[2];
	float fRec449[2];
	float fRec448[3];
	int iRec468[2];
	float fVec54[2];
	float fRec467[2];
	int iRec474[2];
	int iRec476[2];
	float fRec475[2];
	float fRec473[2];
	float fRec472[2];
	float fRec480[2];
	float fRec481[2];
	float fRec479[2];
	float fRec478[2];
	float fVec55[2048];
	float fVec56[8192];
	float fRec477[2];
	float fRec471[2];
	float fRec470[3];
	float fRec469[3];
	float fRec466[3];
	float fRec465[3];
	float fRec464[3];
	float fRec463[3];
	float fVec57[2];
	float fRec447[2];
	float fRec482[2];
	float fRec446[2];
	float fRec445[2];
	float fVec58[2048];
	float fVec59[8192];
	int iRec484[2];
	float fRec483[2];
	int iRec489[2];
	float fRec488[2];
	float fRec487[2];
	float fRec486[2];
	float fRec485[2];
	float fRec490[2];
	float fRec491[2];
	float fRec441[2];
	float fRec427[2];
	float fRec421[3];
	float fRec420[3];
	float fRec417[3];
	float fRec416[3];
	float fRec415[3];
	float fRec414[3];
	float fVec60[2];
	float fRec80[2];
	float fRec79[2];
	float fVec61[2];
	float fRec78[2];
	float fRec77[2];
	float fRec76[2];
	float fRec492[2];
	int iRec495[2];
	float fRec494[2];
	float fRec493[2];
	int iRec497[2];
	float fVec62[2];
	int iRec498[2];
	int iRec499[2];
	int iRec500[2];
	float fVec63[2];
	float fRec65[2];
	float fRec64[2];
	float fRec63[2];
	float fVec64[2];
	float fRec62[2];
	float fRec61[3];
	int iRec506[2];
	float fVec65[2];
	float fRec505[2];
	int iRec511[2];
	int iRec513[2];
	float fRec512[2];
	float fRec510[2];
	float fRec509[2];
	int iRec519[2];
	float fRec518[2];
	float fRec517[2];
	int iRec520[2];
	int iRec522[2];
	float fRec521[2];
	float fRec516[2];
	float fRec515[2];
	int iRec525[2];
	int iRec527[2];
	float fRec526[2];
	float fRec524[2];
	float fRec523[2];
	int iRec531[2];
	float fRec530[2];
	float fRec529[2];
	float fRec544[2];
	float fRec543[2];
	float fVec66[2];
	float fRec542[2];
	float fRec541[2];
	float fRec540[2];
	int iRec546[2];
	float fVec67[2];
	int iRec547[2];
	int iRec548[2];
	int iRec549[2];
	float fVec68[2];
	float fRec539[2];
	float fRec538[2];
	float fRec537[2];
	float fVec69[2];
	float fRec536[2];
	float fRec535[3];
	int iRec555[2];
	float fVec70[2];
	float fRec554[2];
	int iRec561[2];
	int iRec563[2];
	float fRec562[2];
	float fRec560[2];
	float fRec559[2];
	float fRec567[2];
	float fRec568[2];
	float fRec566[2];
	float fRec565[2];
	float fVec71[2048];
	float fVec72[8192];
	float fRec564[2];
	float fRec558[2];
	float fRec557[3];
	float fRec556[3];
	float fRec553[3];
	float fRec552[3];
	float fRec551[3];
	float fRec550[3];
	float fVec73[2];
	float fRec534[2];
	float fRec569[2];
	float fRec533[2];
	float fRec532[2];
	float fVec74[2048];
	float fVec75[8192];
	int iRec571[2];
	float fRec570[2];
	int iRec576[2];
	float fRec575[2];
	float fRec574[2];
	float fRec573[2];
	float fRec572[2];
	float fRec577[2];
	float fRec578[2];
	float fRec528[2];
	float fRec514[2];
	float fRec508[3];
	float fRec507[3];
	float fRec504[3];
	float fRec503[3];
	float fRec502[3];
	float fRec501[3];
	float fVec76[2];
	float fRec60[2];
	float fRec59[2];
	float fVec77[2];
	float fRec58[2];
	float fRec57[2];
	float fRec56[2];
	float fRec579[2];
	int iRec582[2];
	float fRec581[2];
	float fRec580[2];
	int iRec584[2];
	float fVec78[2];
	int iRec585[2];
	float fVec79[2];
	float fRec45[2];
	float fRec44[2];
	float fRec43[2];
	float fVec80[2];
	float fRec42[2];
	float fRec41[3];
	int iRec591[2];
	float fVec81[2];
	float fRec590[2];
	int iRec596[2];
	int iRec598[2];
	float fRec597[2];
	float fRec595[2];
	float fRec594[2];
	int iRec604[2];
	float fRec603[2];
	float fRec602[2];
	int iRec605[2];
	int iRec607[2];
	float fRec606[2];
	float fRec601[2];
	float fRec600[2];
	int iRec610[2];
	int iRec612[2];
	float fRec611[2];
	float fRec609[2];
	float fRec608[2];
	int iRec616[2];
	float fRec615[2];
	float fRec614[2];
	float fRec629[2];
	float fRec628[2];
	float fVec82[2];
	float fRec627[2];
	float fRec626[2];
	float fRec625[2];
	int iRec631[2];
	float fVec83[2];
	int iRec632[2];
	int iRec633[2];
	int iRec634[2];
	float fVec84[2];
	float fRec624[2];
	float fRec623[2];
	float fRec622[2];
	float fVec85[2];
	float fRec621[2];
	float fRec620[3];
	int iRec640[2];
	float fVec86[2];
	float fRec639[2];
	int iRec646[2];
	int iRec648[2];
	float fRec647[2];
	float fRec645[2];
	float fRec644[2];
	float fRec652[2];
	float fRec653[2];
	float fRec651[2];
	float fRec650[2];
	float fVec87[2048];
	float fVec88[8192];
	float fRec649[2];
	float fRec643[2];
	float fRec642[3];
	float fRec641[3];
	float fRec638[3];
	float fRec637[3];
	float fRec636[3];
	float fRec635[3];
	float fVec89[2];
	float fRec619[2];
	float fRec654[2];
	float fRec618[2];
	float fRec617[2];
	float fVec90[2048];
	float fVec91[8192];
	int iRec656[2];
	float fRec655[2];
	int iRec661[2];
	float fRec660[2];
	float fRec659[2];
	float fRec658[2];
	float fRec657[2];
	float fRec662[2];
	float fRec663[2];
	float fRec613[2];
	float fRec599[2];
	float fRec593[3];
	float fRec592[3];
	float fRec589[3];
	float fRec588[3];
	float fRec587[3];
	float fRec586[3];
	float fVec92[2];
	float fRec40[2];
	float fRec39[2];
	float fVec93[2];
	float fRec38[2];
	float fRec37[2];
	float fRec36[2];
	float fRec664[2];
	int iRec667[2];
	float fRec666[2];
	float fRec665[2];
	int iRec669[2];
	float fVec94[2];
	int iRec670[2];
	int iRec671[2];
	float fVec95[2];
	float fRec25[2];
	float fRec24[2];
	float fRec23[2];
	float fVec96[2];
	float fRec22[2];
	float fRec21[3];
	int iRec677[2];
	float fVec97[2];
	float fRec676[2];
	int iRec682[2];
	int iRec684[2];
	float fRec683[2];
	float fRec681[2];
	float fRec680[2];
	int iRec690[2];
	float fRec689[2];
	float fRec688[2];
	int iRec691[2];
	int iRec693[2];
	float fRec692[2];
	float fRec687[2];
	float fRec686[2];
	int iRec696[2];
	int iRec698[2];
	float fRec697[2];
	float fRec695[2];
	float fRec694[2];
	int iRec702[2];
	float fRec701[2];
	float fRec700[2];
	float fRec715[2];
	float fRec714[2];
	float fVec98[2];
	float fRec713[2];
	float fRec712[2];
	float fRec711[2];
	int iRec717[2];
	float fVec99[2];
	int iRec718[2];
	float fVec100[2];
	float fRec710[2];
	float fRec709[2];
	float fRec708[2];
	float fVec101[2];
	float fRec707[2];
	float fRec706[3];
	int iRec724[2];
	float fVec102[2];
	float fRec723[2];
	int iRec730[2];
	int iRec732[2];
	float fRec731[2];
	float fRec729[2];
	float fRec728[2];
	float fRec736[2];
	float fRec737[2];
	float fRec735[2];
	float fRec734[2];
	float fVec103[2048];
	float fVec104[8192];
	float fRec733[2];
	float fRec727[2];
	float fRec726[3];
	float fRec725[3];
	float fRec722[3];
	float fRec721[3];
	float fRec720[3];
	float fRec719[3];
	float fVec105[2];
	float fRec705[2];
	float fRec738[2];
	float fRec704[2];
	float fRec703[2];
	float fVec106[2048];
	float fVec107[8192];
	int iRec740[2];
	float fRec739[2];
	int iRec745[2];
	float fRec744[2];
	float fRec743[2];
	float fRec742[2];
	float fRec741[2];
	float fRec746[2];
	float fRec747[2];
	float fRec699[2];
	float fRec685[2];
	float fRec679[3];
	float fRec678[3];
	float fRec675[3];
	float fRec674[3];
	float fRec673[3];
	float fRec672[3];
	float fVec108[2];
	float fRec20[2];
	float fRec19[2];
	float fVec109[2];
	float fRec18[2];
	float fRec16[2];
	float fRec15[2];
	float fRec748[2];
	int iRec751[2];
	float fRec750[2];
	float fRec749[2];
	int iRec753[2];
	float fVec110[2];
	int iRec754[2];
	int iRec755[2];
	float fVec111[2];
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fVec112[2];
	float fRec1[2];
	float fRec0[3];
	int iRec761[2];
	float fVec113[2];
	float fRec760[2];
	int iRec766[2];
	int iRec768[2];
	float fRec767[2];
	float fRec765[2];
	float fRec764[2];
	int iRec774[2];
	float fRec773[2];
	float fRec772[2];
	int iRec775[2];
	int iRec777[2];
	float fRec776[2];
	float fRec771[2];
	float fRec770[2];
	int iRec780[2];
	int iRec782[2];
	float fRec781[2];
	float fRec779[2];
	float fRec778[2];
	int iRec786[2];
	float fRec785[2];
	float fRec784[2];
	float fRec799[2];
	float fRec798[2];
	float fVec114[2];
	float fRec797[2];
	float fRec796[2];
	float fRec795[2];
	int iRec801[2];
	float fVec115[2];
	int iRec802[2];
	int iRec803[2];
	float fVec116[2];
	float fRec794[2];
	float fRec793[2];
	float fRec792[2];
	float fVec117[2];
	float fRec791[2];
	float fRec790[3];
	int iRec809[2];
	float fVec118[2];
	float fRec808[2];
	int iRec815[2];
	int iRec817[2];
	float fRec816[2];
	float fRec814[2];
	float fRec813[2];
	float fRec821[2];
	float fRec822[2];
	float fRec820[2];
	float fRec819[2];
	float fVec119[2048];
	float fVec120[8192];
	float fRec818[2];
	float fRec812[2];
	float fRec811[3];
	float fRec810[3];
	float fRec807[3];
	float fRec806[3];
	float fRec805[3];
	float fRec804[3];
	float fVec121[2];
	float fRec789[2];
	float fRec823[2];
	float fRec788[2];
	float fRec787[2];
	float fVec122[2048];
	float fVec123[8192];
	int iRec825[2];
	float fRec824[2];
	int iRec830[2];
	float fRec829[2];
	float fRec828[2];
	float fRec827[2];
	float fRec826[2];
	float fRec831[2];
	float fRec832[2];
	float fRec783[2];
	float fRec769[2];
	float fRec763[3];
	float fRec762[3];
	float fRec759[3];
	float fRec758[3];
	float fRec757[3];
	float fRec756[3];
	FAUSTFLOAT fHslider33;
	float fRec833[2];
	float fConst90;
	float fRec835[2];
	float fRec834[3];
	FAUSTFLOAT fHslider34;
	float fRec836[2];
	float fRec846[2];
	float fRec845[2];
	float fVec124[2];
	float fRec844[2];
	float fRec843[2];
	float fRec842[2];
	int iRec848[2];
	float fVec125[2];
	int iRec849[2];
	int iRec850[2];
	float fVec126[2];
	float fRec841[2];
	float fRec840[2];
	float fRec839[2];
	float fVec127[2];
	float fRec838[2];
	float fRec837[3];
	int iRec856[2];
	float fVec128[2];
	float fRec855[2];
	int iRec862[2];
	int iRec864[2];
	float fRec863[2];
	float fRec861[2];
	float fRec860[2];
	float fRec868[2];
	float fRec869[2];
	float fRec867[2];
	float fRec866[2];
	float fVec129[2048];
	float fVec130[8192];
	float fRec865[2];
	float fRec859[2];
	float fRec858[3];
	float fRec857[3];
	float fRec854[3];
	float fRec853[3];
	float fRec852[3];
	float fRec851[3];
	FAUSTFLOAT fHslider35;
	float fRec870[2];
	FAUSTFLOAT fHslider36;
	float fRec871[2];
	FAUSTFLOAT fHslider37;
	float fRec872[2];
	float fConst91;
	float fConst92;
	float fRec873[2];
	FAUSTFLOAT fHslider38;
	float fRec874[2];
	FAUSTFLOAT fHslider39;
	float fRec875[2];
	
 public:
	VhsDsp() {}

	void metadata(Meta* m) { 
		m->declare("analyzers.lib/amp_follower_ar:author", "Jonatan Liljedahl, revised by Romain Michon");
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("basics.lib/bypass2:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/sAndH:author", "Romain Michon");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.12.0");
		m->declare("compile_options", "-a arch_min.cpp -lang cpp -ct 1 -cn VhsDsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("delays.lib/fdelay4:author", "Julius O. Smith III");
		m->declare("delays.lib/fdelayltv:author", "Julius O. Smith III");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("description", "Cascade of up to 8 VHS copies (linear track or Hi-Fi FM), each with its own deck, tape wear and damage history");
		m->declare("filename", "vhs_linear_cascade.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.7.0");
		m->declare("name", "VHS Linear Track + Generation Loss");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "1.4.0");
		m->declare("oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
		m->declare("oscillators.lib/lf_sawpos:licence", "STK-4.3");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "1.5.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.5.0");
		m->declare("version", "0.4.1");
	}

	virtual int getNumInputs() {
		return 2;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
		VhsDspSIG0* sig0 = newVhsDspSIG0();
		sig0->instanceInitVhsDspSIG0(sample_rate);
		sig0->fillVhsDspSIG0(65536, ftbl0VhsDspSIG0);
		VhsDspSIG1* sig1 = newVhsDspSIG1();
		sig1->instanceInitVhsDspSIG1(sample_rate);
		sig1->fillVhsDspSIG1(65536, ftbl1VhsDspSIG1);
		deleteVhsDspSIG0(sig0);
		deleteVhsDspSIG1(sig1);
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 0.45f * fConst0;
		float fConst2 = std::tan(3.1415927f * (std::min<float>(1.9e+04f, fConst1) / fConst0));
		fConst3 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fConst2));
		float fConst4 = 1.0f / fConst2;
		fConst5 = (fConst4 + -1.4142135f) / fConst2 + 1.0f;
		float fConst6 = (fConst4 + 1.4142135f) / fConst2 + 1.0f;
		fConst7 = 1.0f / fConst6;
		fConst8 = std::exp(-(0.4f / fConst0));
		fConst9 = 1.0f - fConst8;
		fConst10 = 4.656613e-10f * fConst9;
		fConst11 = 0.9f / std::sqrt(0.33333334f * (fConst9 * (VhsDsp_faustpower2_f(fConst8) + 1.0f) / VhsDsp_faustpower3_f(fConst8 + 1.0f)));
		fConst12 = 0.016666668f / fConst0;
		fConst13 = 0.3f * fConst0;
		fConst14 = 0.7f * fConst0;
		fConst15 = 1.0f / fConst0;
		float fConst16 = std::tan(18.849556f / fConst0);
		fConst17 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fConst16));
		float fConst18 = 1.0f / fConst16;
		fConst19 = (fConst18 + -1.4142135f) / fConst16 + 1.0f;
		float fConst20 = (fConst18 + 1.4142135f) / fConst16 + 1.0f;
		fConst21 = 1.0f / fConst20;
		fConst22 = 44.1f / fConst0;
		fConst23 = 1.0f - fConst22;
		fConst24 = 0.06f / fConst20;
		fConst25 = 2.0f / fConst0;
		fConst26 = std::exp(-(2e+03f / fConst0));
		fConst27 = std::exp(-(0.6666667f / fConst0));
		fConst28 = 1.0f - fConst27;
		fConst29 = 4.656613e-10f * fConst28;
		fConst30 = 1.0f / std::sqrt(0.33333334f * (fConst28 * (VhsDsp_faustpower2_f(fConst27) + 1.0f) / VhsDsp_faustpower3_f(fConst27 + 1.0f)));
		fConst31 = 1.5e+03f / fConst0;
		fConst32 = 1.0f / std::tan(6283.1855f / fConst0);
		fConst33 = 1.0f - fConst32;
		fConst34 = 1.0f / (fConst32 + 1.0f);
		float fConst35 = std::tan(10053.097f / fConst0);
		fConst36 = fConst35 + -1.0f;
		fConst37 = fConst35 + 1.0f;
		float fConst38 = std::tan(3.1415927f * (std::min<float>(1.4e+04f, fConst1) / fConst0));
		fConst39 = fConst38 / fConst35;
		fConst40 = fConst38 + -1.0f;
		fConst41 = fConst38 + 1.0f;
		fConst42 = 1.0f / fConst41;
		fConst43 = 0.004f * fConst0;
		fConst44 = 1.0f - fConst26;
		fConst45 = fConst35 / fConst38;
		fConst46 = 1.0f / fConst37;
		fConst47 = 1.0f / std::tan(62.831852f / fConst0);
		fConst48 = 1.0f - fConst47;
		fConst49 = 1.0f / (fConst47 + 1.0f);
		fConst50 = 0.7853982f / fConst6;
		fConst51 = 3.1415927f / fConst0;
		float fConst52 = std::tan(282.74335f / fConst0);
		float fConst53 = VhsDsp_faustpower2_f(fConst52);
		fConst54 = 2.0f * (1.0f - 1.0f / fConst53);
		float fConst55 = 1.0f / fConst52;
		fConst56 = (fConst55 + -1.4142135f) / fConst52 + 1.0f;
		float fConst57 = (fConst55 + 1.4142135f) / fConst52 + 1.0f;
		fConst58 = 1.0f / fConst57;
		fConst59 = 4398.2295f / fConst0;
		fConst60 = 1979.2034f / fConst0;
		fConst61 = 2199.1147f / fConst0;
		fConst62 = 1539.3804f / fConst0;
		fConst63 = std::exp(-(5e+01f / fConst0));
		fConst64 = std::exp(-(2.2222223f / fConst0));
		fConst65 = 1.0f - fConst63;
		fConst66 = std::exp(-(1666.6666f / fConst0));
		fConst67 = 1e+03f / fConst0;
		fConst68 = std::exp(-(5.0f / fConst0));
		fConst69 = 1.0f - fConst68;
		fConst70 = 4.656613e-10f * fConst69;
		fConst71 = 1.2f / std::sqrt(0.33333334f * (fConst69 * (VhsDsp_faustpower2_f(fConst68) + 1.0f) / VhsDsp_faustpower3_f(fConst68 + 1.0f)));
		fConst72 = 1.0f - fConst66;
		fConst73 = 0.008333334f / fConst0;
		fConst74 = 6.2831855f / fConst0;
		fConst75 = 0.009f * fConst0;
		fConst76 = std::exp(-(0.33333334f / fConst0));
		fConst77 = 1.0f - fConst76;
		fConst78 = 4.656613e-10f * fConst77;
		fConst79 = 0.5f / std::sqrt(0.33333334f * (fConst77 * (VhsDsp_faustpower2_f(fConst76) + 1.0f) / VhsDsp_faustpower3_f(fConst76 + 1.0f)));
		fConst80 = std::exp(-(2.5e+02f / fConst0));
		fConst81 = std::exp(-fConst67);
		fConst82 = std::exp(-(6.25f / fConst0));
		fConst83 = 1.0f - fConst82;
		fConst84 = 4.656613e-10f * fConst83;
		fConst85 = 65.412186f * std::sqrt(2.2675737e-05f * fConst0);
		fConst86 = 0.5f / fConst0;
		fConst87 = 7.3f / fConst0;
		fConst88 = 0.43f / fConst0;
		fConst89 = 1.0f / (fConst53 * fConst57);
		fConst90 = std::exp(-(1428.5714f / fConst0));
		fConst91 = std::exp(-(4.0f / fConst0));
		fConst92 = std::exp(-(1e+02f / fConst0));
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(4.0f);
		fHslider1 = FAUSTFLOAT(7.0f);
		fHslider2 = FAUSTFLOAT(0.5f);
		fHslider3 = FAUSTFLOAT(-2e+01f);
		fHslider4 = FAUSTFLOAT(0.6f);
		fHslider5 = FAUSTFLOAT(0.7f);
		fHslider6 = FAUSTFLOAT(2e+01f);
		fEntry0 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(0.3f);
		fHslider8 = FAUSTFLOAT(0.0f);
		fHslider9 = FAUSTFLOAT(-48.0f);
		fHslider10 = FAUSTFLOAT(0.15f);
		fHslider11 = FAUSTFLOAT(0.25f);
		fHslider12 = FAUSTFLOAT(-5e+01f);
		fHslider13 = FAUSTFLOAT(0.6f);
		fHslider14 = FAUSTFLOAT(9e+01f);
		fHslider15 = FAUSTFLOAT(3.0f);
		fHslider16 = FAUSTFLOAT(0.5f);
		fHslider17 = FAUSTFLOAT(0.25f);
		fEntry1 = FAUSTFLOAT(0.0f);
		fHslider18 = FAUSTFLOAT(1.0f);
		fHslider19 = FAUSTFLOAT(-34.0f);
		fHslider20 = FAUSTFLOAT(3e+02f);
		fHslider21 = FAUSTFLOAT(1.5f);
		fHslider22 = FAUSTFLOAT(8.0f);
		fHslider23 = FAUSTFLOAT(6.0f);
		fHslider24 = FAUSTFLOAT(0.4f);
		fHslider25 = FAUSTFLOAT(0.12f);
		fHslider26 = FAUSTFLOAT(0.4f);
		fHslider27 = FAUSTFLOAT(3.0f);
		fHslider28 = FAUSTFLOAT(0.1f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fHslider29 = FAUSTFLOAT(1.5e+02f);
		fHslider30 = FAUSTFLOAT(0.25f);
		fHslider31 = FAUSTFLOAT(9e+03f);
		fHslider32 = FAUSTFLOAT(0.15f);
		fHslider33 = FAUSTFLOAT(4e+03f);
		fHslider34 = FAUSTFLOAT(-9e+01f);
		fHslider35 = FAUSTFLOAT(0.03f);
		fHslider36 = FAUSTFLOAT(0.5f);
		fHslider37 = FAUSTFLOAT(0.5f);
		fHslider38 = FAUSTFLOAT(-52.0f);
		fHslider39 = FAUSTFLOAT(0.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			iRec8[l1] = 0;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec7[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec6[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iRec9[l4] = 0;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			iRec10[l5] = 0;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			iRec11[l6] = 0;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			iRec12[l7] = 0;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec5[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec13[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			iRec14[l10] = 0;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec17[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			iRec29[l12] = 0;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec28[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec27[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			iRec30[l15] = 0;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			iRec31[l16] = 0;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			iRec32[l17] = 0;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			iRec33[l18] = 0;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec26[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec34[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			iRec35[l21] = 0;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			iRec49[l22] = 0;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec48[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec47[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			iRec50[l25] = 0;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			iRec51[l26] = 0;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			iRec52[l27] = 0;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			iRec53[l28] = 0;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec46[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec54[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			iRec55[l31] = 0;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			iRec69[l32] = 0;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec68[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec67[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			iRec70[l35] = 0;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			iRec71[l36] = 0;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			iRec72[l37] = 0;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			iRec73[l38] = 0;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec66[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec74[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			iRec75[l41] = 0;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			iRec89[l42] = 0;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec88[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec87[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			iRec90[l45] = 0;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			iRec91[l46] = 0;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			iRec92[l47] = 0;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			iRec93[l48] = 0;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec86[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec94[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			iRec95[l51] = 0;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			iRec109[l52] = 0;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec108[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec107[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			iRec110[l55] = 0;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			iRec111[l56] = 0;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			iRec112[l57] = 0;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			iRec113[l58] = 0;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec106[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec114[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			iRec115[l61] = 0;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			iRec129[l62] = 0;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec128[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec127[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			iRec130[l65] = 0;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			iRec131[l66] = 0;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			iRec132[l67] = 0;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			iRec133[l68] = 0;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec126[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec134[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			iRec135[l71] = 0;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			iRec147[l72] = 0;
		}
		for (int l73 = 0; l73 < 3; l73 = l73 + 1) {
			fRec146[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec148[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec149[l75] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec151[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec152[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec153[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			iRec154[l81] = 0;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec155[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			iRec158[l83] = 0;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec157[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec156[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			iRec161[l86] = 0;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec160[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec159[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			iRec162[l89] = 0;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			iRec163[l90] = 0;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec164[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			iRec166[l92] = 0;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fVec2[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			iRec168[l94] = 0;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			iRec169[l95] = 0;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			iRec170[l96] = 0;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			iRec171[l97] = 0;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec167[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec172[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			iRec173[l100] = 0;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec3[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec178[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec177[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fVec4[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec176[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec175[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec174[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec179[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec5[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec145[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec144[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec143[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fVec6[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec142[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 3; l115 = l115 + 1) {
			fRec141[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec184[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec186[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			iRec187[l118] = 0;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fVec7[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec185[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			iRec192[l121] = 0;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			iRec194[l122] = 0;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec193[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec191[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec190[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			iRec200[l126] = 0;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec199[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec198[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			iRec201[l129] = 0;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			iRec203[l130] = 0;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec202[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec197[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec196[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			iRec206[l134] = 0;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			iRec208[l135] = 0;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec207[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec205[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec204[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			iRec212[l139] = 0;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec211[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec210[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec213[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec217[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec218[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec8[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec216[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec219[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec215[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec214[l149] = 0.0f;
		}
		IOTA0 = 0;
		for (int l150 = 0; l150 < 2048; l150 = l150 + 1) {
			fVec9[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 8192; l151 = l151 + 1) {
			fVec10[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			iRec221[l152] = 0;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec220[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			iRec226[l154] = 0;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec225[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec224[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec223[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec222[l158] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec228[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec229[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec230[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec209[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec195[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fRec189[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 3; l167 = l167 + 1) {
			fRec188[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fRec183[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 3; l169 = l169 + 1) {
			fRec182[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 3; l170 = l170 + 1) {
			fRec181[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 3; l171 = l171 + 1) {
			fRec180[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fVec12[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec140[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec139[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fVec13[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec138[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec137[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec136[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec231[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			iRec234[l180] = 0;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec233[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec232[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			iRec236[l183] = 0;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fVec14[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			iRec237[l185] = 0;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			iRec238[l186] = 0;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			iRec239[l187] = 0;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fVec15[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec125[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec124[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec123[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fVec16[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec122[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec121[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			iRec245[l195] = 0;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec17[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec244[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			iRec250[l198] = 0;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			iRec252[l199] = 0;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec251[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec249[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec248[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			iRec258[l203] = 0;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec257[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec256[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			iRec259[l206] = 0;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			iRec261[l207] = 0;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec260[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec255[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec254[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			iRec264[l211] = 0;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			iRec266[l212] = 0;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec265[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec263[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec262[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			iRec270[l216] = 0;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec269[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec268[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec283[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec282[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fVec18[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec281[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec280[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec279[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			iRec285[l225] = 0;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec19[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			iRec286[l227] = 0;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			iRec287[l228] = 0;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			iRec288[l229] = 0;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fVec20[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec278[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec277[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec276[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fVec21[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec275[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 3; l236 = l236 + 1) {
			fRec274[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			iRec294[l237] = 0;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fVec22[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec293[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			iRec300[l240] = 0;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			iRec302[l241] = 0;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec301[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec299[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec298[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec306[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec307[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec305[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec304[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2048; l249 = l249 + 1) {
			fVec23[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 8192; l250 = l250 + 1) {
			fVec24[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec303[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec297[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 3; l253 = l253 + 1) {
			fRec296[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 3; l254 = l254 + 1) {
			fRec295[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 3; l255 = l255 + 1) {
			fRec292[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 3; l256 = l256 + 1) {
			fRec291[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 3; l257 = l257 + 1) {
			fRec290[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 3; l258 = l258 + 1) {
			fRec289[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fVec25[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec273[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec308[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec272[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec271[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2048; l264 = l264 + 1) {
			fVec26[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 8192; l265 = l265 + 1) {
			fVec27[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			iRec310[l266] = 0;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec309[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			iRec315[l268] = 0;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec314[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec313[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec312[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec311[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec316[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec317[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec267[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec253[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 3; l277 = l277 + 1) {
			fRec247[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 3; l278 = l278 + 1) {
			fRec246[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 3; l279 = l279 + 1) {
			fRec243[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 3; l280 = l280 + 1) {
			fRec242[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 3; l281 = l281 + 1) {
			fRec241[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 3; l282 = l282 + 1) {
			fRec240[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fVec28[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec120[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec119[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fVec29[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec118[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fRec117[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec116[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec318[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			iRec321[l291] = 0;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec320[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec319[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			iRec323[l294] = 0;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fVec30[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			iRec324[l296] = 0;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			iRec325[l297] = 0;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			iRec326[l298] = 0;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fVec31[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec105[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec104[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec103[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fVec32[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec102[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 3; l305 = l305 + 1) {
			fRec101[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			iRec332[l306] = 0;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fVec33[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec331[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			iRec337[l309] = 0;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			iRec339[l310] = 0;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec338[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec336[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec335[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			iRec345[l314] = 0;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec344[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec343[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			iRec346[l317] = 0;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			iRec348[l318] = 0;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec347[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec342[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fRec341[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			iRec351[l322] = 0;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			iRec353[l323] = 0;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fRec352[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec350[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec349[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			iRec357[l327] = 0;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec356[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec355[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec370[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec369[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fVec34[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fRec368[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec367[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fRec366[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 2; l336 = l336 + 1) {
			iRec372[l336] = 0;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fVec35[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			iRec373[l338] = 0;
		}
		for (int l339 = 0; l339 < 2; l339 = l339 + 1) {
			iRec374[l339] = 0;
		}
		for (int l340 = 0; l340 < 2; l340 = l340 + 1) {
			iRec375[l340] = 0;
		}
		for (int l341 = 0; l341 < 2; l341 = l341 + 1) {
			fVec36[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 2; l342 = l342 + 1) {
			fRec365[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec364[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec363[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2; l345 = l345 + 1) {
			fVec37[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec362[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 3; l347 = l347 + 1) {
			fRec361[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			iRec381[l348] = 0;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fVec38[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec380[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			iRec387[l351] = 0;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			iRec389[l352] = 0;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec388[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fRec386[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec385[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec393[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec394[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec392[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec391[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2048; l360 = l360 + 1) {
			fVec39[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 8192; l361 = l361 + 1) {
			fVec40[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec390[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec384[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 3; l364 = l364 + 1) {
			fRec383[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 3; l365 = l365 + 1) {
			fRec382[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 3; l366 = l366 + 1) {
			fRec379[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 3; l367 = l367 + 1) {
			fRec378[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 3; l368 = l368 + 1) {
			fRec377[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 3; l369 = l369 + 1) {
			fRec376[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fVec41[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2; l371 = l371 + 1) {
			fRec360[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2; l372 = l372 + 1) {
			fRec395[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec359[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec358[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2048; l375 = l375 + 1) {
			fVec42[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 8192; l376 = l376 + 1) {
			fVec43[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			iRec397[l377] = 0;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec396[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			iRec402[l379] = 0;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec401[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec400[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec399[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec398[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fRec403[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec404[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec354[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fRec340[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 3; l388 = l388 + 1) {
			fRec334[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 3; l389 = l389 + 1) {
			fRec333[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 3; l390 = l390 + 1) {
			fRec330[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 3; l391 = l391 + 1) {
			fRec329[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 3; l392 = l392 + 1) {
			fRec328[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 3; l393 = l393 + 1) {
			fRec327[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 2; l394 = l394 + 1) {
			fVec44[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 2; l395 = l395 + 1) {
			fRec100[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2; l396 = l396 + 1) {
			fRec99[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2; l397 = l397 + 1) {
			fVec45[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 2; l398 = l398 + 1) {
			fRec98[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 2; l399 = l399 + 1) {
			fRec97[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fRec96[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec405[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			iRec408[l402] = 0;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fRec407[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec406[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			iRec410[l405] = 0;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fVec46[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			iRec411[l407] = 0;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			iRec412[l408] = 0;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			iRec413[l409] = 0;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fVec47[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 2; l411 = l411 + 1) {
			fRec85[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 2; l412 = l412 + 1) {
			fRec84[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fRec83[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fVec48[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			fRec82[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 3; l416 = l416 + 1) {
			fRec81[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2; l417 = l417 + 1) {
			iRec419[l417] = 0;
		}
		for (int l418 = 0; l418 < 2; l418 = l418 + 1) {
			fVec49[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2; l419 = l419 + 1) {
			fRec418[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 2; l420 = l420 + 1) {
			iRec424[l420] = 0;
		}
		for (int l421 = 0; l421 < 2; l421 = l421 + 1) {
			iRec426[l421] = 0;
		}
		for (int l422 = 0; l422 < 2; l422 = l422 + 1) {
			fRec425[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 2; l423 = l423 + 1) {
			fRec423[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 2; l424 = l424 + 1) {
			fRec422[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 2; l425 = l425 + 1) {
			iRec432[l425] = 0;
		}
		for (int l426 = 0; l426 < 2; l426 = l426 + 1) {
			fRec431[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fRec430[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			iRec433[l428] = 0;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			iRec435[l429] = 0;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec434[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec429[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fRec428[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			iRec438[l433] = 0;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			iRec440[l434] = 0;
		}
		for (int l435 = 0; l435 < 2; l435 = l435 + 1) {
			fRec439[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2; l436 = l436 + 1) {
			fRec437[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2; l437 = l437 + 1) {
			fRec436[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			iRec444[l438] = 0;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fRec443[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec442[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fRec457[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fRec456[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2; l443 = l443 + 1) {
			fVec50[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 2; l444 = l444 + 1) {
			fRec455[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2; l445 = l445 + 1) {
			fRec454[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 2; l446 = l446 + 1) {
			fRec453[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 2; l447 = l447 + 1) {
			iRec459[l447] = 0;
		}
		for (int l448 = 0; l448 < 2; l448 = l448 + 1) {
			fVec51[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 2; l449 = l449 + 1) {
			iRec460[l449] = 0;
		}
		for (int l450 = 0; l450 < 2; l450 = l450 + 1) {
			iRec461[l450] = 0;
		}
		for (int l451 = 0; l451 < 2; l451 = l451 + 1) {
			iRec462[l451] = 0;
		}
		for (int l452 = 0; l452 < 2; l452 = l452 + 1) {
			fVec52[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fRec452[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fRec451[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fRec450[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fVec53[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec449[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 3; l458 = l458 + 1) {
			fRec448[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			iRec468[l459] = 0;
		}
		for (int l460 = 0; l460 < 2; l460 = l460 + 1) {
			fVec54[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 2; l461 = l461 + 1) {
			fRec467[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 2; l462 = l462 + 1) {
			iRec474[l462] = 0;
		}
		for (int l463 = 0; l463 < 2; l463 = l463 + 1) {
			iRec476[l463] = 0;
		}
		for (int l464 = 0; l464 < 2; l464 = l464 + 1) {
			fRec475[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 2; l465 = l465 + 1) {
			fRec473[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 2; l466 = l466 + 1) {
			fRec472[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fRec480[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fRec481[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 2; l469 = l469 + 1) {
			fRec479[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 2; l470 = l470 + 1) {
			fRec478[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 2048; l471 = l471 + 1) {
			fVec55[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 8192; l472 = l472 + 1) {
			fVec56[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 2; l473 = l473 + 1) {
			fRec477[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 2; l474 = l474 + 1) {
			fRec471[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 3; l475 = l475 + 1) {
			fRec470[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 3; l476 = l476 + 1) {
			fRec469[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 3; l477 = l477 + 1) {
			fRec466[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 3; l478 = l478 + 1) {
			fRec465[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 3; l479 = l479 + 1) {
			fRec464[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 3; l480 = l480 + 1) {
			fRec463[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 2; l481 = l481 + 1) {
			fVec57[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 2; l482 = l482 + 1) {
			fRec447[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 2; l483 = l483 + 1) {
			fRec482[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2; l484 = l484 + 1) {
			fRec446[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 2; l485 = l485 + 1) {
			fRec445[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 2048; l486 = l486 + 1) {
			fVec58[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 8192; l487 = l487 + 1) {
			fVec59[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 2; l488 = l488 + 1) {
			iRec484[l488] = 0;
		}
		for (int l489 = 0; l489 < 2; l489 = l489 + 1) {
			fRec483[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 2; l490 = l490 + 1) {
			iRec489[l490] = 0;
		}
		for (int l491 = 0; l491 < 2; l491 = l491 + 1) {
			fRec488[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 2; l492 = l492 + 1) {
			fRec487[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 2; l493 = l493 + 1) {
			fRec486[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 2; l494 = l494 + 1) {
			fRec485[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 2; l495 = l495 + 1) {
			fRec490[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 2; l496 = l496 + 1) {
			fRec491[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 2; l497 = l497 + 1) {
			fRec441[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 2; l498 = l498 + 1) {
			fRec427[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 3; l499 = l499 + 1) {
			fRec421[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 3; l500 = l500 + 1) {
			fRec420[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 3; l501 = l501 + 1) {
			fRec417[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 3; l502 = l502 + 1) {
			fRec416[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 3; l503 = l503 + 1) {
			fRec415[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 3; l504 = l504 + 1) {
			fRec414[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 2; l505 = l505 + 1) {
			fVec60[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 2; l506 = l506 + 1) {
			fRec80[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 2; l507 = l507 + 1) {
			fRec79[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 2; l508 = l508 + 1) {
			fVec61[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 2; l509 = l509 + 1) {
			fRec78[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 2; l510 = l510 + 1) {
			fRec77[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 2; l511 = l511 + 1) {
			fRec76[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 2; l512 = l512 + 1) {
			fRec492[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 2; l513 = l513 + 1) {
			iRec495[l513] = 0;
		}
		for (int l514 = 0; l514 < 2; l514 = l514 + 1) {
			fRec494[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 2; l515 = l515 + 1) {
			fRec493[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 2; l516 = l516 + 1) {
			iRec497[l516] = 0;
		}
		for (int l517 = 0; l517 < 2; l517 = l517 + 1) {
			fVec62[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 2; l518 = l518 + 1) {
			iRec498[l518] = 0;
		}
		for (int l519 = 0; l519 < 2; l519 = l519 + 1) {
			iRec499[l519] = 0;
		}
		for (int l520 = 0; l520 < 2; l520 = l520 + 1) {
			iRec500[l520] = 0;
		}
		for (int l521 = 0; l521 < 2; l521 = l521 + 1) {
			fVec63[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 2; l522 = l522 + 1) {
			fRec65[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 2; l523 = l523 + 1) {
			fRec64[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 2; l524 = l524 + 1) {
			fRec63[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 2; l525 = l525 + 1) {
			fVec64[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 2; l526 = l526 + 1) {
			fRec62[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 3; l527 = l527 + 1) {
			fRec61[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 2; l528 = l528 + 1) {
			iRec506[l528] = 0;
		}
		for (int l529 = 0; l529 < 2; l529 = l529 + 1) {
			fVec65[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 2; l530 = l530 + 1) {
			fRec505[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 2; l531 = l531 + 1) {
			iRec511[l531] = 0;
		}
		for (int l532 = 0; l532 < 2; l532 = l532 + 1) {
			iRec513[l532] = 0;
		}
		for (int l533 = 0; l533 < 2; l533 = l533 + 1) {
			fRec512[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 2; l534 = l534 + 1) {
			fRec510[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 2; l535 = l535 + 1) {
			fRec509[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 2; l536 = l536 + 1) {
			iRec519[l536] = 0;
		}
		for (int l537 = 0; l537 < 2; l537 = l537 + 1) {
			fRec518[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 2; l538 = l538 + 1) {
			fRec517[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 2; l539 = l539 + 1) {
			iRec520[l539] = 0;
		}
		for (int l540 = 0; l540 < 2; l540 = l540 + 1) {
			iRec522[l540] = 0;
		}
		for (int l541 = 0; l541 < 2; l541 = l541 + 1) {
			fRec521[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 2; l542 = l542 + 1) {
			fRec516[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 2; l543 = l543 + 1) {
			fRec515[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 2; l544 = l544 + 1) {
			iRec525[l544] = 0;
		}
		for (int l545 = 0; l545 < 2; l545 = l545 + 1) {
			iRec527[l545] = 0;
		}
		for (int l546 = 0; l546 < 2; l546 = l546 + 1) {
			fRec526[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 2; l547 = l547 + 1) {
			fRec524[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 2; l548 = l548 + 1) {
			fRec523[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 2; l549 = l549 + 1) {
			iRec531[l549] = 0;
		}
		for (int l550 = 0; l550 < 2; l550 = l550 + 1) {
			fRec530[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 2; l551 = l551 + 1) {
			fRec529[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 2; l552 = l552 + 1) {
			fRec544[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 2; l553 = l553 + 1) {
			fRec543[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 2; l554 = l554 + 1) {
			fVec66[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 2; l555 = l555 + 1) {
			fRec542[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 2; l556 = l556 + 1) {
			fRec541[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 2; l557 = l557 + 1) {
			fRec540[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 2; l558 = l558 + 1) {
			iRec546[l558] = 0;
		}
		for (int l559 = 0; l559 < 2; l559 = l559 + 1) {
			fVec67[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 2; l560 = l560 + 1) {
			iRec547[l560] = 0;
		}
		for (int l561 = 0; l561 < 2; l561 = l561 + 1) {
			iRec548[l561] = 0;
		}
		for (int l562 = 0; l562 < 2; l562 = l562 + 1) {
			iRec549[l562] = 0;
		}
		for (int l563 = 0; l563 < 2; l563 = l563 + 1) {
			fVec68[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 2; l564 = l564 + 1) {
			fRec539[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 2; l565 = l565 + 1) {
			fRec538[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 2; l566 = l566 + 1) {
			fRec537[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 2; l567 = l567 + 1) {
			fVec69[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 2; l568 = l568 + 1) {
			fRec536[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 3; l569 = l569 + 1) {
			fRec535[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 2; l570 = l570 + 1) {
			iRec555[l570] = 0;
		}
		for (int l571 = 0; l571 < 2; l571 = l571 + 1) {
			fVec70[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 2; l572 = l572 + 1) {
			fRec554[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 2; l573 = l573 + 1) {
			iRec561[l573] = 0;
		}
		for (int l574 = 0; l574 < 2; l574 = l574 + 1) {
			iRec563[l574] = 0;
		}
		for (int l575 = 0; l575 < 2; l575 = l575 + 1) {
			fRec562[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 2; l576 = l576 + 1) {
			fRec560[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 2; l577 = l577 + 1) {
			fRec559[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 2; l578 = l578 + 1) {
			fRec567[l578] = 0.0f;
		}
		for (int l579 = 0; l579 < 2; l579 = l579 + 1) {
			fRec568[l579] = 0.0f;
		}
		for (int l580 = 0; l580 < 2; l580 = l580 + 1) {
			fRec566[l580] = 0.0f;
		}
		for (int l581 = 0; l581 < 2; l581 = l581 + 1) {
			fRec565[l581] = 0.0f;
		}
		for (int l582 = 0; l582 < 2048; l582 = l582 + 1) {
			fVec71[l582] = 0.0f;
		}
		for (int l583 = 0; l583 < 8192; l583 = l583 + 1) {
			fVec72[l583] = 0.0f;
		}
		for (int l584 = 0; l584 < 2; l584 = l584 + 1) {
			fRec564[l584] = 0.0f;
		}
		for (int l585 = 0; l585 < 2; l585 = l585 + 1) {
			fRec558[l585] = 0.0f;
		}
		for (int l586 = 0; l586 < 3; l586 = l586 + 1) {
			fRec557[l586] = 0.0f;
		}
		for (int l587 = 0; l587 < 3; l587 = l587 + 1) {
			fRec556[l587] = 0.0f;
		}
		for (int l588 = 0; l588 < 3; l588 = l588 + 1) {
			fRec553[l588] = 0.0f;
		}
		for (int l589 = 0; l589 < 3; l589 = l589 + 1) {
			fRec552[l589] = 0.0f;
		}
		for (int l590 = 0; l590 < 3; l590 = l590 + 1) {
			fRec551[l590] = 0.0f;
		}
		for (int l591 = 0; l591 < 3; l591 = l591 + 1) {
			fRec550[l591] = 0.0f;
		}
		for (int l592 = 0; l592 < 2; l592 = l592 + 1) {
			fVec73[l592] = 0.0f;
		}
		for (int l593 = 0; l593 < 2; l593 = l593 + 1) {
			fRec534[l593] = 0.0f;
		}
		for (int l594 = 0; l594 < 2; l594 = l594 + 1) {
			fRec569[l594] = 0.0f;
		}
		for (int l595 = 0; l595 < 2; l595 = l595 + 1) {
			fRec533[l595] = 0.0f;
		}
		for (int l596 = 0; l596 < 2; l596 = l596 + 1) {
			fRec532[l596] = 0.0f;
		}
		for (int l597 = 0; l597 < 2048; l597 = l597 + 1) {
			fVec74[l597] = 0.0f;
		}
		for (int l598 = 0; l598 < 8192; l598 = l598 + 1) {
			fVec75[l598] = 0.0f;
		}
		for (int l599 = 0; l599 < 2; l599 = l599 + 1) {
			iRec571[l599] = 0;
		}
		for (int l600 = 0; l600 < 2; l600 = l600 + 1) {
			fRec570[l600] = 0.0f;
		}
		for (int l601 = 0; l601 < 2; l601 = l601 + 1) {
			iRec576[l601] = 0;
		}
		for (int l602 = 0; l602 < 2; l602 = l602 + 1) {
			fRec575[l602] = 0.0f;
		}
		for (int l603 = 0; l603 < 2; l603 = l603 + 1) {
			fRec574[l603] = 0.0f;
		}
		for (int l604 = 0; l604 < 2; l604 = l604 + 1) {
			fRec573[l604] = 0.0f;
		}
		for (int l605 = 0; l605 < 2; l605 = l605 + 1) {
			fRec572[l605] = 0.0f;
		}
		for (int l606 = 0; l606 < 2; l606 = l606 + 1) {
			fRec577[l606] = 0.0f;
		}
		for (int l607 = 0; l607 < 2; l607 = l607 + 1) {
			fRec578[l607] = 0.0f;
		}
		for (int l608 = 0; l608 < 2; l608 = l608 + 1) {
			fRec528[l608] = 0.0f;
		}
		for (int l609 = 0; l609 < 2; l609 = l609 + 1) {
			fRec514[l609] = 0.0f;
		}
		for (int l610 = 0; l610 < 3; l610 = l610 + 1) {
			fRec508[l610] = 0.0f;
		}
		for (int l611 = 0; l611 < 3; l611 = l611 + 1) {
			fRec507[l611] = 0.0f;
		}
		for (int l612 = 0; l612 < 3; l612 = l612 + 1) {
			fRec504[l612] = 0.0f;
		}
		for (int l613 = 0; l613 < 3; l613 = l613 + 1) {
			fRec503[l613] = 0.0f;
		}
		for (int l614 = 0; l614 < 3; l614 = l614 + 1) {
			fRec502[l614] = 0.0f;
		}
		for (int l615 = 0; l615 < 3; l615 = l615 + 1) {
			fRec501[l615] = 0.0f;
		}
		for (int l616 = 0; l616 < 2; l616 = l616 + 1) {
			fVec76[l616] = 0.0f;
		}
		for (int l617 = 0; l617 < 2; l617 = l617 + 1) {
			fRec60[l617] = 0.0f;
		}
		for (int l618 = 0; l618 < 2; l618 = l618 + 1) {
			fRec59[l618] = 0.0f;
		}
		for (int l619 = 0; l619 < 2; l619 = l619 + 1) {
			fVec77[l619] = 0.0f;
		}
		for (int l620 = 0; l620 < 2; l620 = l620 + 1) {
			fRec58[l620] = 0.0f;
		}
		for (int l621 = 0; l621 < 2; l621 = l621 + 1) {
			fRec57[l621] = 0.0f;
		}
		for (int l622 = 0; l622 < 2; l622 = l622 + 1) {
			fRec56[l622] = 0.0f;
		}
		for (int l623 = 0; l623 < 2; l623 = l623 + 1) {
			fRec579[l623] = 0.0f;
		}
		for (int l624 = 0; l624 < 2; l624 = l624 + 1) {
			iRec582[l624] = 0;
		}
		for (int l625 = 0; l625 < 2; l625 = l625 + 1) {
			fRec581[l625] = 0.0f;
		}
		for (int l626 = 0; l626 < 2; l626 = l626 + 1) {
			fRec580[l626] = 0.0f;
		}
		for (int l627 = 0; l627 < 2; l627 = l627 + 1) {
			iRec584[l627] = 0;
		}
		for (int l628 = 0; l628 < 2; l628 = l628 + 1) {
			fVec78[l628] = 0.0f;
		}
		for (int l629 = 0; l629 < 2; l629 = l629 + 1) {
			iRec585[l629] = 0;
		}
		for (int l630 = 0; l630 < 2; l630 = l630 + 1) {
			fVec79[l630] = 0.0f;
		}
		for (int l631 = 0; l631 < 2; l631 = l631 + 1) {
			fRec45[l631] = 0.0f;
		}
		for (int l632 = 0; l632 < 2; l632 = l632 + 1) {
			fRec44[l632] = 0.0f;
		}
		for (int l633 = 0; l633 < 2; l633 = l633 + 1) {
			fRec43[l633] = 0.0f;
		}
		for (int l634 = 0; l634 < 2; l634 = l634 + 1) {
			fVec80[l634] = 0.0f;
		}
		for (int l635 = 0; l635 < 2; l635 = l635 + 1) {
			fRec42[l635] = 0.0f;
		}
		for (int l636 = 0; l636 < 3; l636 = l636 + 1) {
			fRec41[l636] = 0.0f;
		}
		for (int l637 = 0; l637 < 2; l637 = l637 + 1) {
			iRec591[l637] = 0;
		}
		for (int l638 = 0; l638 < 2; l638 = l638 + 1) {
			fVec81[l638] = 0.0f;
		}
		for (int l639 = 0; l639 < 2; l639 = l639 + 1) {
			fRec590[l639] = 0.0f;
		}
		for (int l640 = 0; l640 < 2; l640 = l640 + 1) {
			iRec596[l640] = 0;
		}
		for (int l641 = 0; l641 < 2; l641 = l641 + 1) {
			iRec598[l641] = 0;
		}
		for (int l642 = 0; l642 < 2; l642 = l642 + 1) {
			fRec597[l642] = 0.0f;
		}
		for (int l643 = 0; l643 < 2; l643 = l643 + 1) {
			fRec595[l643] = 0.0f;
		}
		for (int l644 = 0; l644 < 2; l644 = l644 + 1) {
			fRec594[l644] = 0.0f;
		}
		for (int l645 = 0; l645 < 2; l645 = l645 + 1) {
			iRec604[l645] = 0;
		}
		for (int l646 = 0; l646 < 2; l646 = l646 + 1) {
			fRec603[l646] = 0.0f;
		}
		for (int l647 = 0; l647 < 2; l647 = l647 + 1) {
			fRec602[l647] = 0.0f;
		}
		for (int l648 = 0; l648 < 2; l648 = l648 + 1) {
			iRec605[l648] = 0;
		}
		for (int l649 = 0; l649 < 2; l649 = l649 + 1) {
			iRec607[l649] = 0;
		}
		for (int l650 = 0; l650 < 2; l650 = l650 + 1) {
			fRec606[l650] = 0.0f;
		}
		for (int l651 = 0; l651 < 2; l651 = l651 + 1) {
			fRec601[l651] = 0.0f;
		}
		for (int l652 = 0; l652 < 2; l652 = l652 + 1) {
			fRec600[l652] = 0.0f;
		}
		for (int l653 = 0; l653 < 2; l653 = l653 + 1) {
			iRec610[l653] = 0;
		}
		for (int l654 = 0; l654 < 2; l654 = l654 + 1) {
			iRec612[l654] = 0;
		}
		for (int l655 = 0; l655 < 2; l655 = l655 + 1) {
			fRec611[l655] = 0.0f;
		}
		for (int l656 = 0; l656 < 2; l656 = l656 + 1) {
			fRec609[l656] = 0.0f;
		}
		for (int l657 = 0; l657 < 2; l657 = l657 + 1) {
			fRec608[l657] = 0.0f;
		}
		for (int l658 = 0; l658 < 2; l658 = l658 + 1) {
			iRec616[l658] = 0;
		}
		for (int l659 = 0; l659 < 2; l659 = l659 + 1) {
			fRec615[l659] = 0.0f;
		}
		for (int l660 = 0; l660 < 2; l660 = l660 + 1) {
			fRec614[l660] = 0.0f;
		}
		for (int l661 = 0; l661 < 2; l661 = l661 + 1) {
			fRec629[l661] = 0.0f;
		}
		for (int l662 = 0; l662 < 2; l662 = l662 + 1) {
			fRec628[l662] = 0.0f;
		}
		for (int l663 = 0; l663 < 2; l663 = l663 + 1) {
			fVec82[l663] = 0.0f;
		}
		for (int l664 = 0; l664 < 2; l664 = l664 + 1) {
			fRec627[l664] = 0.0f;
		}
		for (int l665 = 0; l665 < 2; l665 = l665 + 1) {
			fRec626[l665] = 0.0f;
		}
		for (int l666 = 0; l666 < 2; l666 = l666 + 1) {
			fRec625[l666] = 0.0f;
		}
		for (int l667 = 0; l667 < 2; l667 = l667 + 1) {
			iRec631[l667] = 0;
		}
		for (int l668 = 0; l668 < 2; l668 = l668 + 1) {
			fVec83[l668] = 0.0f;
		}
		for (int l669 = 0; l669 < 2; l669 = l669 + 1) {
			iRec632[l669] = 0;
		}
		for (int l670 = 0; l670 < 2; l670 = l670 + 1) {
			iRec633[l670] = 0;
		}
		for (int l671 = 0; l671 < 2; l671 = l671 + 1) {
			iRec634[l671] = 0;
		}
		for (int l672 = 0; l672 < 2; l672 = l672 + 1) {
			fVec84[l672] = 0.0f;
		}
		for (int l673 = 0; l673 < 2; l673 = l673 + 1) {
			fRec624[l673] = 0.0f;
		}
		for (int l674 = 0; l674 < 2; l674 = l674 + 1) {
			fRec623[l674] = 0.0f;
		}
		for (int l675 = 0; l675 < 2; l675 = l675 + 1) {
			fRec622[l675] = 0.0f;
		}
		for (int l676 = 0; l676 < 2; l676 = l676 + 1) {
			fVec85[l676] = 0.0f;
		}
		for (int l677 = 0; l677 < 2; l677 = l677 + 1) {
			fRec621[l677] = 0.0f;
		}
		for (int l678 = 0; l678 < 3; l678 = l678 + 1) {
			fRec620[l678] = 0.0f;
		}
		for (int l679 = 0; l679 < 2; l679 = l679 + 1) {
			iRec640[l679] = 0;
		}
		for (int l680 = 0; l680 < 2; l680 = l680 + 1) {
			fVec86[l680] = 0.0f;
		}
		for (int l681 = 0; l681 < 2; l681 = l681 + 1) {
			fRec639[l681] = 0.0f;
		}
		for (int l682 = 0; l682 < 2; l682 = l682 + 1) {
			iRec646[l682] = 0;
		}
		for (int l683 = 0; l683 < 2; l683 = l683 + 1) {
			iRec648[l683] = 0;
		}
		for (int l684 = 0; l684 < 2; l684 = l684 + 1) {
			fRec647[l684] = 0.0f;
		}
		for (int l685 = 0; l685 < 2; l685 = l685 + 1) {
			fRec645[l685] = 0.0f;
		}
		for (int l686 = 0; l686 < 2; l686 = l686 + 1) {
			fRec644[l686] = 0.0f;
		}
		for (int l687 = 0; l687 < 2; l687 = l687 + 1) {
			fRec652[l687] = 0.0f;
		}
		for (int l688 = 0; l688 < 2; l688 = l688 + 1) {
			fRec653[l688] = 0.0f;
		}
		for (int l689 = 0; l689 < 2; l689 = l689 + 1) {
			fRec651[l689] = 0.0f;
		}
		for (int l690 = 0; l690 < 2; l690 = l690 + 1) {
			fRec650[l690] = 0.0f;
		}
		for (int l691 = 0; l691 < 2048; l691 = l691 + 1) {
			fVec87[l691] = 0.0f;
		}
		for (int l692 = 0; l692 < 8192; l692 = l692 + 1) {
			fVec88[l692] = 0.0f;
		}
		for (int l693 = 0; l693 < 2; l693 = l693 + 1) {
			fRec649[l693] = 0.0f;
		}
		for (int l694 = 0; l694 < 2; l694 = l694 + 1) {
			fRec643[l694] = 0.0f;
		}
		for (int l695 = 0; l695 < 3; l695 = l695 + 1) {
			fRec642[l695] = 0.0f;
		}
		for (int l696 = 0; l696 < 3; l696 = l696 + 1) {
			fRec641[l696] = 0.0f;
		}
		for (int l697 = 0; l697 < 3; l697 = l697 + 1) {
			fRec638[l697] = 0.0f;
		}
		for (int l698 = 0; l698 < 3; l698 = l698 + 1) {
			fRec637[l698] = 0.0f;
		}
		for (int l699 = 0; l699 < 3; l699 = l699 + 1) {
			fRec636[l699] = 0.0f;
		}
		for (int l700 = 0; l700 < 3; l700 = l700 + 1) {
			fRec635[l700] = 0.0f;
		}
		for (int l701 = 0; l701 < 2; l701 = l701 + 1) {
			fVec89[l701] = 0.0f;
		}
		for (int l702 = 0; l702 < 2; l702 = l702 + 1) {
			fRec619[l702] = 0.0f;
		}
		for (int l703 = 0; l703 < 2; l703 = l703 + 1) {
			fRec654[l703] = 0.0f;
		}
		for (int l704 = 0; l704 < 2; l704 = l704 + 1) {
			fRec618[l704] = 0.0f;
		}
		for (int l705 = 0; l705 < 2; l705 = l705 + 1) {
			fRec617[l705] = 0.0f;
		}
		for (int l706 = 0; l706 < 2048; l706 = l706 + 1) {
			fVec90[l706] = 0.0f;
		}
		for (int l707 = 0; l707 < 8192; l707 = l707 + 1) {
			fVec91[l707] = 0.0f;
		}
		for (int l708 = 0; l708 < 2; l708 = l708 + 1) {
			iRec656[l708] = 0;
		}
		for (int l709 = 0; l709 < 2; l709 = l709 + 1) {
			fRec655[l709] = 0.0f;
		}
		for (int l710 = 0; l710 < 2; l710 = l710 + 1) {
			iRec661[l710] = 0;
		}
		for (int l711 = 0; l711 < 2; l711 = l711 + 1) {
			fRec660[l711] = 0.0f;
		}
		for (int l712 = 0; l712 < 2; l712 = l712 + 1) {
			fRec659[l712] = 0.0f;
		}
		for (int l713 = 0; l713 < 2; l713 = l713 + 1) {
			fRec658[l713] = 0.0f;
		}
		for (int l714 = 0; l714 < 2; l714 = l714 + 1) {
			fRec657[l714] = 0.0f;
		}
		for (int l715 = 0; l715 < 2; l715 = l715 + 1) {
			fRec662[l715] = 0.0f;
		}
		for (int l716 = 0; l716 < 2; l716 = l716 + 1) {
			fRec663[l716] = 0.0f;
		}
		for (int l717 = 0; l717 < 2; l717 = l717 + 1) {
			fRec613[l717] = 0.0f;
		}
		for (int l718 = 0; l718 < 2; l718 = l718 + 1) {
			fRec599[l718] = 0.0f;
		}
		for (int l719 = 0; l719 < 3; l719 = l719 + 1) {
			fRec593[l719] = 0.0f;
		}
		for (int l720 = 0; l720 < 3; l720 = l720 + 1) {
			fRec592[l720] = 0.0f;
		}
		for (int l721 = 0; l721 < 3; l721 = l721 + 1) {
			fRec589[l721] = 0.0f;
		}
		for (int l722 = 0; l722 < 3; l722 = l722 + 1) {
			fRec588[l722] = 0.0f;
		}
		for (int l723 = 0; l723 < 3; l723 = l723 + 1) {
			fRec587[l723] = 0.0f;
		}
		for (int l724 = 0; l724 < 3; l724 = l724 + 1) {
			fRec586[l724] = 0.0f;
		}
		for (int l725 = 0; l725 < 2; l725 = l725 + 1) {
			fVec92[l725] = 0.0f;
		}
		for (int l726 = 0; l726 < 2; l726 = l726 + 1) {
			fRec40[l726] = 0.0f;
		}
		for (int l727 = 0; l727 < 2; l727 = l727 + 1) {
			fRec39[l727] = 0.0f;
		}
		for (int l728 = 0; l728 < 2; l728 = l728 + 1) {
			fVec93[l728] = 0.0f;
		}
		for (int l729 = 0; l729 < 2; l729 = l729 + 1) {
			fRec38[l729] = 0.0f;
		}
		for (int l730 = 0; l730 < 2; l730 = l730 + 1) {
			fRec37[l730] = 0.0f;
		}
		for (int l731 = 0; l731 < 2; l731 = l731 + 1) {
			fRec36[l731] = 0.0f;
		}
		for (int l732 = 0; l732 < 2; l732 = l732 + 1) {
			fRec664[l732] = 0.0f;
		}
		for (int l733 = 0; l733 < 2; l733 = l733 + 1) {
			iRec667[l733] = 0;
		}
		for (int l734 = 0; l734 < 2; l734 = l734 + 1) {
			fRec666[l734] = 0.0f;
		}
		for (int l735 = 0; l735 < 2; l735 = l735 + 1) {
			fRec665[l735] = 0.0f;
		}
		for (int l736 = 0; l736 < 2; l736 = l736 + 1) {
			iRec669[l736] = 0;
		}
		for (int l737 = 0; l737 < 2; l737 = l737 + 1) {
			fVec94[l737] = 0.0f;
		}
		for (int l738 = 0; l738 < 2; l738 = l738 + 1) {
			iRec670[l738] = 0;
		}
		for (int l739 = 0; l739 < 2; l739 = l739 + 1) {
			iRec671[l739] = 0;
		}
		for (int l740 = 0; l740 < 2; l740 = l740 + 1) {
			fVec95[l740] = 0.0f;
		}
		for (int l741 = 0; l741 < 2; l741 = l741 + 1) {
			fRec25[l741] = 0.0f;
		}
		for (int l742 = 0; l742 < 2; l742 = l742 + 1) {
			fRec24[l742] = 0.0f;
		}
		for (int l743 = 0; l743 < 2; l743 = l743 + 1) {
			fRec23[l743] = 0.0f;
		}
		for (int l744 = 0; l744 < 2; l744 = l744 + 1) {
			fVec96[l744] = 0.0f;
		}
		for (int l745 = 0; l745 < 2; l745 = l745 + 1) {
			fRec22[l745] = 0.0f;
		}
		for (int l746 = 0; l746 < 3; l746 = l746 + 1) {
			fRec21[l746] = 0.0f;
		}
		for (int l747 = 0; l747 < 2; l747 = l747 + 1) {
			iRec677[l747] = 0;
		}
		for (int l748 = 0; l748 < 2; l748 = l748 + 1) {
			fVec97[l748] = 0.0f;
		}
		for (int l749 = 0; l749 < 2; l749 = l749 + 1) {
			fRec676[l749] = 0.0f;
		}
		for (int l750 = 0; l750 < 2; l750 = l750 + 1) {
			iRec682[l750] = 0;
		}
		for (int l751 = 0; l751 < 2; l751 = l751 + 1) {
			iRec684[l751] = 0;
		}
		for (int l752 = 0; l752 < 2; l752 = l752 + 1) {
			fRec683[l752] = 0.0f;
		}
		for (int l753 = 0; l753 < 2; l753 = l753 + 1) {
			fRec681[l753] = 0.0f;
		}
		for (int l754 = 0; l754 < 2; l754 = l754 + 1) {
			fRec680[l754] = 0.0f;
		}
		for (int l755 = 0; l755 < 2; l755 = l755 + 1) {
			iRec690[l755] = 0;
		}
		for (int l756 = 0; l756 < 2; l756 = l756 + 1) {
			fRec689[l756] = 0.0f;
		}
		for (int l757 = 0; l757 < 2; l757 = l757 + 1) {
			fRec688[l757] = 0.0f;
		}
		for (int l758 = 0; l758 < 2; l758 = l758 + 1) {
			iRec691[l758] = 0;
		}
		for (int l759 = 0; l759 < 2; l759 = l759 + 1) {
			iRec693[l759] = 0;
		}
		for (int l760 = 0; l760 < 2; l760 = l760 + 1) {
			fRec692[l760] = 0.0f;
		}
		for (int l761 = 0; l761 < 2; l761 = l761 + 1) {
			fRec687[l761] = 0.0f;
		}
		for (int l762 = 0; l762 < 2; l762 = l762 + 1) {
			fRec686[l762] = 0.0f;
		}
		for (int l763 = 0; l763 < 2; l763 = l763 + 1) {
			iRec696[l763] = 0;
		}
		for (int l764 = 0; l764 < 2; l764 = l764 + 1) {
			iRec698[l764] = 0;
		}
		for (int l765 = 0; l765 < 2; l765 = l765 + 1) {
			fRec697[l765] = 0.0f;
		}
		for (int l766 = 0; l766 < 2; l766 = l766 + 1) {
			fRec695[l766] = 0.0f;
		}
		for (int l767 = 0; l767 < 2; l767 = l767 + 1) {
			fRec694[l767] = 0.0f;
		}
		for (int l768 = 0; l768 < 2; l768 = l768 + 1) {
			iRec702[l768] = 0;
		}
		for (int l769 = 0; l769 < 2; l769 = l769 + 1) {
			fRec701[l769] = 0.0f;
		}
		for (int l770 = 0; l770 < 2; l770 = l770 + 1) {
			fRec700[l770] = 0.0f;
		}
		for (int l771 = 0; l771 < 2; l771 = l771 + 1) {
			fRec715[l771] = 0.0f;
		}
		for (int l772 = 0; l772 < 2; l772 = l772 + 1) {
			fRec714[l772] = 0.0f;
		}
		for (int l773 = 0; l773 < 2; l773 = l773 + 1) {
			fVec98[l773] = 0.0f;
		}
		for (int l774 = 0; l774 < 2; l774 = l774 + 1) {
			fRec713[l774] = 0.0f;
		}
		for (int l775 = 0; l775 < 2; l775 = l775 + 1) {
			fRec712[l775] = 0.0f;
		}
		for (int l776 = 0; l776 < 2; l776 = l776 + 1) {
			fRec711[l776] = 0.0f;
		}
		for (int l777 = 0; l777 < 2; l777 = l777 + 1) {
			iRec717[l777] = 0;
		}
		for (int l778 = 0; l778 < 2; l778 = l778 + 1) {
			fVec99[l778] = 0.0f;
		}
		for (int l779 = 0; l779 < 2; l779 = l779 + 1) {
			iRec718[l779] = 0;
		}
		for (int l780 = 0; l780 < 2; l780 = l780 + 1) {
			fVec100[l780] = 0.0f;
		}
		for (int l781 = 0; l781 < 2; l781 = l781 + 1) {
			fRec710[l781] = 0.0f;
		}
		for (int l782 = 0; l782 < 2; l782 = l782 + 1) {
			fRec709[l782] = 0.0f;
		}
		for (int l783 = 0; l783 < 2; l783 = l783 + 1) {
			fRec708[l783] = 0.0f;
		}
		for (int l784 = 0; l784 < 2; l784 = l784 + 1) {
			fVec101[l784] = 0.0f;
		}
		for (int l785 = 0; l785 < 2; l785 = l785 + 1) {
			fRec707[l785] = 0.0f;
		}
		for (int l786 = 0; l786 < 3; l786 = l786 + 1) {
			fRec706[l786] = 0.0f;
		}
		for (int l787 = 0; l787 < 2; l787 = l787 + 1) {
			iRec724[l787] = 0;
		}
		for (int l788 = 0; l788 < 2; l788 = l788 + 1) {
			fVec102[l788] = 0.0f;
		}
		for (int l789 = 0; l789 < 2; l789 = l789 + 1) {
			fRec723[l789] = 0.0f;
		}
		for (int l790 = 0; l790 < 2; l790 = l790 + 1) {
			iRec730[l790] = 0;
		}
		for (int l791 = 0; l791 < 2; l791 = l791 + 1) {
			iRec732[l791] = 0;
		}
		for (int l792 = 0; l792 < 2; l792 = l792 + 1) {
			fRec731[l792] = 0.0f;
		}
		for (int l793 = 0; l793 < 2; l793 = l793 + 1) {
			fRec729[l793] = 0.0f;
		}
		for (int l794 = 0; l794 < 2; l794 = l794 + 1) {
			fRec728[l794] = 0.0f;
		}
		for (int l795 = 0; l795 < 2; l795 = l795 + 1) {
			fRec736[l795] = 0.0f;
		}
		for (int l796 = 0; l796 < 2; l796 = l796 + 1) {
			fRec737[l796] = 0.0f;
		}
		for (int l797 = 0; l797 < 2; l797 = l797 + 1) {
			fRec735[l797] = 0.0f;
		}
		for (int l798 = 0; l798 < 2; l798 = l798 + 1) {
			fRec734[l798] = 0.0f;
		}
		for (int l799 = 0; l799 < 2048; l799 = l799 + 1) {
			fVec103[l799] = 0.0f;
		}
		for (int l800 = 0; l800 < 8192; l800 = l800 + 1) {
			fVec104[l800] = 0.0f;
		}
		for (int l801 = 0; l801 < 2; l801 = l801 + 1) {
			fRec733[l801] = 0.0f;
		}
		for (int l802 = 0; l802 < 2; l802 = l802 + 1) {
			fRec727[l802] = 0.0f;
		}
		for (int l803 = 0; l803 < 3; l803 = l803 + 1) {
			fRec726[l803] = 0.0f;
		}
		for (int l804 = 0; l804 < 3; l804 = l804 + 1) {
			fRec725[l804] = 0.0f;
		}
		for (int l805 = 0; l805 < 3; l805 = l805 + 1) {
			fRec722[l805] = 0.0f;
		}
		for (int l806 = 0; l806 < 3; l806 = l806 + 1) {
			fRec721[l806] = 0.0f;
		}
		for (int l807 = 0; l807 < 3; l807 = l807 + 1) {
			fRec720[l807] = 0.0f;
		}
		for (int l808 = 0; l808 < 3; l808 = l808 + 1) {
			fRec719[l808] = 0.0f;
		}
		for (int l809 = 0; l809 < 2; l809 = l809 + 1) {
			fVec105[l809] = 0.0f;
		}
		for (int l810 = 0; l810 < 2; l810 = l810 + 1) {
			fRec705[l810] = 0.0f;
		}
		for (int l811 = 0; l811 < 2; l811 = l811 + 1) {
			fRec738[l811] = 0.0f;
		}
		for (int l812 = 0; l812 < 2; l812 = l812 + 1) {
			fRec704[l812] = 0.0f;
		}
		for (int l813 = 0; l813 < 2; l813 = l813 + 1) {
			fRec703[l813] = 0.0f;
		}
		for (int l814 = 0; l814 < 2048; l814 = l814 + 1) {
			fVec106[l814] = 0.0f;
		}
		for (int l815 = 0; l815 < 8192; l815 = l815 + 1) {
			fVec107[l815] = 0.0f;
		}
		for (int l816 = 0; l816 < 2; l816 = l816 + 1) {
			iRec740[l816] = 0;
		}
		for (int l817 = 0; l817 < 2; l817 = l817 + 1) {
			fRec739[l817] = 0.0f;
		}
		for (int l818 = 0; l818 < 2; l818 = l818 + 1) {
			iRec745[l818] = 0;
		}
		for (int l819 = 0; l819 < 2; l819 = l819 + 1) {
			fRec744[l819] = 0.0f;
		}
		for (int l820 = 0; l820 < 2; l820 = l820 + 1) {
			fRec743[l820] = 0.0f;
		}
		for (int l821 = 0; l821 < 2; l821 = l821 + 1) {
			fRec742[l821] = 0.0f;
		}
		for (int l822 = 0; l822 < 2; l822 = l822 + 1) {
			fRec741[l822] = 0.0f;
		}
		for (int l823 = 0; l823 < 2; l823 = l823 + 1) {
			fRec746[l823] = 0.0f;
		}
		for (int l824 = 0; l824 < 2; l824 = l824 + 1) {
			fRec747[l824] = 0.0f;
		}
		for (int l825 = 0; l825 < 2; l825 = l825 + 1) {
			fRec699[l825] = 0.0f;
		}
		for (int l826 = 0; l826 < 2; l826 = l826 + 1) {
			fRec685[l826] = 0.0f;
		}
		for (int l827 = 0; l827 < 3; l827 = l827 + 1) {
			fRec679[l827] = 0.0f;
		}
		for (int l828 = 0; l828 < 3; l828 = l828 + 1) {
			fRec678[l828] = 0.0f;
		}
		for (int l829 = 0; l829 < 3; l829 = l829 + 1) {
			fRec675[l829] = 0.0f;
		}
		for (int l830 = 0; l830 < 3; l830 = l830 + 1) {
			fRec674[l830] = 0.0f;
		}
		for (int l831 = 0; l831 < 3; l831 = l831 + 1) {
			fRec673[l831] = 0.0f;
		}
		for (int l832 = 0; l832 < 3; l832 = l832 + 1) {
			fRec672[l832] = 0.0f;
		}
		for (int l833 = 0; l833 < 2; l833 = l833 + 1) {
			fVec108[l833] = 0.0f;
		}
		for (int l834 = 0; l834 < 2; l834 = l834 + 1) {
			fRec20[l834] = 0.0f;
		}
		for (int l835 = 0; l835 < 2; l835 = l835 + 1) {
			fRec19[l835] = 0.0f;
		}
		for (int l836 = 0; l836 < 2; l836 = l836 + 1) {
			fVec109[l836] = 0.0f;
		}
		for (int l837 = 0; l837 < 2; l837 = l837 + 1) {
			fRec18[l837] = 0.0f;
		}
		for (int l838 = 0; l838 < 2; l838 = l838 + 1) {
			fRec16[l838] = 0.0f;
		}
		for (int l839 = 0; l839 < 2; l839 = l839 + 1) {
			fRec15[l839] = 0.0f;
		}
		for (int l840 = 0; l840 < 2; l840 = l840 + 1) {
			fRec748[l840] = 0.0f;
		}
		for (int l841 = 0; l841 < 2; l841 = l841 + 1) {
			iRec751[l841] = 0;
		}
		for (int l842 = 0; l842 < 2; l842 = l842 + 1) {
			fRec750[l842] = 0.0f;
		}
		for (int l843 = 0; l843 < 2; l843 = l843 + 1) {
			fRec749[l843] = 0.0f;
		}
		for (int l844 = 0; l844 < 2; l844 = l844 + 1) {
			iRec753[l844] = 0;
		}
		for (int l845 = 0; l845 < 2; l845 = l845 + 1) {
			fVec110[l845] = 0.0f;
		}
		for (int l846 = 0; l846 < 2; l846 = l846 + 1) {
			iRec754[l846] = 0;
		}
		for (int l847 = 0; l847 < 2; l847 = l847 + 1) {
			iRec755[l847] = 0;
		}
		for (int l848 = 0; l848 < 2; l848 = l848 + 1) {
			fVec111[l848] = 0.0f;
		}
		for (int l849 = 0; l849 < 2; l849 = l849 + 1) {
			fRec4[l849] = 0.0f;
		}
		for (int l850 = 0; l850 < 2; l850 = l850 + 1) {
			fRec3[l850] = 0.0f;
		}
		for (int l851 = 0; l851 < 2; l851 = l851 + 1) {
			fRec2[l851] = 0.0f;
		}
		for (int l852 = 0; l852 < 2; l852 = l852 + 1) {
			fVec112[l852] = 0.0f;
		}
		for (int l853 = 0; l853 < 2; l853 = l853 + 1) {
			fRec1[l853] = 0.0f;
		}
		for (int l854 = 0; l854 < 3; l854 = l854 + 1) {
			fRec0[l854] = 0.0f;
		}
		for (int l855 = 0; l855 < 2; l855 = l855 + 1) {
			iRec761[l855] = 0;
		}
		for (int l856 = 0; l856 < 2; l856 = l856 + 1) {
			fVec113[l856] = 0.0f;
		}
		for (int l857 = 0; l857 < 2; l857 = l857 + 1) {
			fRec760[l857] = 0.0f;
		}
		for (int l858 = 0; l858 < 2; l858 = l858 + 1) {
			iRec766[l858] = 0;
		}
		for (int l859 = 0; l859 < 2; l859 = l859 + 1) {
			iRec768[l859] = 0;
		}
		for (int l860 = 0; l860 < 2; l860 = l860 + 1) {
			fRec767[l860] = 0.0f;
		}
		for (int l861 = 0; l861 < 2; l861 = l861 + 1) {
			fRec765[l861] = 0.0f;
		}
		for (int l862 = 0; l862 < 2; l862 = l862 + 1) {
			fRec764[l862] = 0.0f;
		}
		for (int l863 = 0; l863 < 2; l863 = l863 + 1) {
			iRec774[l863] = 0;
		}
		for (int l864 = 0; l864 < 2; l864 = l864 + 1) {
			fRec773[l864] = 0.0f;
		}
		for (int l865 = 0; l865 < 2; l865 = l865 + 1) {
			fRec772[l865] = 0.0f;
		}
		for (int l866 = 0; l866 < 2; l866 = l866 + 1) {
			iRec775[l866] = 0;
		}
		for (int l867 = 0; l867 < 2; l867 = l867 + 1) {
			iRec777[l867] = 0;
		}
		for (int l868 = 0; l868 < 2; l868 = l868 + 1) {
			fRec776[l868] = 0.0f;
		}
		for (int l869 = 0; l869 < 2; l869 = l869 + 1) {
			fRec771[l869] = 0.0f;
		}
		for (int l870 = 0; l870 < 2; l870 = l870 + 1) {
			fRec770[l870] = 0.0f;
		}
		for (int l871 = 0; l871 < 2; l871 = l871 + 1) {
			iRec780[l871] = 0;
		}
		for (int l872 = 0; l872 < 2; l872 = l872 + 1) {
			iRec782[l872] = 0;
		}
		for (int l873 = 0; l873 < 2; l873 = l873 + 1) {
			fRec781[l873] = 0.0f;
		}
		for (int l874 = 0; l874 < 2; l874 = l874 + 1) {
			fRec779[l874] = 0.0f;
		}
		for (int l875 = 0; l875 < 2; l875 = l875 + 1) {
			fRec778[l875] = 0.0f;
		}
		for (int l876 = 0; l876 < 2; l876 = l876 + 1) {
			iRec786[l876] = 0;
		}
		for (int l877 = 0; l877 < 2; l877 = l877 + 1) {
			fRec785[l877] = 0.0f;
		}
		for (int l878 = 0; l878 < 2; l878 = l878 + 1) {
			fRec784[l878] = 0.0f;
		}
		for (int l879 = 0; l879 < 2; l879 = l879 + 1) {
			fRec799[l879] = 0.0f;
		}
		for (int l880 = 0; l880 < 2; l880 = l880 + 1) {
			fRec798[l880] = 0.0f;
		}
		for (int l881 = 0; l881 < 2; l881 = l881 + 1) {
			fVec114[l881] = 0.0f;
		}
		for (int l882 = 0; l882 < 2; l882 = l882 + 1) {
			fRec797[l882] = 0.0f;
		}
		for (int l883 = 0; l883 < 2; l883 = l883 + 1) {
			fRec796[l883] = 0.0f;
		}
		for (int l884 = 0; l884 < 2; l884 = l884 + 1) {
			fRec795[l884] = 0.0f;
		}
		for (int l885 = 0; l885 < 2; l885 = l885 + 1) {
			iRec801[l885] = 0;
		}
		for (int l886 = 0; l886 < 2; l886 = l886 + 1) {
			fVec115[l886] = 0.0f;
		}
		for (int l887 = 0; l887 < 2; l887 = l887 + 1) {
			iRec802[l887] = 0;
		}
		for (int l888 = 0; l888 < 2; l888 = l888 + 1) {
			iRec803[l888] = 0;
		}
		for (int l889 = 0; l889 < 2; l889 = l889 + 1) {
			fVec116[l889] = 0.0f;
		}
		for (int l890 = 0; l890 < 2; l890 = l890 + 1) {
			fRec794[l890] = 0.0f;
		}
		for (int l891 = 0; l891 < 2; l891 = l891 + 1) {
			fRec793[l891] = 0.0f;
		}
		for (int l892 = 0; l892 < 2; l892 = l892 + 1) {
			fRec792[l892] = 0.0f;
		}
		for (int l893 = 0; l893 < 2; l893 = l893 + 1) {
			fVec117[l893] = 0.0f;
		}
		for (int l894 = 0; l894 < 2; l894 = l894 + 1) {
			fRec791[l894] = 0.0f;
		}
		for (int l895 = 0; l895 < 3; l895 = l895 + 1) {
			fRec790[l895] = 0.0f;
		}
		for (int l896 = 0; l896 < 2; l896 = l896 + 1) {
			iRec809[l896] = 0;
		}
		for (int l897 = 0; l897 < 2; l897 = l897 + 1) {
			fVec118[l897] = 0.0f;
		}
		for (int l898 = 0; l898 < 2; l898 = l898 + 1) {
			fRec808[l898] = 0.0f;
		}
		for (int l899 = 0; l899 < 2; l899 = l899 + 1) {
			iRec815[l899] = 0;
		}
		for (int l900 = 0; l900 < 2; l900 = l900 + 1) {
			iRec817[l900] = 0;
		}
		for (int l901 = 0; l901 < 2; l901 = l901 + 1) {
			fRec816[l901] = 0.0f;
		}
		for (int l902 = 0; l902 < 2; l902 = l902 + 1) {
			fRec814[l902] = 0.0f;
		}
		for (int l903 = 0; l903 < 2; l903 = l903 + 1) {
			fRec813[l903] = 0.0f;
		}
		for (int l904 = 0; l904 < 2; l904 = l904 + 1) {
			fRec821[l904] = 0.0f;
		}
		for (int l905 = 0; l905 < 2; l905 = l905 + 1) {
			fRec822[l905] = 0.0f;
		}
		for (int l906 = 0; l906 < 2; l906 = l906 + 1) {
			fRec820[l906] = 0.0f;
		}
		for (int l907 = 0; l907 < 2; l907 = l907 + 1) {
			fRec819[l907] = 0.0f;
		}
		for (int l908 = 0; l908 < 2048; l908 = l908 + 1) {
			fVec119[l908] = 0.0f;
		}
		for (int l909 = 0; l909 < 8192; l909 = l909 + 1) {
			fVec120[l909] = 0.0f;
		}
		for (int l910 = 0; l910 < 2; l910 = l910 + 1) {
			fRec818[l910] = 0.0f;
		}
		for (int l911 = 0; l911 < 2; l911 = l911 + 1) {
			fRec812[l911] = 0.0f;
		}
		for (int l912 = 0; l912 < 3; l912 = l912 + 1) {
			fRec811[l912] = 0.0f;
		}
		for (int l913 = 0; l913 < 3; l913 = l913 + 1) {
			fRec810[l913] = 0.0f;
		}
		for (int l914 = 0; l914 < 3; l914 = l914 + 1) {
			fRec807[l914] = 0.0f;
		}
		for (int l915 = 0; l915 < 3; l915 = l915 + 1) {
			fRec806[l915] = 0.0f;
		}
		for (int l916 = 0; l916 < 3; l916 = l916 + 1) {
			fRec805[l916] = 0.0f;
		}
		for (int l917 = 0; l917 < 3; l917 = l917 + 1) {
			fRec804[l917] = 0.0f;
		}
		for (int l918 = 0; l918 < 2; l918 = l918 + 1) {
			fVec121[l918] = 0.0f;
		}
		for (int l919 = 0; l919 < 2; l919 = l919 + 1) {
			fRec789[l919] = 0.0f;
		}
		for (int l920 = 0; l920 < 2; l920 = l920 + 1) {
			fRec823[l920] = 0.0f;
		}
		for (int l921 = 0; l921 < 2; l921 = l921 + 1) {
			fRec788[l921] = 0.0f;
		}
		for (int l922 = 0; l922 < 2; l922 = l922 + 1) {
			fRec787[l922] = 0.0f;
		}
		for (int l923 = 0; l923 < 2048; l923 = l923 + 1) {
			fVec122[l923] = 0.0f;
		}
		for (int l924 = 0; l924 < 8192; l924 = l924 + 1) {
			fVec123[l924] = 0.0f;
		}
		for (int l925 = 0; l925 < 2; l925 = l925 + 1) {
			iRec825[l925] = 0;
		}
		for (int l926 = 0; l926 < 2; l926 = l926 + 1) {
			fRec824[l926] = 0.0f;
		}
		for (int l927 = 0; l927 < 2; l927 = l927 + 1) {
			iRec830[l927] = 0;
		}
		for (int l928 = 0; l928 < 2; l928 = l928 + 1) {
			fRec829[l928] = 0.0f;
		}
		for (int l929 = 0; l929 < 2; l929 = l929 + 1) {
			fRec828[l929] = 0.0f;
		}
		for (int l930 = 0; l930 < 2; l930 = l930 + 1) {
			fRec827[l930] = 0.0f;
		}
		for (int l931 = 0; l931 < 2; l931 = l931 + 1) {
			fRec826[l931] = 0.0f;
		}
		for (int l932 = 0; l932 < 2; l932 = l932 + 1) {
			fRec831[l932] = 0.0f;
		}
		for (int l933 = 0; l933 < 2; l933 = l933 + 1) {
			fRec832[l933] = 0.0f;
		}
		for (int l934 = 0; l934 < 2; l934 = l934 + 1) {
			fRec783[l934] = 0.0f;
		}
		for (int l935 = 0; l935 < 2; l935 = l935 + 1) {
			fRec769[l935] = 0.0f;
		}
		for (int l936 = 0; l936 < 3; l936 = l936 + 1) {
			fRec763[l936] = 0.0f;
		}
		for (int l937 = 0; l937 < 3; l937 = l937 + 1) {
			fRec762[l937] = 0.0f;
		}
		for (int l938 = 0; l938 < 3; l938 = l938 + 1) {
			fRec759[l938] = 0.0f;
		}
		for (int l939 = 0; l939 < 3; l939 = l939 + 1) {
			fRec758[l939] = 0.0f;
		}
		for (int l940 = 0; l940 < 3; l940 = l940 + 1) {
			fRec757[l940] = 0.0f;
		}
		for (int l941 = 0; l941 < 3; l941 = l941 + 1) {
			fRec756[l941] = 0.0f;
		}
		for (int l942 = 0; l942 < 2; l942 = l942 + 1) {
			fRec833[l942] = 0.0f;
		}
		for (int l943 = 0; l943 < 2; l943 = l943 + 1) {
			fRec835[l943] = 0.0f;
		}
		for (int l944 = 0; l944 < 3; l944 = l944 + 1) {
			fRec834[l944] = 0.0f;
		}
		for (int l945 = 0; l945 < 2; l945 = l945 + 1) {
			fRec836[l945] = 0.0f;
		}
		for (int l946 = 0; l946 < 2; l946 = l946 + 1) {
			fRec846[l946] = 0.0f;
		}
		for (int l947 = 0; l947 < 2; l947 = l947 + 1) {
			fRec845[l947] = 0.0f;
		}
		for (int l948 = 0; l948 < 2; l948 = l948 + 1) {
			fVec124[l948] = 0.0f;
		}
		for (int l949 = 0; l949 < 2; l949 = l949 + 1) {
			fRec844[l949] = 0.0f;
		}
		for (int l950 = 0; l950 < 2; l950 = l950 + 1) {
			fRec843[l950] = 0.0f;
		}
		for (int l951 = 0; l951 < 2; l951 = l951 + 1) {
			fRec842[l951] = 0.0f;
		}
		for (int l952 = 0; l952 < 2; l952 = l952 + 1) {
			iRec848[l952] = 0;
		}
		for (int l953 = 0; l953 < 2; l953 = l953 + 1) {
			fVec125[l953] = 0.0f;
		}
		for (int l954 = 0; l954 < 2; l954 = l954 + 1) {
			iRec849[l954] = 0;
		}
		for (int l955 = 0; l955 < 2; l955 = l955 + 1) {
			iRec850[l955] = 0;
		}
		for (int l956 = 0; l956 < 2; l956 = l956 + 1) {
			fVec126[l956] = 0.0f;
		}
		for (int l957 = 0; l957 < 2; l957 = l957 + 1) {
			fRec841[l957] = 0.0f;
		}
		for (int l958 = 0; l958 < 2; l958 = l958 + 1) {
			fRec840[l958] = 0.0f;
		}
		for (int l959 = 0; l959 < 2; l959 = l959 + 1) {
			fRec839[l959] = 0.0f;
		}
		for (int l960 = 0; l960 < 2; l960 = l960 + 1) {
			fVec127[l960] = 0.0f;
		}
		for (int l961 = 0; l961 < 2; l961 = l961 + 1) {
			fRec838[l961] = 0.0f;
		}
		for (int l962 = 0; l962 < 3; l962 = l962 + 1) {
			fRec837[l962] = 0.0f;
		}
		for (int l963 = 0; l963 < 2; l963 = l963 + 1) {
			iRec856[l963] = 0;
		}
		for (int l964 = 0; l964 < 2; l964 = l964 + 1) {
			fVec128[l964] = 0.0f;
		}
		for (int l965 = 0; l965 < 2; l965 = l965 + 1) {
			fRec855[l965] = 0.0f;
		}
		for (int l966 = 0; l966 < 2; l966 = l966 + 1) {
			iRec862[l966] = 0;
		}
		for (int l967 = 0; l967 < 2; l967 = l967 + 1) {
			iRec864[l967] = 0;
		}
		for (int l968 = 0; l968 < 2; l968 = l968 + 1) {
			fRec863[l968] = 0.0f;
		}
		for (int l969 = 0; l969 < 2; l969 = l969 + 1) {
			fRec861[l969] = 0.0f;
		}
		for (int l970 = 0; l970 < 2; l970 = l970 + 1) {
			fRec860[l970] = 0.0f;
		}
		for (int l971 = 0; l971 < 2; l971 = l971 + 1) {
			fRec868[l971] = 0.0f;
		}
		for (int l972 = 0; l972 < 2; l972 = l972 + 1) {
			fRec869[l972] = 0.0f;
		}
		for (int l973 = 0; l973 < 2; l973 = l973 + 1) {
			fRec867[l973] = 0.0f;
		}
		for (int l974 = 0; l974 < 2; l974 = l974 + 1) {
			fRec866[l974] = 0.0f;
		}
		for (int l975 = 0; l975 < 2048; l975 = l975 + 1) {
			fVec129[l975] = 0.0f;
		}
		for (int l976 = 0; l976 < 8192; l976 = l976 + 1) {
			fVec130[l976] = 0.0f;
		}
		for (int l977 = 0; l977 < 2; l977 = l977 + 1) {
			fRec865[l977] = 0.0f;
		}
		for (int l978 = 0; l978 < 2; l978 = l978 + 1) {
			fRec859[l978] = 0.0f;
		}
		for (int l979 = 0; l979 < 3; l979 = l979 + 1) {
			fRec858[l979] = 0.0f;
		}
		for (int l980 = 0; l980 < 3; l980 = l980 + 1) {
			fRec857[l980] = 0.0f;
		}
		for (int l981 = 0; l981 < 3; l981 = l981 + 1) {
			fRec854[l981] = 0.0f;
		}
		for (int l982 = 0; l982 < 3; l982 = l982 + 1) {
			fRec853[l982] = 0.0f;
		}
		for (int l983 = 0; l983 < 3; l983 = l983 + 1) {
			fRec852[l983] = 0.0f;
		}
		for (int l984 = 0; l984 < 3; l984 = l984 + 1) {
			fRec851[l984] = 0.0f;
		}
		for (int l985 = 0; l985 < 2; l985 = l985 + 1) {
			fRec870[l985] = 0.0f;
		}
		for (int l986 = 0; l986 < 2; l986 = l986 + 1) {
			fRec871[l986] = 0.0f;
		}
		for (int l987 = 0; l987 < 2; l987 = l987 + 1) {
			fRec872[l987] = 0.0f;
		}
		for (int l988 = 0; l988 < 2; l988 = l988 + 1) {
			fRec873[l988] = 0.0f;
		}
		for (int l989 = 0; l989 < 2; l989 = l989 + 1) {
			fRec874[l989] = 0.0f;
		}
		for (int l990 = 0; l990 < 2; l990 = l990 + 1) {
			fRec875[l990] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual VhsDsp* clone() {
		return new VhsDsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VHS Linear Track + Generation Loss");
		ui_interface->openVerticalBox("Buzz");
		ui_interface->addHorizontalSlider("Field-rate AM", &fHslider36, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Follows Signal", &fHslider37, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider34, "unit", "dB");
		ui_interface->addHorizontalSlider("Head-Switch Rasp, Hi-Fi", &fHslider34, FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fHslider33, "unit", "Hz");
		ui_interface->addHorizontalSlider("Rasp Tone", &fHslider33, FAUSTFLOAT(4e+03f), FAUSTFLOAT(5e+02f), FAUSTFLOAT(1.2e+04f), FAUSTFLOAT(1e+01f));
		ui_interface->addHorizontalSlider("Signal Bleed (ring)", &fHslider35, FAUSTFLOAT(0.03f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.3f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fHslider8, "unit", "cents");
		ui_interface->addHorizontalSlider("Whine Detune", &fHslider8, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2.4e+03f), FAUSTFLOAT(2e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fHslider38, "unit", "dB");
		ui_interface->addHorizontalSlider("Whine Level", &fHslider38, FAUSTFLOAT(-52.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Whine Wander", &fHslider7, FAUSTFLOAT(0.3f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Deck");
		ui_interface->addHorizontalSlider("Bias (asymmetry)", &fHslider28, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.8f), FAUSTFLOAT(0.01f));
		ui_interface->addCheckButton("Mono Linear Track", &fCheckbox0);
		ui_interface->declare(&fHslider39, "unit", "dB");
		ui_interface->addHorizontalSlider("Output", &fHslider39, FAUSTFLOAT(0.0f), FAUSTFLOAT(-24.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fHslider27, "unit", "dB");
		ui_interface->addHorizontalSlider("Record Drive", &fHslider27, FAUSTFLOAT(3.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(24.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fEntry0, "style", "menu{'PAL':0;'NTSC':1}");
		ui_interface->addNumEntry("Standard", &fEntry0, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fEntry1, "style", "menu{'SP':0;'LP':1;'EP':2}");
		ui_interface->addNumEntry("Tape Speed", &fEntry1, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Generation History");
		ui_interface->addHorizontalSlider("Generations", &fHslider0, FAUSTFLOAT(4.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(8.0f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("Hi-Fi Copies", &fHslider16, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("History Seed", &fHslider1, FAUSTFLOAT(7.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(999.0f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("Speed Mix", &fHslider17, FAUSTFLOAT(0.25f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider21, "unit", "/min");
		ui_interface->addHorizontalSlider("Tape Damage", &fHslider21, FAUSTFLOAT(1.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Variability", &fHslider5, FAUSTFLOAT(0.7f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Wear Over Time", &fHslider4, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("HF Compression");
		ui_interface->addHorizontalSlider("Amount", &fHslider30, FAUSTFLOAT(0.25f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("HF Squash", &fHslider26, FAUSTFLOAT(0.4f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider31, "unit", "Hz");
		ui_interface->addHorizontalSlider("Open Cutoff", &fHslider31, FAUSTFLOAT(9e+03f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.6e+04f), FAUSTFLOAT(1e+01f));
		ui_interface->declare(&fHslider29, "unit", "ms");
		ui_interface->addHorizontalSlider("Recovery", &fHslider29, FAUSTFLOAT(1.5e+02f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(8e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Hi-Fi Path");
		ui_interface->declare(&fHslider15, "unit", "ms");
		ui_interface->addHorizontalSlider("Compander Attack", &fHslider15, FAUSTFLOAT(3.0f), FAUSTFLOAT(0.5f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Compander Mismatch", &fHslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider3, "unit", "dBFS");
		ui_interface->addHorizontalSlider("Compander Reference", &fHslider3, FAUSTFLOAT(-2e+01f), FAUSTFLOAT(-4e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fHslider14, "unit", "ms");
		ui_interface->addHorizontalSlider("Compander Release", &fHslider14, FAUSTFLOAT(9e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fHslider12, "unit", "dB");
		ui_interface->addHorizontalSlider("FM Noise", &fHslider12, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Head-Switch Residue", &fHslider10, FAUSTFLOAT(0.15f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider6, "unit", "/min");
		ui_interface->addHorizontalSlider("Hi-Fi Dropouts", &fHslider6, FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6e+02f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("Sidechain HF Tilt", &fHslider13, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Tracking Error", &fHslider11, FAUSTFLOAT(0.25f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider9, "unit", "dB");
		ui_interface->addHorizontalSlider("Whine in FM Channel", &fHslider9, FAUSTFLOAT(-48.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Hiss");
		ui_interface->declare(&fHslider19, "unit", "dB");
		ui_interface->addHorizontalSlider("Hiss Level", &fHslider19, FAUSTFLOAT(-34.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fHslider20, "unit", "Hz");
		ui_interface->addHorizontalSlider("Hiss Low Cut", &fHslider20, FAUSTFLOAT(3e+02f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(4e+03f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Tape (per generation, scaled by history)");
		ui_interface->declare(&fHslider25, "unit", "deg");
		ui_interface->addHorizontalSlider("Azimuth Error", &fHslider25, FAUSTFLOAT(0.12f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Bandwidth Trim", &fHslider18, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.5f), FAUSTFLOAT(1.5f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Dropout Depth", &fHslider24, FAUSTFLOAT(0.4f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider22, "unit", "ms");
		ui_interface->addHorizontalSlider("Dropout Length", &fHslider22, FAUSTFLOAT(8.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fHslider23, "unit", "/min");
		ui_interface->addHorizontalSlider("Dropouts", &fHslider23, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fHslider32, "unit", "%");
		ui_interface->addHorizontalSlider("Wow and Flutter", &fHslider32, FAUSTFLOAT(0.15f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.6f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fHslider0);
		int iSlow1 = 7.0f >= fSlow0;
		int iSlow2 = 104729 * int(float(fHslider1));
		int iSlow3 = iSlow2 + 65144;
		int iSlow4 = (127 * ((iSlow3 & 16777215) ^ ((40503 * (iSlow3 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow5 = (125 * (iSlow4 ^ (iSlow4 >> 11)) + 52711) & 16777215;
		int iSlow6 = (121 * (iSlow5 ^ (iSlow5 >> 9)) + 10007) & 16777215;
		int iSlow7 = iSlow2 + 65013;
		int iSlow8 = (127 * ((iSlow7 & 16777215) ^ ((40503 * (iSlow7 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow9 = (125 * (iSlow8 ^ (iSlow8 >> 11)) + 52711) & 16777215;
		int iSlow10 = (121 * (iSlow9 ^ (iSlow9 >> 9)) + 10007) & 16777215;
		int iSlow11 = iSlow2 + 64882;
		int iSlow12 = (127 * ((iSlow11 & 16777215) ^ ((40503 * (iSlow11 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow13 = (125 * (iSlow12 ^ (iSlow12 >> 11)) + 52711) & 16777215;
		int iSlow14 = (121 * (iSlow13 ^ (iSlow13 >> 9)) + 10007) & 16777215;
		float fSlow15 = float(fHslider2);
		float fSlow16 = float(fHslider3);
		float fSlow17 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow14 ^ (iSlow14 >> 12)) + 3571) & 16777215) + float((113 * (iSlow10 ^ (iSlow10 >> 12)) + 3571) & 16777215) + float((113 * (iSlow6 ^ (iSlow6 >> 12)) + 3571) & 16777215)) + -1.5f);
		float fSlow18 = float(fHslider4);
		float fSlow19 = 0.405f * fSlow18;
		int iSlow20 = iSlow2 + 64358;
		int iSlow21 = (127 * ((iSlow20 & 16777215) ^ ((40503 * (iSlow20 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow22 = (125 * (iSlow21 ^ (iSlow21 >> 11)) + 52711) & 16777215;
		int iSlow23 = (121 * (iSlow22 ^ (iSlow22 >> 9)) + 10007) & 16777215;
		int iSlow24 = iSlow2 + 64227;
		int iSlow25 = (127 * ((iSlow24 & 16777215) ^ ((40503 * (iSlow24 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow26 = (125 * (iSlow25 ^ (iSlow25 >> 11)) + 52711) & 16777215;
		int iSlow27 = (121 * (iSlow26 ^ (iSlow26 >> 9)) + 10007) & 16777215;
		int iSlow28 = iSlow2 + 64096;
		int iSlow29 = (127 * ((iSlow28 & 16777215) ^ ((40503 * (iSlow28 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow30 = (125 * (iSlow29 ^ (iSlow29 >> 11)) + 52711) & 16777215;
		int iSlow31 = (121 * (iSlow30 ^ (iSlow30 >> 9)) + 10007) & 16777215;
		float fSlow32 = float(fHslider5);
		float fSlow33 = float(fHslider6);
		float fSlow34 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow31 ^ (iSlow31 >> 12)) + 3571) & 16777215) + float((113 * (iSlow27 ^ (iSlow27 >> 12)) + 3571) & 16777215) + float((113 * (iSlow23 ^ (iSlow23 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow35 = int(float(fEntry0));
		float fSlow36 = ((iSlow35) ? 59.94f : 5e+01f);
		float fSlow37 = 0.0006f * fSlow36;
		float fSlow38 = fConst15 * fSlow36;
		int iSlow39 = 6.0f >= fSlow0;
		int iSlow40 = iSlow2 + 57225;
		int iSlow41 = (127 * ((iSlow40 & 16777215) ^ ((40503 * (iSlow40 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow42 = (125 * (iSlow41 ^ (iSlow41 >> 11)) + 52711) & 16777215;
		int iSlow43 = (121 * (iSlow42 ^ (iSlow42 >> 9)) + 10007) & 16777215;
		int iSlow44 = iSlow2 + 57094;
		int iSlow45 = (127 * ((iSlow44 & 16777215) ^ ((40503 * (iSlow44 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow46 = (125 * (iSlow45 ^ (iSlow45 >> 11)) + 52711) & 16777215;
		int iSlow47 = (121 * (iSlow46 ^ (iSlow46 >> 9)) + 10007) & 16777215;
		int iSlow48 = iSlow2 + 56963;
		int iSlow49 = (127 * ((iSlow48 & 16777215) ^ ((40503 * (iSlow48 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow50 = (125 * (iSlow49 ^ (iSlow49 >> 11)) + 52711) & 16777215;
		int iSlow51 = (121 * (iSlow50 ^ (iSlow50 >> 9)) + 10007) & 16777215;
		float fSlow52 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow51 ^ (iSlow51 >> 12)) + 3571) & 16777215) + float((113 * (iSlow47 ^ (iSlow47 >> 12)) + 3571) & 16777215) + float((113 * (iSlow43 ^ (iSlow43 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow53 = iSlow2 + 56439;
		int iSlow54 = (127 * ((iSlow53 & 16777215) ^ ((40503 * (iSlow53 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow55 = (125 * (iSlow54 ^ (iSlow54 >> 11)) + 52711) & 16777215;
		int iSlow56 = (121 * (iSlow55 ^ (iSlow55 >> 9)) + 10007) & 16777215;
		int iSlow57 = iSlow2 + 56308;
		int iSlow58 = (127 * ((iSlow57 & 16777215) ^ ((40503 * (iSlow57 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow59 = (125 * (iSlow58 ^ (iSlow58 >> 11)) + 52711) & 16777215;
		int iSlow60 = (121 * (iSlow59 ^ (iSlow59 >> 9)) + 10007) & 16777215;
		int iSlow61 = iSlow2 + 56177;
		int iSlow62 = (127 * ((iSlow61 & 16777215) ^ ((40503 * (iSlow61 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow63 = (125 * (iSlow62 ^ (iSlow62 >> 11)) + 52711) & 16777215;
		int iSlow64 = (121 * (iSlow63 ^ (iSlow63 >> 9)) + 10007) & 16777215;
		float fSlow65 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow64 ^ (iSlow64 >> 12)) + 3571) & 16777215) + float((113 * (iSlow60 ^ (iSlow60 >> 12)) + 3571) & 16777215) + float((113 * (iSlow56 ^ (iSlow56 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow66 = 5.0f >= fSlow0;
		int iSlow67 = iSlow2 + 49306;
		int iSlow68 = (127 * ((iSlow67 & 16777215) ^ ((40503 * (iSlow67 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow69 = (125 * (iSlow68 ^ (iSlow68 >> 11)) + 52711) & 16777215;
		int iSlow70 = (121 * (iSlow69 ^ (iSlow69 >> 9)) + 10007) & 16777215;
		int iSlow71 = iSlow2 + 49175;
		int iSlow72 = (127 * ((iSlow71 & 16777215) ^ ((40503 * (iSlow71 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow73 = (125 * (iSlow72 ^ (iSlow72 >> 11)) + 52711) & 16777215;
		int iSlow74 = (121 * (iSlow73 ^ (iSlow73 >> 9)) + 10007) & 16777215;
		int iSlow75 = iSlow2 + 49044;
		int iSlow76 = (127 * ((iSlow75 & 16777215) ^ ((40503 * (iSlow75 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow77 = (125 * (iSlow76 ^ (iSlow76 >> 11)) + 52711) & 16777215;
		int iSlow78 = (121 * (iSlow77 ^ (iSlow77 >> 9)) + 10007) & 16777215;
		float fSlow79 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow78 ^ (iSlow78 >> 12)) + 3571) & 16777215) + float((113 * (iSlow74 ^ (iSlow74 >> 12)) + 3571) & 16777215) + float((113 * (iSlow70 ^ (iSlow70 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow80 = iSlow2 + 48520;
		int iSlow81 = (127 * ((iSlow80 & 16777215) ^ ((40503 * (iSlow80 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow82 = (125 * (iSlow81 ^ (iSlow81 >> 11)) + 52711) & 16777215;
		int iSlow83 = (121 * (iSlow82 ^ (iSlow82 >> 9)) + 10007) & 16777215;
		int iSlow84 = iSlow2 + 48389;
		int iSlow85 = (127 * ((iSlow84 & 16777215) ^ ((40503 * (iSlow84 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow86 = (125 * (iSlow85 ^ (iSlow85 >> 11)) + 52711) & 16777215;
		int iSlow87 = (121 * (iSlow86 ^ (iSlow86 >> 9)) + 10007) & 16777215;
		int iSlow88 = iSlow2 + 48258;
		int iSlow89 = (127 * ((iSlow88 & 16777215) ^ ((40503 * (iSlow88 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow90 = (125 * (iSlow89 ^ (iSlow89 >> 11)) + 52711) & 16777215;
		int iSlow91 = (121 * (iSlow90 ^ (iSlow90 >> 9)) + 10007) & 16777215;
		float fSlow92 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow91 ^ (iSlow91 >> 12)) + 3571) & 16777215) + float((113 * (iSlow87 ^ (iSlow87 >> 12)) + 3571) & 16777215) + float((113 * (iSlow83 ^ (iSlow83 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow93 = 4.0f >= fSlow0;
		int iSlow94 = iSlow2 + 41387;
		int iSlow95 = (127 * ((iSlow94 & 16777215) ^ ((40503 * (iSlow94 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow96 = (125 * (iSlow95 ^ (iSlow95 >> 11)) + 52711) & 16777215;
		int iSlow97 = (121 * (iSlow96 ^ (iSlow96 >> 9)) + 10007) & 16777215;
		int iSlow98 = iSlow2 + 41256;
		int iSlow99 = (127 * ((iSlow98 & 16777215) ^ ((40503 * (iSlow98 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow100 = (125 * (iSlow99 ^ (iSlow99 >> 11)) + 52711) & 16777215;
		int iSlow101 = (121 * (iSlow100 ^ (iSlow100 >> 9)) + 10007) & 16777215;
		int iSlow102 = iSlow2 + 41125;
		int iSlow103 = (127 * ((iSlow102 & 16777215) ^ ((40503 * (iSlow102 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow104 = (125 * (iSlow103 ^ (iSlow103 >> 11)) + 52711) & 16777215;
		int iSlow105 = (121 * (iSlow104 ^ (iSlow104 >> 9)) + 10007) & 16777215;
		float fSlow106 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow105 ^ (iSlow105 >> 12)) + 3571) & 16777215) + float((113 * (iSlow101 ^ (iSlow101 >> 12)) + 3571) & 16777215) + float((113 * (iSlow97 ^ (iSlow97 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow107 = iSlow2 + 40601;
		int iSlow108 = (127 * ((iSlow107 & 16777215) ^ ((40503 * (iSlow107 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow109 = (125 * (iSlow108 ^ (iSlow108 >> 11)) + 52711) & 16777215;
		int iSlow110 = (121 * (iSlow109 ^ (iSlow109 >> 9)) + 10007) & 16777215;
		int iSlow111 = iSlow2 + 40470;
		int iSlow112 = (127 * ((iSlow111 & 16777215) ^ ((40503 * (iSlow111 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow113 = (125 * (iSlow112 ^ (iSlow112 >> 11)) + 52711) & 16777215;
		int iSlow114 = (121 * (iSlow113 ^ (iSlow113 >> 9)) + 10007) & 16777215;
		int iSlow115 = iSlow2 + 40339;
		int iSlow116 = (127 * ((iSlow115 & 16777215) ^ ((40503 * (iSlow115 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow117 = (125 * (iSlow116 ^ (iSlow116 >> 11)) + 52711) & 16777215;
		int iSlow118 = (121 * (iSlow117 ^ (iSlow117 >> 9)) + 10007) & 16777215;
		float fSlow119 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow118 ^ (iSlow118 >> 12)) + 3571) & 16777215) + float((113 * (iSlow114 ^ (iSlow114 >> 12)) + 3571) & 16777215) + float((113 * (iSlow110 ^ (iSlow110 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow120 = 3.0f >= fSlow0;
		int iSlow121 = iSlow2 + 33468;
		int iSlow122 = (127 * ((iSlow121 & 16777215) ^ ((40503 * (iSlow121 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow123 = (125 * (iSlow122 ^ (iSlow122 >> 11)) + 52711) & 16777215;
		int iSlow124 = (121 * (iSlow123 ^ (iSlow123 >> 9)) + 10007) & 16777215;
		int iSlow125 = iSlow2 + 33337;
		int iSlow126 = (127 * ((iSlow125 & 16777215) ^ ((40503 * (iSlow125 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow127 = (125 * (iSlow126 ^ (iSlow126 >> 11)) + 52711) & 16777215;
		int iSlow128 = (121 * (iSlow127 ^ (iSlow127 >> 9)) + 10007) & 16777215;
		int iSlow129 = iSlow2 + 33206;
		int iSlow130 = (127 * ((iSlow129 & 16777215) ^ ((40503 * (iSlow129 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow131 = (125 * (iSlow130 ^ (iSlow130 >> 11)) + 52711) & 16777215;
		int iSlow132 = (121 * (iSlow131 ^ (iSlow131 >> 9)) + 10007) & 16777215;
		float fSlow133 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow132 ^ (iSlow132 >> 12)) + 3571) & 16777215) + float((113 * (iSlow128 ^ (iSlow128 >> 12)) + 3571) & 16777215) + float((113 * (iSlow124 ^ (iSlow124 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow134 = iSlow2 + 32682;
		int iSlow135 = (127 * ((iSlow134 & 16777215) ^ ((40503 * (iSlow134 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow136 = (125 * (iSlow135 ^ (iSlow135 >> 11)) + 52711) & 16777215;
		int iSlow137 = (121 * (iSlow136 ^ (iSlow136 >> 9)) + 10007) & 16777215;
		int iSlow138 = iSlow2 + 32551;
		int iSlow139 = (127 * ((iSlow138 & 16777215) ^ ((40503 * (iSlow138 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow140 = (125 * (iSlow139 ^ (iSlow139 >> 11)) + 52711) & 16777215;
		int iSlow141 = (121 * (iSlow140 ^ (iSlow140 >> 9)) + 10007) & 16777215;
		int iSlow142 = iSlow2 + 32420;
		int iSlow143 = (127 * ((iSlow142 & 16777215) ^ ((40503 * (iSlow142 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow144 = (125 * (iSlow143 ^ (iSlow143 >> 11)) + 52711) & 16777215;
		int iSlow145 = (121 * (iSlow144 ^ (iSlow144 >> 9)) + 10007) & 16777215;
		float fSlow146 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow145 ^ (iSlow145 >> 12)) + 3571) & 16777215) + float((113 * (iSlow141 ^ (iSlow141 >> 12)) + 3571) & 16777215) + float((113 * (iSlow137 ^ (iSlow137 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow147 = 2.0f >= fSlow0;
		int iSlow148 = iSlow2 + 25549;
		int iSlow149 = (127 * ((iSlow148 & 16777215) ^ ((40503 * (iSlow148 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow150 = (125 * (iSlow149 ^ (iSlow149 >> 11)) + 52711) & 16777215;
		int iSlow151 = (121 * (iSlow150 ^ (iSlow150 >> 9)) + 10007) & 16777215;
		int iSlow152 = iSlow2 + 25418;
		int iSlow153 = (127 * ((iSlow152 & 16777215) ^ ((40503 * (iSlow152 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow154 = (125 * (iSlow153 ^ (iSlow153 >> 11)) + 52711) & 16777215;
		int iSlow155 = (121 * (iSlow154 ^ (iSlow154 >> 9)) + 10007) & 16777215;
		int iSlow156 = iSlow2 + 25287;
		int iSlow157 = (127 * ((iSlow156 & 16777215) ^ ((40503 * (iSlow156 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow158 = (125 * (iSlow157 ^ (iSlow157 >> 11)) + 52711) & 16777215;
		int iSlow159 = (121 * (iSlow158 ^ (iSlow158 >> 9)) + 10007) & 16777215;
		float fSlow160 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow159 ^ (iSlow159 >> 12)) + 3571) & 16777215) + float((113 * (iSlow155 ^ (iSlow155 >> 12)) + 3571) & 16777215) + float((113 * (iSlow151 ^ (iSlow151 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow161 = iSlow2 + 24763;
		int iSlow162 = (127 * ((iSlow161 & 16777215) ^ ((40503 * (iSlow161 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow163 = (125 * (iSlow162 ^ (iSlow162 >> 11)) + 52711) & 16777215;
		int iSlow164 = (121 * (iSlow163 ^ (iSlow163 >> 9)) + 10007) & 16777215;
		int iSlow165 = iSlow2 + 24632;
		int iSlow166 = (127 * ((iSlow165 & 16777215) ^ ((40503 * (iSlow165 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow167 = (125 * (iSlow166 ^ (iSlow166 >> 11)) + 52711) & 16777215;
		int iSlow168 = (121 * (iSlow167 ^ (iSlow167 >> 9)) + 10007) & 16777215;
		int iSlow169 = iSlow2 + 24501;
		int iSlow170 = (127 * ((iSlow169 & 16777215) ^ ((40503 * (iSlow169 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow171 = (125 * (iSlow170 ^ (iSlow170 >> 11)) + 52711) & 16777215;
		int iSlow172 = (121 * (iSlow171 ^ (iSlow171 >> 9)) + 10007) & 16777215;
		float fSlow173 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow172 ^ (iSlow172 >> 12)) + 3571) & 16777215) + float((113 * (iSlow168 ^ (iSlow168 >> 12)) + 3571) & 16777215) + float((113 * (iSlow164 ^ (iSlow164 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow174 = 1.0f >= fSlow0;
		int iSlow175 = iSlow2 + 17630;
		int iSlow176 = (127 * ((iSlow175 & 16777215) ^ ((40503 * (iSlow175 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow177 = (125 * (iSlow176 ^ (iSlow176 >> 11)) + 52711) & 16777215;
		int iSlow178 = (121 * (iSlow177 ^ (iSlow177 >> 9)) + 10007) & 16777215;
		int iSlow179 = iSlow2 + 17499;
		int iSlow180 = (127 * ((iSlow179 & 16777215) ^ ((40503 * (iSlow179 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow181 = (125 * (iSlow180 ^ (iSlow180 >> 11)) + 52711) & 16777215;
		int iSlow182 = (121 * (iSlow181 ^ (iSlow181 >> 9)) + 10007) & 16777215;
		int iSlow183 = iSlow2 + 17368;
		int iSlow184 = (127 * ((iSlow183 & 16777215) ^ ((40503 * (iSlow183 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow185 = (125 * (iSlow184 ^ (iSlow184 >> 11)) + 52711) & 16777215;
		int iSlow186 = (121 * (iSlow185 ^ (iSlow185 >> 9)) + 10007) & 16777215;
		float fSlow187 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow186 ^ (iSlow186 >> 12)) + 3571) & 16777215) + float((113 * (iSlow182 ^ (iSlow182 >> 12)) + 3571) & 16777215) + float((113 * (iSlow178 ^ (iSlow178 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow188 = iSlow2 + 16844;
		int iSlow189 = (127 * ((iSlow188 & 16777215) ^ ((40503 * (iSlow188 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow190 = (125 * (iSlow189 ^ (iSlow189 >> 11)) + 52711) & 16777215;
		int iSlow191 = (121 * (iSlow190 ^ (iSlow190 >> 9)) + 10007) & 16777215;
		int iSlow192 = iSlow2 + 16713;
		int iSlow193 = (127 * ((iSlow192 & 16777215) ^ ((40503 * (iSlow192 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow194 = (125 * (iSlow193 ^ (iSlow193 >> 11)) + 52711) & 16777215;
		int iSlow195 = (121 * (iSlow194 ^ (iSlow194 >> 9)) + 10007) & 16777215;
		int iSlow196 = iSlow2 + 16582;
		int iSlow197 = (127 * ((iSlow196 & 16777215) ^ ((40503 * (iSlow196 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow198 = (125 * (iSlow197 ^ (iSlow197 >> 11)) + 52711) & 16777215;
		int iSlow199 = (121 * (iSlow198 ^ (iSlow198 >> 9)) + 10007) & 16777215;
		float fSlow200 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow199 ^ (iSlow199 >> 12)) + 3571) & 16777215) + float((113 * (iSlow195 ^ (iSlow195 >> 12)) + 3571) & 16777215) + float((113 * (iSlow191 ^ (iSlow191 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow201 = 0.0f >= fSlow0;
		int iSlow202 = iSlow2 + 9711;
		int iSlow203 = (127 * ((iSlow202 & 16777215) ^ ((40503 * (iSlow202 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow204 = (125 * (iSlow203 ^ (iSlow203 >> 11)) + 52711) & 16777215;
		int iSlow205 = (121 * (iSlow204 ^ (iSlow204 >> 9)) + 10007) & 16777215;
		int iSlow206 = iSlow2 + 9580;
		int iSlow207 = (127 * ((iSlow206 & 16777215) ^ ((40503 * (iSlow206 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow208 = (125 * (iSlow207 ^ (iSlow207 >> 11)) + 52711) & 16777215;
		int iSlow209 = (121 * (iSlow208 ^ (iSlow208 >> 9)) + 10007) & 16777215;
		int iSlow210 = iSlow2 + 9449;
		int iSlow211 = (127 * ((iSlow210 & 16777215) ^ ((40503 * (iSlow210 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow212 = (125 * (iSlow211 ^ (iSlow211 >> 11)) + 52711) & 16777215;
		int iSlow213 = (121 * (iSlow212 ^ (iSlow212 >> 9)) + 10007) & 16777215;
		float fSlow214 = fSlow16 + 4.0f * fSlow15 * (5.9604645e-08f * (float((113 * (iSlow213 ^ (iSlow213 >> 12)) + 3571) & 16777215) + float((113 * (iSlow209 ^ (iSlow209 >> 12)) + 3571) & 16777215) + float((113 * (iSlow205 ^ (iSlow205 >> 12)) + 3571) & 16777215)) + -1.5f);
		float fSlow215 = fConst22 * float(fHslider7);
		float fSlow216 = fConst22 * float(fHslider8);
		float fSlow217 = ((iSlow35) ? 15734.27f : 15625.0f);
		float fSlow218 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider9));
		int iSlow219 = iSlow2 + 8532;
		int iSlow220 = (127 * ((iSlow219 & 16777215) ^ ((40503 * (iSlow219 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow221 = (125 * (iSlow220 ^ (iSlow220 >> 11)) + 52711) & 16777215;
		int iSlow222 = (121 * (iSlow221 ^ (iSlow221 >> 9)) + 10007) & 16777215;
		int iSlow223 = iSlow2 + 8401;
		int iSlow224 = (127 * ((iSlow223 & 16777215) ^ ((40503 * (iSlow223 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow225 = (125 * (iSlow224 ^ (iSlow224 >> 11)) + 52711) & 16777215;
		int iSlow226 = (121 * (iSlow225 ^ (iSlow225 >> 9)) + 10007) & 16777215;
		int iSlow227 = iSlow2 + 8270;
		int iSlow228 = (127 * ((iSlow227 & 16777215) ^ ((40503 * (iSlow227 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow229 = (125 * (iSlow228 ^ (iSlow228 >> 11)) + 52711) & 16777215;
		int iSlow230 = (121 * (iSlow229 ^ (iSlow229 >> 9)) + 10007) & 16777215;
		float fSlow231 = float(fHslider10);
		float fSlow232 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow230 ^ (iSlow230 >> 12)) + 3571) & 16777215) + float((113 * (iSlow226 ^ (iSlow226 >> 12)) + 3571) & 16777215) + float((113 * (iSlow222 ^ (iSlow222 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow233 = iSlow2 + 8139;
		int iSlow234 = (127 * ((iSlow233 & 16777215) ^ ((40503 * (iSlow233 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow235 = (125 * (iSlow234 ^ (iSlow234 >> 11)) + 52711) & 16777215;
		int iSlow236 = (121 * (iSlow235 ^ (iSlow235 >> 9)) + 10007) & 16777215;
		int iSlow237 = iSlow2 + 8008;
		int iSlow238 = (127 * ((iSlow237 & 16777215) ^ ((40503 * (iSlow237 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow239 = (125 * (iSlow238 ^ (iSlow238 >> 11)) + 52711) & 16777215;
		int iSlow240 = (121 * (iSlow239 ^ (iSlow239 >> 9)) + 10007) & 16777215;
		int iSlow241 = iSlow2 + 7877;
		int iSlow242 = (127 * ((iSlow241 & 16777215) ^ ((40503 * (iSlow241 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow243 = (125 * (iSlow242 ^ (iSlow242 >> 11)) + 52711) & 16777215;
		int iSlow244 = (121 * (iSlow243 ^ (iSlow243 >> 9)) + 10007) & 16777215;
		float fSlow245 = float(fHslider11);
		float fSlow246 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow244 ^ (iSlow244 >> 12)) + 3571) & 16777215) + float((113 * (iSlow240 ^ (iSlow240 >> 12)) + 3571) & 16777215) + float((113 * (iSlow236 ^ (iSlow236 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow247 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider12));
		int iSlow248 = iSlow2 + 9318;
		int iSlow249 = (127 * ((iSlow248 & 16777215) ^ ((40503 * (iSlow248 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow250 = (125 * (iSlow249 ^ (iSlow249 >> 11)) + 52711) & 16777215;
		int iSlow251 = (121 * (iSlow250 ^ (iSlow250 >> 9)) + 10007) & 16777215;
		int iSlow252 = iSlow2 + 9187;
		int iSlow253 = (127 * ((iSlow252 & 16777215) ^ ((40503 * (iSlow252 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow254 = (125 * (iSlow253 ^ (iSlow253 >> 11)) + 52711) & 16777215;
		int iSlow255 = (121 * (iSlow254 ^ (iSlow254 >> 9)) + 10007) & 16777215;
		int iSlow256 = iSlow2 + 9056;
		int iSlow257 = (127 * ((iSlow256 & 16777215) ^ ((40503 * (iSlow256 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow258 = (125 * (iSlow257 ^ (iSlow257 >> 11)) + 52711) & 16777215;
		int iSlow259 = (121 * (iSlow258 ^ (iSlow258 >> 9)) + 10007) & 16777215;
		float fSlow260 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow259 ^ (iSlow259 >> 12)) + 3571) & 16777215) + float((113 * (iSlow255 ^ (iSlow255 >> 12)) + 3571) & 16777215) + float((113 * (iSlow251 ^ (iSlow251 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow261 = iSlow2 + 8925;
		int iSlow262 = (127 * ((iSlow261 & 16777215) ^ ((40503 * (iSlow261 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow263 = (125 * (iSlow262 ^ (iSlow262 >> 11)) + 52711) & 16777215;
		int iSlow264 = (121 * (iSlow263 ^ (iSlow263 >> 9)) + 10007) & 16777215;
		int iSlow265 = iSlow2 + 8794;
		int iSlow266 = (127 * ((iSlow265 & 16777215) ^ ((40503 * (iSlow265 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow267 = (125 * (iSlow266 ^ (iSlow266 >> 11)) + 52711) & 16777215;
		int iSlow268 = (121 * (iSlow267 ^ (iSlow267 >> 9)) + 10007) & 16777215;
		int iSlow269 = iSlow2 + 8663;
		int iSlow270 = (127 * ((iSlow269 & 16777215) ^ ((40503 * (iSlow269 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow271 = (125 * (iSlow270 ^ (iSlow270 >> 11)) + 52711) & 16777215;
		int iSlow272 = (121 * (iSlow271 ^ (iSlow271 >> 9)) + 10007) & 16777215;
		float fSlow273 = fConst12 * fSlow33 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow272 ^ (iSlow272 >> 12)) + 3571) & 16777215) + float((113 * (iSlow268 ^ (iSlow268 >> 12)) + 3571) & 16777215) + float((113 * (iSlow264 ^ (iSlow264 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow274 = float(fHslider13);
		float fSlow275 = 2.0f * fSlow274;
		float fSlow276 = 1.0f - 0.6f * fSlow274;
		float fSlow277 = float(fHslider14);
		float fSlow278 = 0.001f * fSlow277;
		int iSlow279 = std::fabs(fSlow278) < 1.1920929e-07f;
		float fSlow280 = ((iSlow279) ? 0.0f : std::exp(-(fConst15 / ((iSlow279) ? 1.0f : fSlow278))));
		float fSlow281 = float(fHslider15);
		float fSlow282 = 0.001f * fSlow281;
		int iSlow283 = std::fabs(fSlow282) < 1.1920929e-07f;
		float fSlow284 = ((iSlow283) ? 0.0f : std::exp(-(fConst15 / ((iSlow283) ? 1.0f : fSlow282))));
		int iSlow285 = iSlow2 + 10104;
		int iSlow286 = (127 * ((iSlow285 & 16777215) ^ ((40503 * (iSlow285 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow287 = (125 * (iSlow286 ^ (iSlow286 >> 11)) + 52711) & 16777215;
		int iSlow288 = (121 * (iSlow287 ^ (iSlow287 >> 9)) + 10007) & 16777215;
		int iSlow289 = iSlow2 + 9973;
		int iSlow290 = (127 * ((iSlow289 & 16777215) ^ ((40503 * (iSlow289 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow291 = (125 * (iSlow290 ^ (iSlow290 >> 11)) + 52711) & 16777215;
		int iSlow292 = (121 * (iSlow291 ^ (iSlow291 >> 9)) + 10007) & 16777215;
		int iSlow293 = iSlow2 + 9842;
		int iSlow294 = (127 * ((iSlow293 & 16777215) ^ ((40503 * (iSlow293 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow295 = (125 * (iSlow294 ^ (iSlow294 >> 11)) + 52711) & 16777215;
		int iSlow296 = (121 * (iSlow295 ^ (iSlow295 >> 9)) + 10007) & 16777215;
		float fSlow297 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow296 ^ (iSlow296 >> 12)) + 3571) & 16777215) + float((113 * (iSlow292 ^ (iSlow292 >> 12)) + 3571) & 16777215) + float((113 * (iSlow288 ^ (iSlow288 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow298 = 0.001f * fSlow277 * fSlow297;
		int iSlow299 = std::fabs(fSlow298) < 1.1920929e-07f;
		float fSlow300 = ((iSlow299) ? 0.0f : std::exp(-(fConst15 / ((iSlow299) ? 1.0f : fSlow298))));
		float fSlow301 = 0.001f * fSlow281 * fSlow297;
		int iSlow302 = std::fabs(fSlow301) < 1.1920929e-07f;
		float fSlow303 = ((iSlow302) ? 0.0f : std::exp(-(fConst15 / ((iSlow302) ? 1.0f : fSlow301))));
		float fSlow304 = float(fHslider16);
		int iSlow305 = iSlow2 + 6567;
		int iSlow306 = (127 * ((iSlow305 & 16777215) ^ ((40503 * (iSlow305 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow307 = (125 * (iSlow306 ^ (iSlow306 >> 11)) + 52711) & 16777215;
		int iSlow308 = (121 * (iSlow307 ^ (iSlow307 >> 9)) + 10007) & 16777215;
		float fSlow309 = float((5.9604645e-08f * float((113 * (iSlow308 ^ (iSlow308 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow310 = 1.2732395f * fSlow309;
		float fSlow311 = ((iSlow35) ? 33.34f : 23.39f);
		float fSlow312 = float(fHslider17);
		float fSlow313 = 0.55f * fSlow312;
		int iSlow314 = iSlow2 + 5519;
		int iSlow315 = (127 * ((iSlow314 & 16777215) ^ ((40503 * (iSlow314 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow316 = (125 * (iSlow315 ^ (iSlow315 >> 11)) + 52711) & 16777215;
		int iSlow317 = (121 * (iSlow316 ^ (iSlow316 >> 9)) + 10007) & 16777215;
		float fSlow318 = 5.9604645e-08f * float((113 * (iSlow317 ^ (iSlow317 >> 12)) + 3571) & 16777215);
		float fSlow319 = 0.2f * fSlow312;
		float fSlow320 = float(fEntry1);
		float fSlow321 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow318 < fSlow319) + ((fSlow318 >= fSlow319) & (fSlow318 < fSlow313))));
		float fSlow322 = fSlow321 + 1.0f;
		float fSlow323 = std::pow(0.029994002f / fSlow322 * fSlow311, 0.8f);
		int iSlow324 = iSlow2 + 672;
		int iSlow325 = (127 * ((iSlow324 & 16777215) ^ ((40503 * (iSlow324 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow326 = (125 * (iSlow325 ^ (iSlow325 >> 11)) + 52711) & 16777215;
		int iSlow327 = (121 * (iSlow326 ^ (iSlow326 >> 9)) + 10007) & 16777215;
		int iSlow328 = iSlow2 + 541;
		int iSlow329 = (127 * ((iSlow328 & 16777215) ^ ((40503 * (iSlow328 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow330 = (125 * (iSlow329 ^ (iSlow329 >> 11)) + 52711) & 16777215;
		int iSlow331 = (121 * (iSlow330 ^ (iSlow330 >> 9)) + 10007) & 16777215;
		int iSlow332 = iSlow2 + 410;
		int iSlow333 = (127 * ((iSlow332 & 16777215) ^ ((40503 * (iSlow332 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow334 = (125 * (iSlow333 ^ (iSlow333 >> 11)) + 52711) & 16777215;
		int iSlow335 = (121 * (iSlow334 ^ (iSlow334 >> 9)) + 10007) & 16777215;
		float fSlow336 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow335 ^ (iSlow335 >> 12)) + 3571) & 16777215) + float((113 * (iSlow331 ^ (iSlow331 >> 12)) + 3571) & 16777215) + float((113 * (iSlow327 ^ (iSlow327 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow337 = float(fHslider18);
		float fSlow338 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow336)) * fSlow323));
		float fSlow339 = 1.0f / fSlow338;
		float fSlow340 = (fSlow339 + 0.5176381f) / fSlow338 + 1.0f;
		float fSlow341 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow338);
		float fSlow342 = (fSlow339 + -0.5176381f) / fSlow338 + 1.0f;
		float fSlow343 = (fSlow339 + 1.4142135f) / fSlow338 + 1.0f;
		float fSlow344 = (fSlow339 + -1.4142135f) / fSlow338 + 1.0f;
		float fSlow345 = (fSlow339 + 1.9318516f) / fSlow338 + 1.0f;
		float fSlow346 = (fSlow339 + -1.9318516f) / fSlow338 + 1.0f;
		float fSlow347 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider19));
		float fSlow348 = fConst22 * float(fHslider20);
		int iSlow349 = iSlow2 + 1065;
		int iSlow350 = (127 * ((iSlow349 & 16777215) ^ ((40503 * (iSlow349 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow351 = (125 * (iSlow350 ^ (iSlow350 >> 11)) + 52711) & 16777215;
		int iSlow352 = (121 * (iSlow351 ^ (iSlow351 >> 9)) + 10007) & 16777215;
		int iSlow353 = iSlow2 + 934;
		int iSlow354 = (127 * ((iSlow353 & 16777215) ^ ((40503 * (iSlow353 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow355 = (125 * (iSlow354 ^ (iSlow354 >> 11)) + 52711) & 16777215;
		int iSlow356 = (121 * (iSlow355 ^ (iSlow355 >> 9)) + 10007) & 16777215;
		int iSlow357 = iSlow2 + 803;
		int iSlow358 = (127 * ((iSlow357 & 16777215) ^ ((40503 * (iSlow357 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow359 = (125 * (iSlow358 ^ (iSlow358 >> 11)) + 52711) & 16777215;
		int iSlow360 = (121 * (iSlow359 ^ (iSlow359 >> 9)) + 10007) & 16777215;
		float fSlow361 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow360 ^ (iSlow360 >> 12)) + 3571) & 16777215) + float((113 * (iSlow356 ^ (iSlow356 >> 12)) + 3571) & 16777215) + float((113 * (iSlow352 ^ (iSlow352 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow321 - fSlow320);
		int iSlow362 = iSlow2 + 3816;
		int iSlow363 = (127 * ((iSlow362 & 16777215) ^ ((40503 * (iSlow362 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow364 = (125 * (iSlow363 ^ (iSlow363 >> 11)) + 52711) & 16777215;
		int iSlow365 = (121 * (iSlow364 ^ (iSlow364 >> 9)) + 10007) & 16777215;
		int iSlow366 = iSlow2 + 3685;
		int iSlow367 = (127 * ((iSlow366 & 16777215) ^ ((40503 * (iSlow366 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow368 = (125 * (iSlow367 ^ (iSlow367 >> 11)) + 52711) & 16777215;
		int iSlow369 = (121 * (iSlow368 ^ (iSlow368 >> 9)) + 10007) & 16777215;
		int iSlow370 = iSlow2 + 3554;
		int iSlow371 = (127 * ((iSlow370 & 16777215) ^ ((40503 * (iSlow370 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow372 = (125 * (iSlow371 ^ (iSlow371 >> 11)) + 52711) & 16777215;
		int iSlow373 = (121 * (iSlow372 ^ (iSlow372 >> 9)) + 10007) & 16777215;
		float fSlow374 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow373 ^ (iSlow373 >> 12)) + 3571) & 16777215) + float((113 * (iSlow369 ^ (iSlow369 >> 12)) + 3571) & 16777215) + float((113 * (iSlow365 ^ (iSlow365 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow375 = fSlow374 > 0.0f;
		int iSlow376 = iSlow2 + 5388;
		int iSlow377 = (127 * ((iSlow376 & 16777215) ^ ((40503 * (iSlow376 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow378 = (125 * (iSlow377 ^ (iSlow377 >> 11)) + 52711) & 16777215;
		int iSlow379 = (121 * (iSlow378 ^ (iSlow378 >> 9)) + 10007) & 16777215;
		float fSlow380 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow379 ^ (iSlow379 >> 12)) + 3571) & 16777215));
		float fSlow381 = std::sin(fConst59 * fSlow380);
		float fSlow382 = fConst60 * (fSlow380 * std::pow(1e+01f, 0.05f * std::fabs(fSlow374)) / fSlow381);
		float fSlow383 = fConst60 * (fSlow380 / fSlow381);
		float fSlow384 = ((iSlow375) ? fSlow383 : fSlow382);
		float fSlow385 = std::tan(fConst61 * fSlow380);
		float fSlow386 = 1.0f / fSlow385;
		float fSlow387 = fSlow386 * (fSlow386 + fSlow384) + 1.0f;
		float fSlow388 = ((iSlow375) ? fSlow382 : fSlow383);
		float fSlow389 = fSlow386 * (fSlow386 - fSlow388) + 1.0f;
		float fSlow390 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow385));
		float fSlow391 = fSlow386 * (fSlow386 - fSlow384) + 1.0f;
		int iSlow392 = iSlow2 + 3423;
		int iSlow393 = (127 * ((iSlow392 & 16777215) ^ ((40503 * (iSlow392 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow394 = (125 * (iSlow393 ^ (iSlow393 >> 11)) + 52711) & 16777215;
		int iSlow395 = (121 * (iSlow394 ^ (iSlow394 >> 9)) + 10007) & 16777215;
		int iSlow396 = iSlow2 + 3292;
		int iSlow397 = (127 * ((iSlow396 & 16777215) ^ ((40503 * (iSlow396 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow398 = (125 * (iSlow397 ^ (iSlow397 >> 11)) + 52711) & 16777215;
		int iSlow399 = (121 * (iSlow398 ^ (iSlow398 >> 9)) + 10007) & 16777215;
		int iSlow400 = iSlow2 + 3161;
		int iSlow401 = (127 * ((iSlow400 & 16777215) ^ ((40503 * (iSlow400 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow402 = (125 * (iSlow401 ^ (iSlow401 >> 11)) + 52711) & 16777215;
		int iSlow403 = (121 * (iSlow402 ^ (iSlow402 >> 9)) + 10007) & 16777215;
		float fSlow404 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow403 ^ (iSlow403 >> 12)) + 3571) & 16777215) + float((113 * (iSlow399 ^ (iSlow399 >> 12)) + 3571) & 16777215) + float((113 * (iSlow395 ^ (iSlow395 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow405 = fSlow404 > 0.0f;
		int iSlow406 = iSlow2 + 5257;
		int iSlow407 = (127 * ((iSlow406 & 16777215) ^ ((40503 * (iSlow406 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow408 = (125 * (iSlow407 ^ (iSlow407 >> 11)) + 52711) & 16777215;
		int iSlow409 = (121 * (iSlow408 ^ (iSlow408 >> 9)) + 10007) & 16777215;
		float fSlow410 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow409 ^ (iSlow409 >> 12)) + 3571) & 16777215));
		float fSlow411 = std::sin(fConst59 * fSlow410);
		float fSlow412 = fConst62 * (fSlow410 * std::pow(1e+01f, 0.05f * std::fabs(fSlow404)) / fSlow411);
		float fSlow413 = fConst62 * (fSlow410 / fSlow411);
		float fSlow414 = ((iSlow405) ? fSlow413 : fSlow412);
		float fSlow415 = std::tan(fConst61 * fSlow410);
		float fSlow416 = 1.0f / fSlow415;
		float fSlow417 = fSlow416 * (fSlow416 + fSlow414) + 1.0f;
		float fSlow418 = ((iSlow405) ? fSlow412 : fSlow413);
		float fSlow419 = fSlow416 * (fSlow416 - fSlow418) + 1.0f;
		float fSlow420 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow415));
		float fSlow421 = fSlow416 * (fSlow416 - fSlow414) + 1.0f;
		int iSlow422 = iSlow2 + 1851;
		int iSlow423 = (127 * ((iSlow422 & 16777215) ^ ((40503 * (iSlow422 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow424 = (125 * (iSlow423 ^ (iSlow423 >> 11)) + 52711) & 16777215;
		int iSlow425 = (121 * (iSlow424 ^ (iSlow424 >> 9)) + 10007) & 16777215;
		int iSlow426 = iSlow2 + 1720;
		int iSlow427 = (127 * ((iSlow426 & 16777215) ^ ((40503 * (iSlow426 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow428 = (125 * (iSlow427 ^ (iSlow427 >> 11)) + 52711) & 16777215;
		int iSlow429 = (121 * (iSlow428 ^ (iSlow428 >> 9)) + 10007) & 16777215;
		int iSlow430 = iSlow2 + 1589;
		int iSlow431 = (127 * ((iSlow430 & 16777215) ^ ((40503 * (iSlow430 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow432 = (125 * (iSlow431 ^ (iSlow431 >> 11)) + 52711) & 16777215;
		int iSlow433 = (121 * (iSlow432 ^ (iSlow432 >> 9)) + 10007) & 16777215;
		float fSlow434 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow433 ^ (iSlow433 >> 12)) + 3571) & 16777215) + float((113 * (iSlow429 ^ (iSlow429 >> 12)) + 3571) & 16777215) + float((113 * (iSlow425 ^ (iSlow425 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow435 = float(fHslider21);
		float fSlow436 = fConst12 * fSlow435 * fSlow434;
		float fSlow437 = std::exp(-(fConst67 / float(fHslider22)));
		float fSlow438 = 0.72f * fSlow18;
		float fSlow439 = float(fHslider23);
		float fSlow440 = fSlow439 * fSlow434;
		float fSlow441 = fConst12 * fSlow440;
		float fSlow442 = fConst73 * fSlow440;
		int iSlow443 = iSlow2 + 2244;
		int iSlow444 = (127 * ((iSlow443 & 16777215) ^ ((40503 * (iSlow443 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow445 = (125 * (iSlow444 ^ (iSlow444 >> 11)) + 52711) & 16777215;
		int iSlow446 = (121 * (iSlow445 ^ (iSlow445 >> 9)) + 10007) & 16777215;
		int iSlow447 = iSlow2 + 2113;
		int iSlow448 = (127 * ((iSlow447 & 16777215) ^ ((40503 * (iSlow447 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow449 = (125 * (iSlow448 ^ (iSlow448 >> 11)) + 52711) & 16777215;
		int iSlow450 = (121 * (iSlow449 ^ (iSlow449 >> 9)) + 10007) & 16777215;
		int iSlow451 = iSlow2 + 1982;
		int iSlow452 = (127 * ((iSlow451 & 16777215) ^ ((40503 * (iSlow451 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow453 = (125 * (iSlow452 ^ (iSlow452 >> 11)) + 52711) & 16777215;
		int iSlow454 = (121 * (iSlow453 ^ (iSlow453 >> 9)) + 10007) & 16777215;
		float fSlow455 = float(fHslider24);
		float fSlow456 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow454 ^ (iSlow454 >> 12)) + 3571) & 16777215) + float((113 * (iSlow450 ^ (iSlow450 >> 12)) + 3571) & 16777215) + float((113 * (iSlow446 ^ (iSlow446 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow457 = 0.121492326f / fSlow322;
		float fSlow458 = fConst79 * fSlow18;
		int iSlow459 = iSlow2 + 279;
		int iSlow460 = (127 * ((iSlow459 & 16777215) ^ ((40503 * (iSlow459 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow461 = (125 * (iSlow460 ^ (iSlow460 >> 11)) + 52711) & 16777215;
		int iSlow462 = (121 * (iSlow461 ^ (iSlow461 >> 9)) + 10007) & 16777215;
		int iSlow463 = iSlow2 + 148;
		int iSlow464 = (127 * ((iSlow463 & 16777215) ^ ((40503 * (iSlow463 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow465 = (125 * (iSlow464 ^ (iSlow464 >> 11)) + 52711) & 16777215;
		int iSlow466 = (121 * (iSlow465 ^ (iSlow465 >> 9)) + 10007) & 16777215;
		int iSlow467 = iSlow2 + 17;
		int iSlow468 = (127 * ((iSlow467 & 16777215) ^ ((40503 * (iSlow467 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow469 = (125 * (iSlow468 ^ (iSlow468 >> 11)) + 52711) & 16777215;
		int iSlow470 = (121 * (iSlow469 ^ (iSlow469 >> 9)) + 10007) & 16777215;
		float fSlow471 = float(fHslider25);
		float fSlow472 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow470 ^ (iSlow470 >> 12)) + 3571) & 16777215) + float((113 * (iSlow466 ^ (iSlow466 >> 12)) + 3571) & 16777215) + float((113 * (iSlow462 ^ (iSlow462 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow473 = fConst0 * fSlow322;
		float fSlow474 = fConst22 * float(fHslider26);
		float fSlow475 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider27));
		float fSlow476 = fConst22 * float(fHslider28);
		int iSlow477 = iSlow2 + 3030;
		int iSlow478 = (127 * ((iSlow477 & 16777215) ^ ((40503 * (iSlow477 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow479 = (125 * (iSlow478 ^ (iSlow478 >> 11)) + 52711) & 16777215;
		int iSlow480 = (121 * (iSlow479 ^ (iSlow479 >> 9)) + 10007) & 16777215;
		int iSlow481 = iSlow2 + 2899;
		int iSlow482 = (127 * ((iSlow481 & 16777215) ^ ((40503 * (iSlow481 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow483 = (125 * (iSlow482 ^ (iSlow482 >> 11)) + 52711) & 16777215;
		int iSlow484 = (121 * (iSlow483 ^ (iSlow483 >> 9)) + 10007) & 16777215;
		int iSlow485 = iSlow2 + 2768;
		int iSlow486 = (127 * ((iSlow485 & 16777215) ^ ((40503 * (iSlow485 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow487 = (125 * (iSlow486 ^ (iSlow486 >> 11)) + 52711) & 16777215;
		int iSlow488 = (121 * (iSlow487 ^ (iSlow487 >> 9)) + 10007) & 16777215;
		float fSlow489 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow488 ^ (iSlow488 >> 12)) + 3571) & 16777215) + float((113 * (iSlow484 ^ (iSlow484 >> 12)) + 3571) & 16777215) + float((113 * (iSlow480 ^ (iSlow480 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow490 = float(fCheckbox0) < 0.5f;
		int iSlow491 = iSlow2 + 2637;
		int iSlow492 = (127 * ((iSlow491 & 16777215) ^ ((40503 * (iSlow491 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow493 = (125 * (iSlow492 ^ (iSlow492 >> 11)) + 52711) & 16777215;
		int iSlow494 = (121 * (iSlow493 ^ (iSlow493 >> 9)) + 10007) & 16777215;
		int iSlow495 = iSlow2 + 2506;
		int iSlow496 = (127 * ((iSlow495 & 16777215) ^ ((40503 * (iSlow495 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow497 = (125 * (iSlow496 ^ (iSlow496 >> 11)) + 52711) & 16777215;
		int iSlow498 = (121 * (iSlow497 ^ (iSlow497 >> 9)) + 10007) & 16777215;
		int iSlow499 = iSlow2 + 2375;
		int iSlow500 = (127 * ((iSlow499 & 16777215) ^ ((40503 * (iSlow499 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow501 = (125 * (iSlow500 ^ (iSlow500 >> 11)) + 52711) & 16777215;
		int iSlow502 = (121 * (iSlow501 ^ (iSlow501 >> 9)) + 10007) & 16777215;
		float fSlow503 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow502 ^ (iSlow502 >> 12)) + 3571) & 16777215) + float((113 * (iSlow498 ^ (iSlow498 >> 12)) + 3571) & 16777215) + float((113 * (iSlow494 ^ (iSlow494 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow504 = 0.63661975f / fSlow503;
		float fSlow505 = float(fHslider29);
		float fSlow506 = 0.001f * fSlow505;
		int iSlow507 = std::fabs(fSlow506) < 1.1920929e-07f;
		float fSlow508 = ((iSlow507) ? 0.0f : std::exp(-(fConst15 / ((iSlow507) ? 1.0f : fSlow506))));
		int iSlow509 = iSlow2 + 4209;
		int iSlow510 = (127 * ((iSlow509 & 16777215) ^ ((40503 * (iSlow509 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow511 = (125 * (iSlow510 ^ (iSlow510 >> 11)) + 52711) & 16777215;
		int iSlow512 = (121 * (iSlow511 ^ (iSlow511 >> 9)) + 10007) & 16777215;
		int iSlow513 = iSlow2 + 4078;
		int iSlow514 = (127 * ((iSlow513 & 16777215) ^ ((40503 * (iSlow513 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow515 = (125 * (iSlow514 ^ (iSlow514 >> 11)) + 52711) & 16777215;
		int iSlow516 = (121 * (iSlow515 ^ (iSlow515 >> 9)) + 10007) & 16777215;
		int iSlow517 = iSlow2 + 3947;
		int iSlow518 = (127 * ((iSlow517 & 16777215) ^ ((40503 * (iSlow517 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow519 = (125 * (iSlow518 ^ (iSlow518 >> 11)) + 52711) & 16777215;
		int iSlow520 = (121 * (iSlow519 ^ (iSlow519 >> 9)) + 10007) & 16777215;
		float fSlow521 = float(fHslider30);
		float fSlow522 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow520 ^ (iSlow520 >> 12)) + 3571) & 16777215) + float((113 * (iSlow516 ^ (iSlow516 >> 12)) + 3571) & 16777215) + float((113 * (iSlow512 ^ (iSlow512 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow523 = 4.0f * fSlow522;
		int iSlow524 = iSlow2 + 4602;
		int iSlow525 = (127 * ((iSlow524 & 16777215) ^ ((40503 * (iSlow524 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow526 = (125 * (iSlow525 ^ (iSlow525 >> 11)) + 52711) & 16777215;
		int iSlow527 = (121 * (iSlow526 ^ (iSlow526 >> 9)) + 10007) & 16777215;
		int iSlow528 = iSlow2 + 4471;
		int iSlow529 = (127 * ((iSlow528 & 16777215) ^ ((40503 * (iSlow528 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow530 = (125 * (iSlow529 ^ (iSlow529 >> 11)) + 52711) & 16777215;
		int iSlow531 = (121 * (iSlow530 ^ (iSlow530 >> 9)) + 10007) & 16777215;
		int iSlow532 = iSlow2 + 4340;
		int iSlow533 = (127 * ((iSlow532 & 16777215) ^ ((40503 * (iSlow532 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow534 = (125 * (iSlow533 ^ (iSlow533 >> 11)) + 52711) & 16777215;
		int iSlow535 = (121 * (iSlow534 ^ (iSlow534 >> 9)) + 10007) & 16777215;
		float fSlow536 = float(fHslider31);
		float fSlow537 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow535 ^ (iSlow535 >> 12)) + 3571) & 16777215) + float((113 * (iSlow531 ^ (iSlow531 >> 12)) + 3571) & 16777215) + float((113 * (iSlow527 ^ (iSlow527 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow538 = 0.0005f * fSlow505;
		int iSlow539 = std::fabs(fSlow538) < 1.1920929e-07f;
		float fSlow540 = ((iSlow539) ? 0.0f : std::exp(-(fConst15 / ((iSlow539) ? 1.0f : fSlow538))));
		float fSlow541 = 4e+01f * fSlow522;
		float fSlow542 = fConst86 * fSlow36;
		int iSlow543 = iSlow2 + 5650;
		int iSlow544 = (127 * ((iSlow543 & 16777215) ^ ((40503 * (iSlow543 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow545 = (125 * (iSlow544 ^ (iSlow544 >> 11)) + 52711) & 16777215;
		int iSlow546 = (121 * (iSlow545 ^ (iSlow545 >> 9)) + 10007) & 16777215;
		float fSlow547 = float((113 * (iSlow546 ^ (iSlow546 >> 12)) + 3571) & 16777215);
		float fSlow548 = 8.613662e-07f * fSlow547;
		float fSlow549 = std::sin(fSlow548);
		float fSlow550 = std::cos(fSlow548);
		int iSlow551 = iSlow2 + 5912;
		int iSlow552 = (127 * ((iSlow551 & 16777215) ^ ((40503 * (iSlow551 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow553 = (125 * (iSlow552 ^ (iSlow552 >> 11)) + 52711) & 16777215;
		int iSlow554 = (121 * (iSlow553 ^ (iSlow553 >> 9)) + 10007) & 16777215;
		float fSlow555 = 2.3841858e-08f * float((113 * (iSlow554 ^ (iSlow554 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow556 = fConst87 * fSlow555;
		float fSlow557 = 6.366619e-07f * fSlow547;
		float fSlow558 = std::sin(fSlow557);
		float fSlow559 = std::cos(fSlow557);
		float fSlow560 = 0.013081228f / fSlow555;
		int iSlow561 = iSlow2 + 5781;
		int iSlow562 = (127 * ((iSlow561 & 16777215) ^ ((40503 * (iSlow561 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow563 = (125 * (iSlow562 ^ (iSlow562 >> 11)) + 52711) & 16777215;
		int iSlow564 = (121 * (iSlow563 ^ (iSlow563 >> 9)) + 10007) & 16777215;
		float fSlow565 = 2.3841858e-08f * float((113 * (iSlow564 ^ (iSlow564 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow566 = fConst88 * fSlow565;
		float fSlow567 = 3.7450704e-07f * fSlow547;
		float fSlow568 = std::sin(fSlow567);
		float fSlow569 = std::cos(fSlow567);
		float fSlow570 = 0.18506388f / fSlow565;
		int iSlow571 = iSlow2 + 1458;
		int iSlow572 = (127 * ((iSlow571 & 16777215) ^ ((40503 * (iSlow571 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow573 = (125 * (iSlow572 ^ (iSlow572 >> 11)) + 52711) & 16777215;
		int iSlow574 = (121 * (iSlow573 ^ (iSlow573 >> 9)) + 10007) & 16777215;
		int iSlow575 = iSlow2 + 1327;
		int iSlow576 = (127 * ((iSlow575 & 16777215) ^ ((40503 * (iSlow575 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow577 = (125 * (iSlow576 ^ (iSlow576 >> 11)) + 52711) & 16777215;
		int iSlow578 = (121 * (iSlow577 ^ (iSlow577 >> 9)) + 10007) & 16777215;
		int iSlow579 = iSlow2 + 1196;
		int iSlow580 = (127 * ((iSlow579 & 16777215) ^ ((40503 * (iSlow579 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow581 = (125 * (iSlow580 ^ (iSlow580 >> 11)) + 52711) & 16777215;
		int iSlow582 = (121 * (iSlow581 ^ (iSlow581 >> 9)) + 10007) & 16777215;
		float fSlow583 = float(fHslider32);
		float fSlow584 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow582 ^ (iSlow582 >> 12)) + 3571) & 16777215) + float((113 * (iSlow578 ^ (iSlow578 >> 12)) + 3571) & 16777215) + float((113 * (iSlow574 ^ (iSlow574 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow585 = fSlow416 * (fSlow416 + fSlow418) + 1.0f;
		float fSlow586 = fSlow386 * (fSlow386 + fSlow388) + 1.0f;
		float fSlow587 = 1.0f - fSlow309;
		int iSlow588 = iSlow2 + 16058;
		int iSlow589 = (127 * ((iSlow588 & 16777215) ^ ((40503 * (iSlow588 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow590 = (125 * (iSlow589 ^ (iSlow589 >> 11)) + 52711) & 16777215;
		int iSlow591 = (121 * (iSlow590 ^ (iSlow590 >> 9)) + 10007) & 16777215;
		int iSlow592 = iSlow2 + 15927;
		int iSlow593 = (127 * ((iSlow592 & 16777215) ^ ((40503 * (iSlow592 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow594 = (125 * (iSlow593 ^ (iSlow593 >> 11)) + 52711) & 16777215;
		int iSlow595 = (121 * (iSlow594 ^ (iSlow594 >> 9)) + 10007) & 16777215;
		int iSlow596 = iSlow2 + 15796;
		int iSlow597 = (127 * ((iSlow596 & 16777215) ^ ((40503 * (iSlow596 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow598 = (125 * (iSlow597 ^ (iSlow597 >> 11)) + 52711) & 16777215;
		int iSlow599 = (121 * (iSlow598 ^ (iSlow598 >> 9)) + 10007) & 16777215;
		float fSlow600 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow599 ^ (iSlow599 >> 12)) + 3571) & 16777215) + float((113 * (iSlow595 ^ (iSlow595 >> 12)) + 3571) & 16777215) + float((113 * (iSlow591 ^ (iSlow591 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow601 = iSlow2 + 17237;
		int iSlow602 = (127 * ((iSlow601 & 16777215) ^ ((40503 * (iSlow601 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow603 = (125 * (iSlow602 ^ (iSlow602 >> 11)) + 52711) & 16777215;
		int iSlow604 = (121 * (iSlow603 ^ (iSlow603 >> 9)) + 10007) & 16777215;
		int iSlow605 = iSlow2 + 17106;
		int iSlow606 = (127 * ((iSlow605 & 16777215) ^ ((40503 * (iSlow605 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow607 = (125 * (iSlow606 ^ (iSlow606 >> 11)) + 52711) & 16777215;
		int iSlow608 = (121 * (iSlow607 ^ (iSlow607 >> 9)) + 10007) & 16777215;
		int iSlow609 = iSlow2 + 16975;
		int iSlow610 = (127 * ((iSlow609 & 16777215) ^ ((40503 * (iSlow609 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow611 = (125 * (iSlow610 ^ (iSlow610 >> 11)) + 52711) & 16777215;
		int iSlow612 = (121 * (iSlow611 ^ (iSlow611 >> 9)) + 10007) & 16777215;
		float fSlow613 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow612 ^ (iSlow612 >> 12)) + 3571) & 16777215) + float((113 * (iSlow608 ^ (iSlow608 >> 12)) + 3571) & 16777215) + float((113 * (iSlow604 ^ (iSlow604 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow614 = iSlow2 + 16451;
		int iSlow615 = (127 * ((iSlow614 & 16777215) ^ ((40503 * (iSlow614 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow616 = (125 * (iSlow615 ^ (iSlow615 >> 11)) + 52711) & 16777215;
		int iSlow617 = (121 * (iSlow616 ^ (iSlow616 >> 9)) + 10007) & 16777215;
		int iSlow618 = iSlow2 + 16320;
		int iSlow619 = (127 * ((iSlow618 & 16777215) ^ ((40503 * (iSlow618 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow620 = (125 * (iSlow619 ^ (iSlow619 >> 11)) + 52711) & 16777215;
		int iSlow621 = (121 * (iSlow620 ^ (iSlow620 >> 9)) + 10007) & 16777215;
		int iSlow622 = iSlow2 + 16189;
		int iSlow623 = (127 * ((iSlow622 & 16777215) ^ ((40503 * (iSlow622 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow624 = (125 * (iSlow623 ^ (iSlow623 >> 11)) + 52711) & 16777215;
		int iSlow625 = (121 * (iSlow624 ^ (iSlow624 >> 9)) + 10007) & 16777215;
		float fSlow626 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow625 ^ (iSlow625 >> 12)) + 3571) & 16777215) + float((113 * (iSlow621 ^ (iSlow621 >> 12)) + 3571) & 16777215) + float((113 * (iSlow617 ^ (iSlow617 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow627 = iSlow2 + 18023;
		int iSlow628 = (127 * ((iSlow627 & 16777215) ^ ((40503 * (iSlow627 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow629 = (125 * (iSlow628 ^ (iSlow628 >> 11)) + 52711) & 16777215;
		int iSlow630 = (121 * (iSlow629 ^ (iSlow629 >> 9)) + 10007) & 16777215;
		int iSlow631 = iSlow2 + 17892;
		int iSlow632 = (127 * ((iSlow631 & 16777215) ^ ((40503 * (iSlow631 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow633 = (125 * (iSlow632 ^ (iSlow632 >> 11)) + 52711) & 16777215;
		int iSlow634 = (121 * (iSlow633 ^ (iSlow633 >> 9)) + 10007) & 16777215;
		int iSlow635 = iSlow2 + 17761;
		int iSlow636 = (127 * ((iSlow635 & 16777215) ^ ((40503 * (iSlow635 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow637 = (125 * (iSlow636 ^ (iSlow636 >> 11)) + 52711) & 16777215;
		int iSlow638 = (121 * (iSlow637 ^ (iSlow637 >> 9)) + 10007) & 16777215;
		float fSlow639 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow638 ^ (iSlow638 >> 12)) + 3571) & 16777215) + float((113 * (iSlow634 ^ (iSlow634 >> 12)) + 3571) & 16777215) + float((113 * (iSlow630 ^ (iSlow630 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow640 = 0.001f * fSlow277 * fSlow639;
		int iSlow641 = std::fabs(fSlow640) < 1.1920929e-07f;
		float fSlow642 = ((iSlow641) ? 0.0f : std::exp(-(fConst15 / ((iSlow641) ? 1.0f : fSlow640))));
		float fSlow643 = 0.001f * fSlow281 * fSlow639;
		int iSlow644 = std::fabs(fSlow643) < 1.1920929e-07f;
		float fSlow645 = ((iSlow644) ? 0.0f : std::exp(-(fConst15 / ((iSlow644) ? 1.0f : fSlow643))));
		int iSlow646 = iSlow2 + 14486;
		int iSlow647 = (127 * ((iSlow646 & 16777215) ^ ((40503 * (iSlow646 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow648 = (125 * (iSlow647 ^ (iSlow647 >> 11)) + 52711) & 16777215;
		int iSlow649 = (121 * (iSlow648 ^ (iSlow648 >> 9)) + 10007) & 16777215;
		float fSlow650 = float((5.9604645e-08f * float((113 * (iSlow649 ^ (iSlow649 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow651 = 1.2732395f * fSlow650;
		int iSlow652 = iSlow2 + 13438;
		int iSlow653 = (127 * ((iSlow652 & 16777215) ^ ((40503 * (iSlow652 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow654 = (125 * (iSlow653 ^ (iSlow653 >> 11)) + 52711) & 16777215;
		int iSlow655 = (121 * (iSlow654 ^ (iSlow654 >> 9)) + 10007) & 16777215;
		float fSlow656 = 5.9604645e-08f * float((113 * (iSlow655 ^ (iSlow655 >> 12)) + 3571) & 16777215);
		float fSlow657 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow656 < fSlow319) + ((fSlow656 >= fSlow319) & (fSlow656 < fSlow313))));
		float fSlow658 = fSlow657 + 1.0f;
		float fSlow659 = std::pow(0.029994002f / fSlow658 * fSlow311, 0.8f);
		int iSlow660 = iSlow2 + 8591;
		int iSlow661 = (127 * ((iSlow660 & 16777215) ^ ((40503 * (iSlow660 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow662 = (125 * (iSlow661 ^ (iSlow661 >> 11)) + 52711) & 16777215;
		int iSlow663 = (121 * (iSlow662 ^ (iSlow662 >> 9)) + 10007) & 16777215;
		int iSlow664 = iSlow2 + 8460;
		int iSlow665 = (127 * ((iSlow664 & 16777215) ^ ((40503 * (iSlow664 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow666 = (125 * (iSlow665 ^ (iSlow665 >> 11)) + 52711) & 16777215;
		int iSlow667 = (121 * (iSlow666 ^ (iSlow666 >> 9)) + 10007) & 16777215;
		int iSlow668 = iSlow2 + 8329;
		int iSlow669 = (127 * ((iSlow668 & 16777215) ^ ((40503 * (iSlow668 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow670 = (125 * (iSlow669 ^ (iSlow669 >> 11)) + 52711) & 16777215;
		int iSlow671 = (121 * (iSlow670 ^ (iSlow670 >> 9)) + 10007) & 16777215;
		float fSlow672 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow671 ^ (iSlow671 >> 12)) + 3571) & 16777215) + float((113 * (iSlow667 ^ (iSlow667 >> 12)) + 3571) & 16777215) + float((113 * (iSlow663 ^ (iSlow663 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow673 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow672)) * fSlow659));
		float fSlow674 = 1.0f / fSlow673;
		float fSlow675 = (fSlow674 + 0.5176381f) / fSlow673 + 1.0f;
		float fSlow676 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow673);
		float fSlow677 = (fSlow674 + -0.5176381f) / fSlow673 + 1.0f;
		float fSlow678 = (fSlow674 + 1.4142135f) / fSlow673 + 1.0f;
		float fSlow679 = (fSlow674 + -1.4142135f) / fSlow673 + 1.0f;
		float fSlow680 = (fSlow674 + 1.9318516f) / fSlow673 + 1.0f;
		float fSlow681 = (fSlow674 + -1.9318516f) / fSlow673 + 1.0f;
		int iSlow682 = iSlow2 + 8984;
		int iSlow683 = (127 * ((iSlow682 & 16777215) ^ ((40503 * (iSlow682 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow684 = (125 * (iSlow683 ^ (iSlow683 >> 11)) + 52711) & 16777215;
		int iSlow685 = (121 * (iSlow684 ^ (iSlow684 >> 9)) + 10007) & 16777215;
		int iSlow686 = iSlow2 + 8853;
		int iSlow687 = (127 * ((iSlow686 & 16777215) ^ ((40503 * (iSlow686 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow688 = (125 * (iSlow687 ^ (iSlow687 >> 11)) + 52711) & 16777215;
		int iSlow689 = (121 * (iSlow688 ^ (iSlow688 >> 9)) + 10007) & 16777215;
		int iSlow690 = iSlow2 + 8722;
		int iSlow691 = (127 * ((iSlow690 & 16777215) ^ ((40503 * (iSlow690 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow692 = (125 * (iSlow691 ^ (iSlow691 >> 11)) + 52711) & 16777215;
		int iSlow693 = (121 * (iSlow692 ^ (iSlow692 >> 9)) + 10007) & 16777215;
		float fSlow694 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow693 ^ (iSlow693 >> 12)) + 3571) & 16777215) + float((113 * (iSlow689 ^ (iSlow689 >> 12)) + 3571) & 16777215) + float((113 * (iSlow685 ^ (iSlow685 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow657 - fSlow320);
		int iSlow695 = iSlow2 + 11735;
		int iSlow696 = (127 * ((iSlow695 & 16777215) ^ ((40503 * (iSlow695 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow697 = (125 * (iSlow696 ^ (iSlow696 >> 11)) + 52711) & 16777215;
		int iSlow698 = (121 * (iSlow697 ^ (iSlow697 >> 9)) + 10007) & 16777215;
		int iSlow699 = iSlow2 + 11604;
		int iSlow700 = (127 * ((iSlow699 & 16777215) ^ ((40503 * (iSlow699 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow701 = (125 * (iSlow700 ^ (iSlow700 >> 11)) + 52711) & 16777215;
		int iSlow702 = (121 * (iSlow701 ^ (iSlow701 >> 9)) + 10007) & 16777215;
		int iSlow703 = iSlow2 + 11473;
		int iSlow704 = (127 * ((iSlow703 & 16777215) ^ ((40503 * (iSlow703 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow705 = (125 * (iSlow704 ^ (iSlow704 >> 11)) + 52711) & 16777215;
		int iSlow706 = (121 * (iSlow705 ^ (iSlow705 >> 9)) + 10007) & 16777215;
		float fSlow707 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow706 ^ (iSlow706 >> 12)) + 3571) & 16777215) + float((113 * (iSlow702 ^ (iSlow702 >> 12)) + 3571) & 16777215) + float((113 * (iSlow698 ^ (iSlow698 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow708 = fSlow707 > 0.0f;
		int iSlow709 = iSlow2 + 13307;
		int iSlow710 = (127 * ((iSlow709 & 16777215) ^ ((40503 * (iSlow709 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow711 = (125 * (iSlow710 ^ (iSlow710 >> 11)) + 52711) & 16777215;
		int iSlow712 = (121 * (iSlow711 ^ (iSlow711 >> 9)) + 10007) & 16777215;
		float fSlow713 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow712 ^ (iSlow712 >> 12)) + 3571) & 16777215));
		float fSlow714 = std::sin(fConst59 * fSlow713);
		float fSlow715 = fConst60 * (fSlow713 * std::pow(1e+01f, 0.05f * std::fabs(fSlow707)) / fSlow714);
		float fSlow716 = fConst60 * (fSlow713 / fSlow714);
		float fSlow717 = ((iSlow708) ? fSlow716 : fSlow715);
		float fSlow718 = std::tan(fConst61 * fSlow713);
		float fSlow719 = 1.0f / fSlow718;
		float fSlow720 = fSlow719 * (fSlow719 + fSlow717) + 1.0f;
		float fSlow721 = ((iSlow708) ? fSlow715 : fSlow716);
		float fSlow722 = fSlow719 * (fSlow719 - fSlow721) + 1.0f;
		float fSlow723 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow718));
		float fSlow724 = fSlow719 * (fSlow719 - fSlow717) + 1.0f;
		int iSlow725 = iSlow2 + 11342;
		int iSlow726 = (127 * ((iSlow725 & 16777215) ^ ((40503 * (iSlow725 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow727 = (125 * (iSlow726 ^ (iSlow726 >> 11)) + 52711) & 16777215;
		int iSlow728 = (121 * (iSlow727 ^ (iSlow727 >> 9)) + 10007) & 16777215;
		int iSlow729 = iSlow2 + 11211;
		int iSlow730 = (127 * ((iSlow729 & 16777215) ^ ((40503 * (iSlow729 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow731 = (125 * (iSlow730 ^ (iSlow730 >> 11)) + 52711) & 16777215;
		int iSlow732 = (121 * (iSlow731 ^ (iSlow731 >> 9)) + 10007) & 16777215;
		int iSlow733 = iSlow2 + 11080;
		int iSlow734 = (127 * ((iSlow733 & 16777215) ^ ((40503 * (iSlow733 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow735 = (125 * (iSlow734 ^ (iSlow734 >> 11)) + 52711) & 16777215;
		int iSlow736 = (121 * (iSlow735 ^ (iSlow735 >> 9)) + 10007) & 16777215;
		float fSlow737 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow736 ^ (iSlow736 >> 12)) + 3571) & 16777215) + float((113 * (iSlow732 ^ (iSlow732 >> 12)) + 3571) & 16777215) + float((113 * (iSlow728 ^ (iSlow728 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow738 = fSlow737 > 0.0f;
		int iSlow739 = iSlow2 + 13176;
		int iSlow740 = (127 * ((iSlow739 & 16777215) ^ ((40503 * (iSlow739 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow741 = (125 * (iSlow740 ^ (iSlow740 >> 11)) + 52711) & 16777215;
		int iSlow742 = (121 * (iSlow741 ^ (iSlow741 >> 9)) + 10007) & 16777215;
		float fSlow743 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow742 ^ (iSlow742 >> 12)) + 3571) & 16777215));
		float fSlow744 = std::sin(fConst59 * fSlow743);
		float fSlow745 = fConst62 * (fSlow743 * std::pow(1e+01f, 0.05f * std::fabs(fSlow737)) / fSlow744);
		float fSlow746 = fConst62 * (fSlow743 / fSlow744);
		float fSlow747 = ((iSlow738) ? fSlow746 : fSlow745);
		float fSlow748 = std::tan(fConst61 * fSlow743);
		float fSlow749 = 1.0f / fSlow748;
		float fSlow750 = fSlow749 * (fSlow749 + fSlow747) + 1.0f;
		float fSlow751 = ((iSlow738) ? fSlow745 : fSlow746);
		float fSlow752 = fSlow749 * (fSlow749 - fSlow751) + 1.0f;
		float fSlow753 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow748));
		float fSlow754 = fSlow749 * (fSlow749 - fSlow747) + 1.0f;
		int iSlow755 = iSlow2 + 9770;
		int iSlow756 = (127 * ((iSlow755 & 16777215) ^ ((40503 * (iSlow755 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow757 = (125 * (iSlow756 ^ (iSlow756 >> 11)) + 52711) & 16777215;
		int iSlow758 = (121 * (iSlow757 ^ (iSlow757 >> 9)) + 10007) & 16777215;
		int iSlow759 = iSlow2 + 9639;
		int iSlow760 = (127 * ((iSlow759 & 16777215) ^ ((40503 * (iSlow759 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow761 = (125 * (iSlow760 ^ (iSlow760 >> 11)) + 52711) & 16777215;
		int iSlow762 = (121 * (iSlow761 ^ (iSlow761 >> 9)) + 10007) & 16777215;
		int iSlow763 = iSlow2 + 9508;
		int iSlow764 = (127 * ((iSlow763 & 16777215) ^ ((40503 * (iSlow763 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow765 = (125 * (iSlow764 ^ (iSlow764 >> 11)) + 52711) & 16777215;
		int iSlow766 = (121 * (iSlow765 ^ (iSlow765 >> 9)) + 10007) & 16777215;
		float fSlow767 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow766 ^ (iSlow766 >> 12)) + 3571) & 16777215) + float((113 * (iSlow762 ^ (iSlow762 >> 12)) + 3571) & 16777215) + float((113 * (iSlow758 ^ (iSlow758 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow768 = fConst12 * fSlow435 * fSlow767;
		float fSlow769 = fSlow439 * fSlow767;
		float fSlow770 = fConst12 * fSlow769;
		float fSlow771 = fConst73 * fSlow769;
		int iSlow772 = iSlow2 + 10163;
		int iSlow773 = (127 * ((iSlow772 & 16777215) ^ ((40503 * (iSlow772 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow774 = (125 * (iSlow773 ^ (iSlow773 >> 11)) + 52711) & 16777215;
		int iSlow775 = (121 * (iSlow774 ^ (iSlow774 >> 9)) + 10007) & 16777215;
		int iSlow776 = iSlow2 + 10032;
		int iSlow777 = (127 * ((iSlow776 & 16777215) ^ ((40503 * (iSlow776 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow778 = (125 * (iSlow777 ^ (iSlow777 >> 11)) + 52711) & 16777215;
		int iSlow779 = (121 * (iSlow778 ^ (iSlow778 >> 9)) + 10007) & 16777215;
		int iSlow780 = iSlow2 + 9901;
		int iSlow781 = (127 * ((iSlow780 & 16777215) ^ ((40503 * (iSlow780 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow782 = (125 * (iSlow781 ^ (iSlow781 >> 11)) + 52711) & 16777215;
		int iSlow783 = (121 * (iSlow782 ^ (iSlow782 >> 9)) + 10007) & 16777215;
		float fSlow784 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow783 ^ (iSlow783 >> 12)) + 3571) & 16777215) + float((113 * (iSlow779 ^ (iSlow779 >> 12)) + 3571) & 16777215) + float((113 * (iSlow775 ^ (iSlow775 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow785 = 0.121492326f / fSlow658;
		int iSlow786 = iSlow2 + 8198;
		int iSlow787 = (127 * ((iSlow786 & 16777215) ^ ((40503 * (iSlow786 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow788 = (125 * (iSlow787 ^ (iSlow787 >> 11)) + 52711) & 16777215;
		int iSlow789 = (121 * (iSlow788 ^ (iSlow788 >> 9)) + 10007) & 16777215;
		int iSlow790 = iSlow2 + 8067;
		int iSlow791 = (127 * ((iSlow790 & 16777215) ^ ((40503 * (iSlow790 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow792 = (125 * (iSlow791 ^ (iSlow791 >> 11)) + 52711) & 16777215;
		int iSlow793 = (121 * (iSlow792 ^ (iSlow792 >> 9)) + 10007) & 16777215;
		int iSlow794 = iSlow2 + 7936;
		int iSlow795 = (127 * ((iSlow794 & 16777215) ^ ((40503 * (iSlow794 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow796 = (125 * (iSlow795 ^ (iSlow795 >> 11)) + 52711) & 16777215;
		int iSlow797 = (121 * (iSlow796 ^ (iSlow796 >> 9)) + 10007) & 16777215;
		float fSlow798 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow797 ^ (iSlow797 >> 12)) + 3571) & 16777215) + float((113 * (iSlow793 ^ (iSlow793 >> 12)) + 3571) & 16777215) + float((113 * (iSlow789 ^ (iSlow789 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow799 = fConst0 * fSlow658;
		int iSlow800 = iSlow2 + 10949;
		int iSlow801 = (127 * ((iSlow800 & 16777215) ^ ((40503 * (iSlow800 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow802 = (125 * (iSlow801 ^ (iSlow801 >> 11)) + 52711) & 16777215;
		int iSlow803 = (121 * (iSlow802 ^ (iSlow802 >> 9)) + 10007) & 16777215;
		int iSlow804 = iSlow2 + 10818;
		int iSlow805 = (127 * ((iSlow804 & 16777215) ^ ((40503 * (iSlow804 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow806 = (125 * (iSlow805 ^ (iSlow805 >> 11)) + 52711) & 16777215;
		int iSlow807 = (121 * (iSlow806 ^ (iSlow806 >> 9)) + 10007) & 16777215;
		int iSlow808 = iSlow2 + 10687;
		int iSlow809 = (127 * ((iSlow808 & 16777215) ^ ((40503 * (iSlow808 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow810 = (125 * (iSlow809 ^ (iSlow809 >> 11)) + 52711) & 16777215;
		int iSlow811 = (121 * (iSlow810 ^ (iSlow810 >> 9)) + 10007) & 16777215;
		float fSlow812 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow811 ^ (iSlow811 >> 12)) + 3571) & 16777215) + float((113 * (iSlow807 ^ (iSlow807 >> 12)) + 3571) & 16777215) + float((113 * (iSlow803 ^ (iSlow803 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow813 = iSlow2 + 10556;
		int iSlow814 = (127 * ((iSlow813 & 16777215) ^ ((40503 * (iSlow813 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow815 = (125 * (iSlow814 ^ (iSlow814 >> 11)) + 52711) & 16777215;
		int iSlow816 = (121 * (iSlow815 ^ (iSlow815 >> 9)) + 10007) & 16777215;
		int iSlow817 = iSlow2 + 10425;
		int iSlow818 = (127 * ((iSlow817 & 16777215) ^ ((40503 * (iSlow817 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow819 = (125 * (iSlow818 ^ (iSlow818 >> 11)) + 52711) & 16777215;
		int iSlow820 = (121 * (iSlow819 ^ (iSlow819 >> 9)) + 10007) & 16777215;
		int iSlow821 = iSlow2 + 10294;
		int iSlow822 = (127 * ((iSlow821 & 16777215) ^ ((40503 * (iSlow821 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow823 = (125 * (iSlow822 ^ (iSlow822 >> 11)) + 52711) & 16777215;
		int iSlow824 = (121 * (iSlow823 ^ (iSlow823 >> 9)) + 10007) & 16777215;
		float fSlow825 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow824 ^ (iSlow824 >> 12)) + 3571) & 16777215) + float((113 * (iSlow820 ^ (iSlow820 >> 12)) + 3571) & 16777215) + float((113 * (iSlow816 ^ (iSlow816 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow826 = 0.63661975f / fSlow825;
		int iSlow827 = iSlow2 + 12128;
		int iSlow828 = (127 * ((iSlow827 & 16777215) ^ ((40503 * (iSlow827 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow829 = (125 * (iSlow828 ^ (iSlow828 >> 11)) + 52711) & 16777215;
		int iSlow830 = (121 * (iSlow829 ^ (iSlow829 >> 9)) + 10007) & 16777215;
		int iSlow831 = iSlow2 + 11997;
		int iSlow832 = (127 * ((iSlow831 & 16777215) ^ ((40503 * (iSlow831 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow833 = (125 * (iSlow832 ^ (iSlow832 >> 11)) + 52711) & 16777215;
		int iSlow834 = (121 * (iSlow833 ^ (iSlow833 >> 9)) + 10007) & 16777215;
		int iSlow835 = iSlow2 + 11866;
		int iSlow836 = (127 * ((iSlow835 & 16777215) ^ ((40503 * (iSlow835 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow837 = (125 * (iSlow836 ^ (iSlow836 >> 11)) + 52711) & 16777215;
		int iSlow838 = (121 * (iSlow837 ^ (iSlow837 >> 9)) + 10007) & 16777215;
		float fSlow839 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow838 ^ (iSlow838 >> 12)) + 3571) & 16777215) + float((113 * (iSlow834 ^ (iSlow834 >> 12)) + 3571) & 16777215) + float((113 * (iSlow830 ^ (iSlow830 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow840 = 4.0f * fSlow839;
		int iSlow841 = iSlow2 + 12521;
		int iSlow842 = (127 * ((iSlow841 & 16777215) ^ ((40503 * (iSlow841 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow843 = (125 * (iSlow842 ^ (iSlow842 >> 11)) + 52711) & 16777215;
		int iSlow844 = (121 * (iSlow843 ^ (iSlow843 >> 9)) + 10007) & 16777215;
		int iSlow845 = iSlow2 + 12390;
		int iSlow846 = (127 * ((iSlow845 & 16777215) ^ ((40503 * (iSlow845 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow847 = (125 * (iSlow846 ^ (iSlow846 >> 11)) + 52711) & 16777215;
		int iSlow848 = (121 * (iSlow847 ^ (iSlow847 >> 9)) + 10007) & 16777215;
		int iSlow849 = iSlow2 + 12259;
		int iSlow850 = (127 * ((iSlow849 & 16777215) ^ ((40503 * (iSlow849 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow851 = (125 * (iSlow850 ^ (iSlow850 >> 11)) + 52711) & 16777215;
		int iSlow852 = (121 * (iSlow851 ^ (iSlow851 >> 9)) + 10007) & 16777215;
		float fSlow853 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow852 ^ (iSlow852 >> 12)) + 3571) & 16777215) + float((113 * (iSlow848 ^ (iSlow848 >> 12)) + 3571) & 16777215) + float((113 * (iSlow844 ^ (iSlow844 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow854 = 4e+01f * fSlow839;
		int iSlow855 = iSlow2 + 13569;
		int iSlow856 = (127 * ((iSlow855 & 16777215) ^ ((40503 * (iSlow855 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow857 = (125 * (iSlow856 ^ (iSlow856 >> 11)) + 52711) & 16777215;
		int iSlow858 = (121 * (iSlow857 ^ (iSlow857 >> 9)) + 10007) & 16777215;
		float fSlow859 = float((113 * (iSlow858 ^ (iSlow858 >> 12)) + 3571) & 16777215);
		float fSlow860 = 8.613662e-07f * fSlow859;
		float fSlow861 = std::sin(fSlow860);
		float fSlow862 = std::cos(fSlow860);
		int iSlow863 = iSlow2 + 13831;
		int iSlow864 = (127 * ((iSlow863 & 16777215) ^ ((40503 * (iSlow863 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow865 = (125 * (iSlow864 ^ (iSlow864 >> 11)) + 52711) & 16777215;
		int iSlow866 = (121 * (iSlow865 ^ (iSlow865 >> 9)) + 10007) & 16777215;
		float fSlow867 = 2.3841858e-08f * float((113 * (iSlow866 ^ (iSlow866 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow868 = fConst87 * fSlow867;
		float fSlow869 = 6.366619e-07f * fSlow859;
		float fSlow870 = std::sin(fSlow869);
		float fSlow871 = std::cos(fSlow869);
		float fSlow872 = 0.013081228f / fSlow867;
		int iSlow873 = iSlow2 + 13700;
		int iSlow874 = (127 * ((iSlow873 & 16777215) ^ ((40503 * (iSlow873 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow875 = (125 * (iSlow874 ^ (iSlow874 >> 11)) + 52711) & 16777215;
		int iSlow876 = (121 * (iSlow875 ^ (iSlow875 >> 9)) + 10007) & 16777215;
		float fSlow877 = 2.3841858e-08f * float((113 * (iSlow876 ^ (iSlow876 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow878 = fConst88 * fSlow877;
		float fSlow879 = 3.7450704e-07f * fSlow859;
		float fSlow880 = std::sin(fSlow879);
		float fSlow881 = std::cos(fSlow879);
		float fSlow882 = 0.18506388f / fSlow877;
		int iSlow883 = iSlow2 + 9377;
		int iSlow884 = (127 * ((iSlow883 & 16777215) ^ ((40503 * (iSlow883 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow885 = (125 * (iSlow884 ^ (iSlow884 >> 11)) + 52711) & 16777215;
		int iSlow886 = (121 * (iSlow885 ^ (iSlow885 >> 9)) + 10007) & 16777215;
		int iSlow887 = iSlow2 + 9246;
		int iSlow888 = (127 * ((iSlow887 & 16777215) ^ ((40503 * (iSlow887 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow889 = (125 * (iSlow888 ^ (iSlow888 >> 11)) + 52711) & 16777215;
		int iSlow890 = (121 * (iSlow889 ^ (iSlow889 >> 9)) + 10007) & 16777215;
		int iSlow891 = iSlow2 + 9115;
		int iSlow892 = (127 * ((iSlow891 & 16777215) ^ ((40503 * (iSlow891 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow893 = (125 * (iSlow892 ^ (iSlow892 >> 11)) + 52711) & 16777215;
		int iSlow894 = (121 * (iSlow893 ^ (iSlow893 >> 9)) + 10007) & 16777215;
		float fSlow895 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow894 ^ (iSlow894 >> 12)) + 3571) & 16777215) + float((113 * (iSlow890 ^ (iSlow890 >> 12)) + 3571) & 16777215) + float((113 * (iSlow886 ^ (iSlow886 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow896 = fSlow749 * (fSlow749 + fSlow751) + 1.0f;
		float fSlow897 = fSlow719 * (fSlow719 + fSlow721) + 1.0f;
		float fSlow898 = 1.0f - fSlow650;
		int iSlow899 = iSlow2 + 23977;
		int iSlow900 = (127 * ((iSlow899 & 16777215) ^ ((40503 * (iSlow899 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow901 = (125 * (iSlow900 ^ (iSlow900 >> 11)) + 52711) & 16777215;
		int iSlow902 = (121 * (iSlow901 ^ (iSlow901 >> 9)) + 10007) & 16777215;
		int iSlow903 = iSlow2 + 23846;
		int iSlow904 = (127 * ((iSlow903 & 16777215) ^ ((40503 * (iSlow903 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow905 = (125 * (iSlow904 ^ (iSlow904 >> 11)) + 52711) & 16777215;
		int iSlow906 = (121 * (iSlow905 ^ (iSlow905 >> 9)) + 10007) & 16777215;
		int iSlow907 = iSlow2 + 23715;
		int iSlow908 = (127 * ((iSlow907 & 16777215) ^ ((40503 * (iSlow907 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow909 = (125 * (iSlow908 ^ (iSlow908 >> 11)) + 52711) & 16777215;
		int iSlow910 = (121 * (iSlow909 ^ (iSlow909 >> 9)) + 10007) & 16777215;
		float fSlow911 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow910 ^ (iSlow910 >> 12)) + 3571) & 16777215) + float((113 * (iSlow906 ^ (iSlow906 >> 12)) + 3571) & 16777215) + float((113 * (iSlow902 ^ (iSlow902 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow912 = iSlow2 + 25156;
		int iSlow913 = (127 * ((iSlow912 & 16777215) ^ ((40503 * (iSlow912 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow914 = (125 * (iSlow913 ^ (iSlow913 >> 11)) + 52711) & 16777215;
		int iSlow915 = (121 * (iSlow914 ^ (iSlow914 >> 9)) + 10007) & 16777215;
		int iSlow916 = iSlow2 + 25025;
		int iSlow917 = (127 * ((iSlow916 & 16777215) ^ ((40503 * (iSlow916 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow918 = (125 * (iSlow917 ^ (iSlow917 >> 11)) + 52711) & 16777215;
		int iSlow919 = (121 * (iSlow918 ^ (iSlow918 >> 9)) + 10007) & 16777215;
		int iSlow920 = iSlow2 + 24894;
		int iSlow921 = (127 * ((iSlow920 & 16777215) ^ ((40503 * (iSlow920 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow922 = (125 * (iSlow921 ^ (iSlow921 >> 11)) + 52711) & 16777215;
		int iSlow923 = (121 * (iSlow922 ^ (iSlow922 >> 9)) + 10007) & 16777215;
		float fSlow924 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow923 ^ (iSlow923 >> 12)) + 3571) & 16777215) + float((113 * (iSlow919 ^ (iSlow919 >> 12)) + 3571) & 16777215) + float((113 * (iSlow915 ^ (iSlow915 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow925 = iSlow2 + 24370;
		int iSlow926 = (127 * ((iSlow925 & 16777215) ^ ((40503 * (iSlow925 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow927 = (125 * (iSlow926 ^ (iSlow926 >> 11)) + 52711) & 16777215;
		int iSlow928 = (121 * (iSlow927 ^ (iSlow927 >> 9)) + 10007) & 16777215;
		int iSlow929 = iSlow2 + 24239;
		int iSlow930 = (127 * ((iSlow929 & 16777215) ^ ((40503 * (iSlow929 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow931 = (125 * (iSlow930 ^ (iSlow930 >> 11)) + 52711) & 16777215;
		int iSlow932 = (121 * (iSlow931 ^ (iSlow931 >> 9)) + 10007) & 16777215;
		int iSlow933 = iSlow2 + 24108;
		int iSlow934 = (127 * ((iSlow933 & 16777215) ^ ((40503 * (iSlow933 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow935 = (125 * (iSlow934 ^ (iSlow934 >> 11)) + 52711) & 16777215;
		int iSlow936 = (121 * (iSlow935 ^ (iSlow935 >> 9)) + 10007) & 16777215;
		float fSlow937 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow936 ^ (iSlow936 >> 12)) + 3571) & 16777215) + float((113 * (iSlow932 ^ (iSlow932 >> 12)) + 3571) & 16777215) + float((113 * (iSlow928 ^ (iSlow928 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow938 = iSlow2 + 25942;
		int iSlow939 = (127 * ((iSlow938 & 16777215) ^ ((40503 * (iSlow938 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow940 = (125 * (iSlow939 ^ (iSlow939 >> 11)) + 52711) & 16777215;
		int iSlow941 = (121 * (iSlow940 ^ (iSlow940 >> 9)) + 10007) & 16777215;
		int iSlow942 = iSlow2 + 25811;
		int iSlow943 = (127 * ((iSlow942 & 16777215) ^ ((40503 * (iSlow942 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow944 = (125 * (iSlow943 ^ (iSlow943 >> 11)) + 52711) & 16777215;
		int iSlow945 = (121 * (iSlow944 ^ (iSlow944 >> 9)) + 10007) & 16777215;
		int iSlow946 = iSlow2 + 25680;
		int iSlow947 = (127 * ((iSlow946 & 16777215) ^ ((40503 * (iSlow946 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow948 = (125 * (iSlow947 ^ (iSlow947 >> 11)) + 52711) & 16777215;
		int iSlow949 = (121 * (iSlow948 ^ (iSlow948 >> 9)) + 10007) & 16777215;
		float fSlow950 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow949 ^ (iSlow949 >> 12)) + 3571) & 16777215) + float((113 * (iSlow945 ^ (iSlow945 >> 12)) + 3571) & 16777215) + float((113 * (iSlow941 ^ (iSlow941 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow951 = 0.001f * fSlow277 * fSlow950;
		int iSlow952 = std::fabs(fSlow951) < 1.1920929e-07f;
		float fSlow953 = ((iSlow952) ? 0.0f : std::exp(-(fConst15 / ((iSlow952) ? 1.0f : fSlow951))));
		float fSlow954 = 0.001f * fSlow281 * fSlow950;
		int iSlow955 = std::fabs(fSlow954) < 1.1920929e-07f;
		float fSlow956 = ((iSlow955) ? 0.0f : std::exp(-(fConst15 / ((iSlow955) ? 1.0f : fSlow954))));
		int iSlow957 = iSlow2 + 22405;
		int iSlow958 = (127 * ((iSlow957 & 16777215) ^ ((40503 * (iSlow957 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow959 = (125 * (iSlow958 ^ (iSlow958 >> 11)) + 52711) & 16777215;
		int iSlow960 = (121 * (iSlow959 ^ (iSlow959 >> 9)) + 10007) & 16777215;
		float fSlow961 = float((5.9604645e-08f * float((113 * (iSlow960 ^ (iSlow960 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow962 = 1.2732395f * fSlow961;
		int iSlow963 = iSlow2 + 21357;
		int iSlow964 = (127 * ((iSlow963 & 16777215) ^ ((40503 * (iSlow963 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow965 = (125 * (iSlow964 ^ (iSlow964 >> 11)) + 52711) & 16777215;
		int iSlow966 = (121 * (iSlow965 ^ (iSlow965 >> 9)) + 10007) & 16777215;
		float fSlow967 = 5.9604645e-08f * float((113 * (iSlow966 ^ (iSlow966 >> 12)) + 3571) & 16777215);
		float fSlow968 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow967 < fSlow319) + ((fSlow967 >= fSlow319) & (fSlow967 < fSlow313))));
		float fSlow969 = fSlow968 + 1.0f;
		float fSlow970 = std::pow(0.029994002f / fSlow969 * fSlow311, 0.8f);
		int iSlow971 = iSlow2 + 16510;
		int iSlow972 = (127 * ((iSlow971 & 16777215) ^ ((40503 * (iSlow971 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow973 = (125 * (iSlow972 ^ (iSlow972 >> 11)) + 52711) & 16777215;
		int iSlow974 = (121 * (iSlow973 ^ (iSlow973 >> 9)) + 10007) & 16777215;
		int iSlow975 = iSlow2 + 16379;
		int iSlow976 = (127 * ((iSlow975 & 16777215) ^ ((40503 * (iSlow975 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow977 = (125 * (iSlow976 ^ (iSlow976 >> 11)) + 52711) & 16777215;
		int iSlow978 = (121 * (iSlow977 ^ (iSlow977 >> 9)) + 10007) & 16777215;
		int iSlow979 = iSlow2 + 16248;
		int iSlow980 = (127 * ((iSlow979 & 16777215) ^ ((40503 * (iSlow979 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow981 = (125 * (iSlow980 ^ (iSlow980 >> 11)) + 52711) & 16777215;
		int iSlow982 = (121 * (iSlow981 ^ (iSlow981 >> 9)) + 10007) & 16777215;
		float fSlow983 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow982 ^ (iSlow982 >> 12)) + 3571) & 16777215) + float((113 * (iSlow978 ^ (iSlow978 >> 12)) + 3571) & 16777215) + float((113 * (iSlow974 ^ (iSlow974 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow984 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow983)) * fSlow970));
		float fSlow985 = 1.0f / fSlow984;
		float fSlow986 = (fSlow985 + 0.5176381f) / fSlow984 + 1.0f;
		float fSlow987 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow984);
		float fSlow988 = (fSlow985 + -0.5176381f) / fSlow984 + 1.0f;
		float fSlow989 = (fSlow985 + 1.4142135f) / fSlow984 + 1.0f;
		float fSlow990 = (fSlow985 + -1.4142135f) / fSlow984 + 1.0f;
		float fSlow991 = (fSlow985 + 1.9318516f) / fSlow984 + 1.0f;
		float fSlow992 = (fSlow985 + -1.9318516f) / fSlow984 + 1.0f;
		int iSlow993 = iSlow2 + 16903;
		int iSlow994 = (127 * ((iSlow993 & 16777215) ^ ((40503 * (iSlow993 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow995 = (125 * (iSlow994 ^ (iSlow994 >> 11)) + 52711) & 16777215;
		int iSlow996 = (121 * (iSlow995 ^ (iSlow995 >> 9)) + 10007) & 16777215;
		int iSlow997 = iSlow2 + 16772;
		int iSlow998 = (127 * ((iSlow997 & 16777215) ^ ((40503 * (iSlow997 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow999 = (125 * (iSlow998 ^ (iSlow998 >> 11)) + 52711) & 16777215;
		int iSlow1000 = (121 * (iSlow999 ^ (iSlow999 >> 9)) + 10007) & 16777215;
		int iSlow1001 = iSlow2 + 16641;
		int iSlow1002 = (127 * ((iSlow1001 & 16777215) ^ ((40503 * (iSlow1001 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1003 = (125 * (iSlow1002 ^ (iSlow1002 >> 11)) + 52711) & 16777215;
		int iSlow1004 = (121 * (iSlow1003 ^ (iSlow1003 >> 9)) + 10007) & 16777215;
		float fSlow1005 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1004 ^ (iSlow1004 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1000 ^ (iSlow1000 >> 12)) + 3571) & 16777215) + float((113 * (iSlow996 ^ (iSlow996 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow968 - fSlow320);
		int iSlow1006 = iSlow2 + 19654;
		int iSlow1007 = (127 * ((iSlow1006 & 16777215) ^ ((40503 * (iSlow1006 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1008 = (125 * (iSlow1007 ^ (iSlow1007 >> 11)) + 52711) & 16777215;
		int iSlow1009 = (121 * (iSlow1008 ^ (iSlow1008 >> 9)) + 10007) & 16777215;
		int iSlow1010 = iSlow2 + 19523;
		int iSlow1011 = (127 * ((iSlow1010 & 16777215) ^ ((40503 * (iSlow1010 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1012 = (125 * (iSlow1011 ^ (iSlow1011 >> 11)) + 52711) & 16777215;
		int iSlow1013 = (121 * (iSlow1012 ^ (iSlow1012 >> 9)) + 10007) & 16777215;
		int iSlow1014 = iSlow2 + 19392;
		int iSlow1015 = (127 * ((iSlow1014 & 16777215) ^ ((40503 * (iSlow1014 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1016 = (125 * (iSlow1015 ^ (iSlow1015 >> 11)) + 52711) & 16777215;
		int iSlow1017 = (121 * (iSlow1016 ^ (iSlow1016 >> 9)) + 10007) & 16777215;
		float fSlow1018 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1017 ^ (iSlow1017 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1013 ^ (iSlow1013 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1009 ^ (iSlow1009 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1019 = fSlow1018 > 0.0f;
		int iSlow1020 = iSlow2 + 21226;
		int iSlow1021 = (127 * ((iSlow1020 & 16777215) ^ ((40503 * (iSlow1020 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1022 = (125 * (iSlow1021 ^ (iSlow1021 >> 11)) + 52711) & 16777215;
		int iSlow1023 = (121 * (iSlow1022 ^ (iSlow1022 >> 9)) + 10007) & 16777215;
		float fSlow1024 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1023 ^ (iSlow1023 >> 12)) + 3571) & 16777215));
		float fSlow1025 = std::sin(fConst59 * fSlow1024);
		float fSlow1026 = fConst60 * (fSlow1024 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1018)) / fSlow1025);
		float fSlow1027 = fConst60 * (fSlow1024 / fSlow1025);
		float fSlow1028 = ((iSlow1019) ? fSlow1027 : fSlow1026);
		float fSlow1029 = std::tan(fConst61 * fSlow1024);
		float fSlow1030 = 1.0f / fSlow1029;
		float fSlow1031 = fSlow1030 * (fSlow1030 + fSlow1028) + 1.0f;
		float fSlow1032 = ((iSlow1019) ? fSlow1026 : fSlow1027);
		float fSlow1033 = fSlow1030 * (fSlow1030 - fSlow1032) + 1.0f;
		float fSlow1034 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1029));
		float fSlow1035 = fSlow1030 * (fSlow1030 - fSlow1028) + 1.0f;
		int iSlow1036 = iSlow2 + 19261;
		int iSlow1037 = (127 * ((iSlow1036 & 16777215) ^ ((40503 * (iSlow1036 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1038 = (125 * (iSlow1037 ^ (iSlow1037 >> 11)) + 52711) & 16777215;
		int iSlow1039 = (121 * (iSlow1038 ^ (iSlow1038 >> 9)) + 10007) & 16777215;
		int iSlow1040 = iSlow2 + 19130;
		int iSlow1041 = (127 * ((iSlow1040 & 16777215) ^ ((40503 * (iSlow1040 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1042 = (125 * (iSlow1041 ^ (iSlow1041 >> 11)) + 52711) & 16777215;
		int iSlow1043 = (121 * (iSlow1042 ^ (iSlow1042 >> 9)) + 10007) & 16777215;
		int iSlow1044 = iSlow2 + 18999;
		int iSlow1045 = (127 * ((iSlow1044 & 16777215) ^ ((40503 * (iSlow1044 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1046 = (125 * (iSlow1045 ^ (iSlow1045 >> 11)) + 52711) & 16777215;
		int iSlow1047 = (121 * (iSlow1046 ^ (iSlow1046 >> 9)) + 10007) & 16777215;
		float fSlow1048 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1047 ^ (iSlow1047 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1043 ^ (iSlow1043 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1039 ^ (iSlow1039 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1049 = fSlow1048 > 0.0f;
		int iSlow1050 = iSlow2 + 21095;
		int iSlow1051 = (127 * ((iSlow1050 & 16777215) ^ ((40503 * (iSlow1050 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1052 = (125 * (iSlow1051 ^ (iSlow1051 >> 11)) + 52711) & 16777215;
		int iSlow1053 = (121 * (iSlow1052 ^ (iSlow1052 >> 9)) + 10007) & 16777215;
		float fSlow1054 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1053 ^ (iSlow1053 >> 12)) + 3571) & 16777215));
		float fSlow1055 = std::sin(fConst59 * fSlow1054);
		float fSlow1056 = fConst62 * (fSlow1054 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1048)) / fSlow1055);
		float fSlow1057 = fConst62 * (fSlow1054 / fSlow1055);
		float fSlow1058 = ((iSlow1049) ? fSlow1057 : fSlow1056);
		float fSlow1059 = std::tan(fConst61 * fSlow1054);
		float fSlow1060 = 1.0f / fSlow1059;
		float fSlow1061 = fSlow1060 * (fSlow1060 + fSlow1058) + 1.0f;
		float fSlow1062 = ((iSlow1049) ? fSlow1056 : fSlow1057);
		float fSlow1063 = fSlow1060 * (fSlow1060 - fSlow1062) + 1.0f;
		float fSlow1064 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1059));
		float fSlow1065 = fSlow1060 * (fSlow1060 - fSlow1058) + 1.0f;
		int iSlow1066 = iSlow2 + 17689;
		int iSlow1067 = (127 * ((iSlow1066 & 16777215) ^ ((40503 * (iSlow1066 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1068 = (125 * (iSlow1067 ^ (iSlow1067 >> 11)) + 52711) & 16777215;
		int iSlow1069 = (121 * (iSlow1068 ^ (iSlow1068 >> 9)) + 10007) & 16777215;
		int iSlow1070 = iSlow2 + 17558;
		int iSlow1071 = (127 * ((iSlow1070 & 16777215) ^ ((40503 * (iSlow1070 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1072 = (125 * (iSlow1071 ^ (iSlow1071 >> 11)) + 52711) & 16777215;
		int iSlow1073 = (121 * (iSlow1072 ^ (iSlow1072 >> 9)) + 10007) & 16777215;
		int iSlow1074 = iSlow2 + 17427;
		int iSlow1075 = (127 * ((iSlow1074 & 16777215) ^ ((40503 * (iSlow1074 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1076 = (125 * (iSlow1075 ^ (iSlow1075 >> 11)) + 52711) & 16777215;
		int iSlow1077 = (121 * (iSlow1076 ^ (iSlow1076 >> 9)) + 10007) & 16777215;
		float fSlow1078 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1077 ^ (iSlow1077 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1073 ^ (iSlow1073 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1069 ^ (iSlow1069 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1079 = fConst12 * fSlow435 * fSlow1078;
		float fSlow1080 = fSlow439 * fSlow1078;
		float fSlow1081 = fConst12 * fSlow1080;
		float fSlow1082 = fConst73 * fSlow1080;
		int iSlow1083 = iSlow2 + 18082;
		int iSlow1084 = (127 * ((iSlow1083 & 16777215) ^ ((40503 * (iSlow1083 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1085 = (125 * (iSlow1084 ^ (iSlow1084 >> 11)) + 52711) & 16777215;
		int iSlow1086 = (121 * (iSlow1085 ^ (iSlow1085 >> 9)) + 10007) & 16777215;
		int iSlow1087 = iSlow2 + 17951;
		int iSlow1088 = (127 * ((iSlow1087 & 16777215) ^ ((40503 * (iSlow1087 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1089 = (125 * (iSlow1088 ^ (iSlow1088 >> 11)) + 52711) & 16777215;
		int iSlow1090 = (121 * (iSlow1089 ^ (iSlow1089 >> 9)) + 10007) & 16777215;
		int iSlow1091 = iSlow2 + 17820;
		int iSlow1092 = (127 * ((iSlow1091 & 16777215) ^ ((40503 * (iSlow1091 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1093 = (125 * (iSlow1092 ^ (iSlow1092 >> 11)) + 52711) & 16777215;
		int iSlow1094 = (121 * (iSlow1093 ^ (iSlow1093 >> 9)) + 10007) & 16777215;
		float fSlow1095 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1094 ^ (iSlow1094 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1090 ^ (iSlow1090 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1086 ^ (iSlow1086 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1096 = 0.121492326f / fSlow969;
		int iSlow1097 = iSlow2 + 16117;
		int iSlow1098 = (127 * ((iSlow1097 & 16777215) ^ ((40503 * (iSlow1097 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1099 = (125 * (iSlow1098 ^ (iSlow1098 >> 11)) + 52711) & 16777215;
		int iSlow1100 = (121 * (iSlow1099 ^ (iSlow1099 >> 9)) + 10007) & 16777215;
		int iSlow1101 = iSlow2 + 15986;
		int iSlow1102 = (127 * ((iSlow1101 & 16777215) ^ ((40503 * (iSlow1101 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1103 = (125 * (iSlow1102 ^ (iSlow1102 >> 11)) + 52711) & 16777215;
		int iSlow1104 = (121 * (iSlow1103 ^ (iSlow1103 >> 9)) + 10007) & 16777215;
		int iSlow1105 = iSlow2 + 15855;
		int iSlow1106 = (127 * ((iSlow1105 & 16777215) ^ ((40503 * (iSlow1105 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1107 = (125 * (iSlow1106 ^ (iSlow1106 >> 11)) + 52711) & 16777215;
		int iSlow1108 = (121 * (iSlow1107 ^ (iSlow1107 >> 9)) + 10007) & 16777215;
		float fSlow1109 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1108 ^ (iSlow1108 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1104 ^ (iSlow1104 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1100 ^ (iSlow1100 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1110 = fConst0 * fSlow969;
		int iSlow1111 = iSlow2 + 18868;
		int iSlow1112 = (127 * ((iSlow1111 & 16777215) ^ ((40503 * (iSlow1111 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1113 = (125 * (iSlow1112 ^ (iSlow1112 >> 11)) + 52711) & 16777215;
		int iSlow1114 = (121 * (iSlow1113 ^ (iSlow1113 >> 9)) + 10007) & 16777215;
		int iSlow1115 = iSlow2 + 18737;
		int iSlow1116 = (127 * ((iSlow1115 & 16777215) ^ ((40503 * (iSlow1115 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1117 = (125 * (iSlow1116 ^ (iSlow1116 >> 11)) + 52711) & 16777215;
		int iSlow1118 = (121 * (iSlow1117 ^ (iSlow1117 >> 9)) + 10007) & 16777215;
		int iSlow1119 = iSlow2 + 18606;
		int iSlow1120 = (127 * ((iSlow1119 & 16777215) ^ ((40503 * (iSlow1119 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1121 = (125 * (iSlow1120 ^ (iSlow1120 >> 11)) + 52711) & 16777215;
		int iSlow1122 = (121 * (iSlow1121 ^ (iSlow1121 >> 9)) + 10007) & 16777215;
		float fSlow1123 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1122 ^ (iSlow1122 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1118 ^ (iSlow1118 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1114 ^ (iSlow1114 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1124 = iSlow2 + 18475;
		int iSlow1125 = (127 * ((iSlow1124 & 16777215) ^ ((40503 * (iSlow1124 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1126 = (125 * (iSlow1125 ^ (iSlow1125 >> 11)) + 52711) & 16777215;
		int iSlow1127 = (121 * (iSlow1126 ^ (iSlow1126 >> 9)) + 10007) & 16777215;
		int iSlow1128 = iSlow2 + 18344;
		int iSlow1129 = (127 * ((iSlow1128 & 16777215) ^ ((40503 * (iSlow1128 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1130 = (125 * (iSlow1129 ^ (iSlow1129 >> 11)) + 52711) & 16777215;
		int iSlow1131 = (121 * (iSlow1130 ^ (iSlow1130 >> 9)) + 10007) & 16777215;
		int iSlow1132 = iSlow2 + 18213;
		int iSlow1133 = (127 * ((iSlow1132 & 16777215) ^ ((40503 * (iSlow1132 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1134 = (125 * (iSlow1133 ^ (iSlow1133 >> 11)) + 52711) & 16777215;
		int iSlow1135 = (121 * (iSlow1134 ^ (iSlow1134 >> 9)) + 10007) & 16777215;
		float fSlow1136 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1135 ^ (iSlow1135 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1131 ^ (iSlow1131 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1127 ^ (iSlow1127 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1137 = 0.63661975f / fSlow1136;
		int iSlow1138 = iSlow2 + 20047;
		int iSlow1139 = (127 * ((iSlow1138 & 16777215) ^ ((40503 * (iSlow1138 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1140 = (125 * (iSlow1139 ^ (iSlow1139 >> 11)) + 52711) & 16777215;
		int iSlow1141 = (121 * (iSlow1140 ^ (iSlow1140 >> 9)) + 10007) & 16777215;
		int iSlow1142 = iSlow2 + 19916;
		int iSlow1143 = (127 * ((iSlow1142 & 16777215) ^ ((40503 * (iSlow1142 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1144 = (125 * (iSlow1143 ^ (iSlow1143 >> 11)) + 52711) & 16777215;
		int iSlow1145 = (121 * (iSlow1144 ^ (iSlow1144 >> 9)) + 10007) & 16777215;
		int iSlow1146 = iSlow2 + 19785;
		int iSlow1147 = (127 * ((iSlow1146 & 16777215) ^ ((40503 * (iSlow1146 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1148 = (125 * (iSlow1147 ^ (iSlow1147 >> 11)) + 52711) & 16777215;
		int iSlow1149 = (121 * (iSlow1148 ^ (iSlow1148 >> 9)) + 10007) & 16777215;
		float fSlow1150 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1149 ^ (iSlow1149 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1145 ^ (iSlow1145 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1141 ^ (iSlow1141 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow1151 = 4.0f * fSlow1150;
		int iSlow1152 = iSlow2 + 20440;
		int iSlow1153 = (127 * ((iSlow1152 & 16777215) ^ ((40503 * (iSlow1152 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1154 = (125 * (iSlow1153 ^ (iSlow1153 >> 11)) + 52711) & 16777215;
		int iSlow1155 = (121 * (iSlow1154 ^ (iSlow1154 >> 9)) + 10007) & 16777215;
		int iSlow1156 = iSlow2 + 20309;
		int iSlow1157 = (127 * ((iSlow1156 & 16777215) ^ ((40503 * (iSlow1156 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1158 = (125 * (iSlow1157 ^ (iSlow1157 >> 11)) + 52711) & 16777215;
		int iSlow1159 = (121 * (iSlow1158 ^ (iSlow1158 >> 9)) + 10007) & 16777215;
		int iSlow1160 = iSlow2 + 20178;
		int iSlow1161 = (127 * ((iSlow1160 & 16777215) ^ ((40503 * (iSlow1160 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1162 = (125 * (iSlow1161 ^ (iSlow1161 >> 11)) + 52711) & 16777215;
		int iSlow1163 = (121 * (iSlow1162 ^ (iSlow1162 >> 9)) + 10007) & 16777215;
		float fSlow1164 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1163 ^ (iSlow1163 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1159 ^ (iSlow1159 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1155 ^ (iSlow1155 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow1165 = 4e+01f * fSlow1150;
		int iSlow1166 = iSlow2 + 21488;
		int iSlow1167 = (127 * ((iSlow1166 & 16777215) ^ ((40503 * (iSlow1166 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1168 = (125 * (iSlow1167 ^ (iSlow1167 >> 11)) + 52711) & 16777215;
		int iSlow1169 = (121 * (iSlow1168 ^ (iSlow1168 >> 9)) + 10007) & 16777215;
		float fSlow1170 = float((113 * (iSlow1169 ^ (iSlow1169 >> 12)) + 3571) & 16777215);
		float fSlow1171 = 8.613662e-07f * fSlow1170;
		float fSlow1172 = std::sin(fSlow1171);
		float fSlow1173 = std::cos(fSlow1171);
		int iSlow1174 = iSlow2 + 21750;
		int iSlow1175 = (127 * ((iSlow1174 & 16777215) ^ ((40503 * (iSlow1174 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1176 = (125 * (iSlow1175 ^ (iSlow1175 >> 11)) + 52711) & 16777215;
		int iSlow1177 = (121 * (iSlow1176 ^ (iSlow1176 >> 9)) + 10007) & 16777215;
		float fSlow1178 = 2.3841858e-08f * float((113 * (iSlow1177 ^ (iSlow1177 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1179 = fConst87 * fSlow1178;
		float fSlow1180 = 6.366619e-07f * fSlow1170;
		float fSlow1181 = std::sin(fSlow1180);
		float fSlow1182 = std::cos(fSlow1180);
		float fSlow1183 = 0.013081228f / fSlow1178;
		int iSlow1184 = iSlow2 + 21619;
		int iSlow1185 = (127 * ((iSlow1184 & 16777215) ^ ((40503 * (iSlow1184 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1186 = (125 * (iSlow1185 ^ (iSlow1185 >> 11)) + 52711) & 16777215;
		int iSlow1187 = (121 * (iSlow1186 ^ (iSlow1186 >> 9)) + 10007) & 16777215;
		float fSlow1188 = 2.3841858e-08f * float((113 * (iSlow1187 ^ (iSlow1187 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1189 = fConst88 * fSlow1188;
		float fSlow1190 = 3.7450704e-07f * fSlow1170;
		float fSlow1191 = std::sin(fSlow1190);
		float fSlow1192 = std::cos(fSlow1190);
		float fSlow1193 = 0.18506388f / fSlow1188;
		int iSlow1194 = iSlow2 + 17296;
		int iSlow1195 = (127 * ((iSlow1194 & 16777215) ^ ((40503 * (iSlow1194 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1196 = (125 * (iSlow1195 ^ (iSlow1195 >> 11)) + 52711) & 16777215;
		int iSlow1197 = (121 * (iSlow1196 ^ (iSlow1196 >> 9)) + 10007) & 16777215;
		int iSlow1198 = iSlow2 + 17165;
		int iSlow1199 = (127 * ((iSlow1198 & 16777215) ^ ((40503 * (iSlow1198 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1200 = (125 * (iSlow1199 ^ (iSlow1199 >> 11)) + 52711) & 16777215;
		int iSlow1201 = (121 * (iSlow1200 ^ (iSlow1200 >> 9)) + 10007) & 16777215;
		int iSlow1202 = iSlow2 + 17034;
		int iSlow1203 = (127 * ((iSlow1202 & 16777215) ^ ((40503 * (iSlow1202 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1204 = (125 * (iSlow1203 ^ (iSlow1203 >> 11)) + 52711) & 16777215;
		int iSlow1205 = (121 * (iSlow1204 ^ (iSlow1204 >> 9)) + 10007) & 16777215;
		float fSlow1206 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1205 ^ (iSlow1205 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1201 ^ (iSlow1201 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1197 ^ (iSlow1197 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1207 = fSlow1060 * (fSlow1060 + fSlow1062) + 1.0f;
		float fSlow1208 = fSlow1030 * (fSlow1030 + fSlow1032) + 1.0f;
		float fSlow1209 = 1.0f - fSlow961;
		int iSlow1210 = iSlow2 + 31896;
		int iSlow1211 = (127 * ((iSlow1210 & 16777215) ^ ((40503 * (iSlow1210 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1212 = (125 * (iSlow1211 ^ (iSlow1211 >> 11)) + 52711) & 16777215;
		int iSlow1213 = (121 * (iSlow1212 ^ (iSlow1212 >> 9)) + 10007) & 16777215;
		int iSlow1214 = iSlow2 + 31765;
		int iSlow1215 = (127 * ((iSlow1214 & 16777215) ^ ((40503 * (iSlow1214 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1216 = (125 * (iSlow1215 ^ (iSlow1215 >> 11)) + 52711) & 16777215;
		int iSlow1217 = (121 * (iSlow1216 ^ (iSlow1216 >> 9)) + 10007) & 16777215;
		int iSlow1218 = iSlow2 + 31634;
		int iSlow1219 = (127 * ((iSlow1218 & 16777215) ^ ((40503 * (iSlow1218 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1220 = (125 * (iSlow1219 ^ (iSlow1219 >> 11)) + 52711) & 16777215;
		int iSlow1221 = (121 * (iSlow1220 ^ (iSlow1220 >> 9)) + 10007) & 16777215;
		float fSlow1222 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1221 ^ (iSlow1221 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1217 ^ (iSlow1217 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1213 ^ (iSlow1213 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1223 = iSlow2 + 33075;
		int iSlow1224 = (127 * ((iSlow1223 & 16777215) ^ ((40503 * (iSlow1223 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1225 = (125 * (iSlow1224 ^ (iSlow1224 >> 11)) + 52711) & 16777215;
		int iSlow1226 = (121 * (iSlow1225 ^ (iSlow1225 >> 9)) + 10007) & 16777215;
		int iSlow1227 = iSlow2 + 32944;
		int iSlow1228 = (127 * ((iSlow1227 & 16777215) ^ ((40503 * (iSlow1227 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1229 = (125 * (iSlow1228 ^ (iSlow1228 >> 11)) + 52711) & 16777215;
		int iSlow1230 = (121 * (iSlow1229 ^ (iSlow1229 >> 9)) + 10007) & 16777215;
		int iSlow1231 = iSlow2 + 32813;
		int iSlow1232 = (127 * ((iSlow1231 & 16777215) ^ ((40503 * (iSlow1231 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1233 = (125 * (iSlow1232 ^ (iSlow1232 >> 11)) + 52711) & 16777215;
		int iSlow1234 = (121 * (iSlow1233 ^ (iSlow1233 >> 9)) + 10007) & 16777215;
		float fSlow1235 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1234 ^ (iSlow1234 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1230 ^ (iSlow1230 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1226 ^ (iSlow1226 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1236 = iSlow2 + 32289;
		int iSlow1237 = (127 * ((iSlow1236 & 16777215) ^ ((40503 * (iSlow1236 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1238 = (125 * (iSlow1237 ^ (iSlow1237 >> 11)) + 52711) & 16777215;
		int iSlow1239 = (121 * (iSlow1238 ^ (iSlow1238 >> 9)) + 10007) & 16777215;
		int iSlow1240 = iSlow2 + 32158;
		int iSlow1241 = (127 * ((iSlow1240 & 16777215) ^ ((40503 * (iSlow1240 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1242 = (125 * (iSlow1241 ^ (iSlow1241 >> 11)) + 52711) & 16777215;
		int iSlow1243 = (121 * (iSlow1242 ^ (iSlow1242 >> 9)) + 10007) & 16777215;
		int iSlow1244 = iSlow2 + 32027;
		int iSlow1245 = (127 * ((iSlow1244 & 16777215) ^ ((40503 * (iSlow1244 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1246 = (125 * (iSlow1245 ^ (iSlow1245 >> 11)) + 52711) & 16777215;
		int iSlow1247 = (121 * (iSlow1246 ^ (iSlow1246 >> 9)) + 10007) & 16777215;
		float fSlow1248 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1247 ^ (iSlow1247 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1243 ^ (iSlow1243 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1239 ^ (iSlow1239 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1249 = iSlow2 + 33861;
		int iSlow1250 = (127 * ((iSlow1249 & 16777215) ^ ((40503 * (iSlow1249 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1251 = (125 * (iSlow1250 ^ (iSlow1250 >> 11)) + 52711) & 16777215;
		int iSlow1252 = (121 * (iSlow1251 ^ (iSlow1251 >> 9)) + 10007) & 16777215;
		int iSlow1253 = iSlow2 + 33730;
		int iSlow1254 = (127 * ((iSlow1253 & 16777215) ^ ((40503 * (iSlow1253 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1255 = (125 * (iSlow1254 ^ (iSlow1254 >> 11)) + 52711) & 16777215;
		int iSlow1256 = (121 * (iSlow1255 ^ (iSlow1255 >> 9)) + 10007) & 16777215;
		int iSlow1257 = iSlow2 + 33599;
		int iSlow1258 = (127 * ((iSlow1257 & 16777215) ^ ((40503 * (iSlow1257 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1259 = (125 * (iSlow1258 ^ (iSlow1258 >> 11)) + 52711) & 16777215;
		int iSlow1260 = (121 * (iSlow1259 ^ (iSlow1259 >> 9)) + 10007) & 16777215;
		float fSlow1261 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow1260 ^ (iSlow1260 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1256 ^ (iSlow1256 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1252 ^ (iSlow1252 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1262 = 0.001f * fSlow277 * fSlow1261;
		int iSlow1263 = std::fabs(fSlow1262) < 1.1920929e-07f;
		float fSlow1264 = ((iSlow1263) ? 0.0f : std::exp(-(fConst15 / ((iSlow1263) ? 1.0f : fSlow1262))));
		float fSlow1265 = 0.001f * fSlow281 * fSlow1261;
		int iSlow1266 = std::fabs(fSlow1265) < 1.1920929e-07f;
		float fSlow1267 = ((iSlow1266) ? 0.0f : std::exp(-(fConst15 / ((iSlow1266) ? 1.0f : fSlow1265))));
		int iSlow1268 = iSlow2 + 30324;
		int iSlow1269 = (127 * ((iSlow1268 & 16777215) ^ ((40503 * (iSlow1268 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1270 = (125 * (iSlow1269 ^ (iSlow1269 >> 11)) + 52711) & 16777215;
		int iSlow1271 = (121 * (iSlow1270 ^ (iSlow1270 >> 9)) + 10007) & 16777215;
		float fSlow1272 = float((5.9604645e-08f * float((113 * (iSlow1271 ^ (iSlow1271 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow1273 = 1.2732395f * fSlow1272;
		int iSlow1274 = iSlow2 + 29276;
		int iSlow1275 = (127 * ((iSlow1274 & 16777215) ^ ((40503 * (iSlow1274 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1276 = (125 * (iSlow1275 ^ (iSlow1275 >> 11)) + 52711) & 16777215;
		int iSlow1277 = (121 * (iSlow1276 ^ (iSlow1276 >> 9)) + 10007) & 16777215;
		float fSlow1278 = 5.9604645e-08f * float((113 * (iSlow1277 ^ (iSlow1277 >> 12)) + 3571) & 16777215);
		float fSlow1279 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow1278 < fSlow319) + ((fSlow1278 >= fSlow319) & (fSlow1278 < fSlow313))));
		float fSlow1280 = fSlow1279 + 1.0f;
		float fSlow1281 = std::pow(0.029994002f / fSlow1280 * fSlow311, 0.8f);
		int iSlow1282 = iSlow2 + 24429;
		int iSlow1283 = (127 * ((iSlow1282 & 16777215) ^ ((40503 * (iSlow1282 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1284 = (125 * (iSlow1283 ^ (iSlow1283 >> 11)) + 52711) & 16777215;
		int iSlow1285 = (121 * (iSlow1284 ^ (iSlow1284 >> 9)) + 10007) & 16777215;
		int iSlow1286 = iSlow2 + 24298;
		int iSlow1287 = (127 * ((iSlow1286 & 16777215) ^ ((40503 * (iSlow1286 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1288 = (125 * (iSlow1287 ^ (iSlow1287 >> 11)) + 52711) & 16777215;
		int iSlow1289 = (121 * (iSlow1288 ^ (iSlow1288 >> 9)) + 10007) & 16777215;
		int iSlow1290 = iSlow2 + 24167;
		int iSlow1291 = (127 * ((iSlow1290 & 16777215) ^ ((40503 * (iSlow1290 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1292 = (125 * (iSlow1291 ^ (iSlow1291 >> 11)) + 52711) & 16777215;
		int iSlow1293 = (121 * (iSlow1292 ^ (iSlow1292 >> 9)) + 10007) & 16777215;
		float fSlow1294 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1293 ^ (iSlow1293 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1289 ^ (iSlow1289 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1285 ^ (iSlow1285 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1295 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow1294)) * fSlow1281));
		float fSlow1296 = 1.0f / fSlow1295;
		float fSlow1297 = (fSlow1296 + 0.5176381f) / fSlow1295 + 1.0f;
		float fSlow1298 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1295);
		float fSlow1299 = (fSlow1296 + -0.5176381f) / fSlow1295 + 1.0f;
		float fSlow1300 = (fSlow1296 + 1.4142135f) / fSlow1295 + 1.0f;
		float fSlow1301 = (fSlow1296 + -1.4142135f) / fSlow1295 + 1.0f;
		float fSlow1302 = (fSlow1296 + 1.9318516f) / fSlow1295 + 1.0f;
		float fSlow1303 = (fSlow1296 + -1.9318516f) / fSlow1295 + 1.0f;
		int iSlow1304 = iSlow2 + 24822;
		int iSlow1305 = (127 * ((iSlow1304 & 16777215) ^ ((40503 * (iSlow1304 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1306 = (125 * (iSlow1305 ^ (iSlow1305 >> 11)) + 52711) & 16777215;
		int iSlow1307 = (121 * (iSlow1306 ^ (iSlow1306 >> 9)) + 10007) & 16777215;
		int iSlow1308 = iSlow2 + 24691;
		int iSlow1309 = (127 * ((iSlow1308 & 16777215) ^ ((40503 * (iSlow1308 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1310 = (125 * (iSlow1309 ^ (iSlow1309 >> 11)) + 52711) & 16777215;
		int iSlow1311 = (121 * (iSlow1310 ^ (iSlow1310 >> 9)) + 10007) & 16777215;
		int iSlow1312 = iSlow2 + 24560;
		int iSlow1313 = (127 * ((iSlow1312 & 16777215) ^ ((40503 * (iSlow1312 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1314 = (125 * (iSlow1313 ^ (iSlow1313 >> 11)) + 52711) & 16777215;
		int iSlow1315 = (121 * (iSlow1314 ^ (iSlow1314 >> 9)) + 10007) & 16777215;
		float fSlow1316 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1315 ^ (iSlow1315 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1311 ^ (iSlow1311 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1307 ^ (iSlow1307 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow1279 - fSlow320);
		int iSlow1317 = iSlow2 + 27573;
		int iSlow1318 = (127 * ((iSlow1317 & 16777215) ^ ((40503 * (iSlow1317 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1319 = (125 * (iSlow1318 ^ (iSlow1318 >> 11)) + 52711) & 16777215;
		int iSlow1320 = (121 * (iSlow1319 ^ (iSlow1319 >> 9)) + 10007) & 16777215;
		int iSlow1321 = iSlow2 + 27442;
		int iSlow1322 = (127 * ((iSlow1321 & 16777215) ^ ((40503 * (iSlow1321 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1323 = (125 * (iSlow1322 ^ (iSlow1322 >> 11)) + 52711) & 16777215;
		int iSlow1324 = (121 * (iSlow1323 ^ (iSlow1323 >> 9)) + 10007) & 16777215;
		int iSlow1325 = iSlow2 + 27311;
		int iSlow1326 = (127 * ((iSlow1325 & 16777215) ^ ((40503 * (iSlow1325 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1327 = (125 * (iSlow1326 ^ (iSlow1326 >> 11)) + 52711) & 16777215;
		int iSlow1328 = (121 * (iSlow1327 ^ (iSlow1327 >> 9)) + 10007) & 16777215;
		float fSlow1329 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1328 ^ (iSlow1328 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1324 ^ (iSlow1324 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1320 ^ (iSlow1320 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1330 = fSlow1329 > 0.0f;
		int iSlow1331 = iSlow2 + 29145;
		int iSlow1332 = (127 * ((iSlow1331 & 16777215) ^ ((40503 * (iSlow1331 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1333 = (125 * (iSlow1332 ^ (iSlow1332 >> 11)) + 52711) & 16777215;
		int iSlow1334 = (121 * (iSlow1333 ^ (iSlow1333 >> 9)) + 10007) & 16777215;
		float fSlow1335 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1334 ^ (iSlow1334 >> 12)) + 3571) & 16777215));
		float fSlow1336 = std::sin(fConst59 * fSlow1335);
		float fSlow1337 = fConst60 * (fSlow1335 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1329)) / fSlow1336);
		float fSlow1338 = fConst60 * (fSlow1335 / fSlow1336);
		float fSlow1339 = ((iSlow1330) ? fSlow1338 : fSlow1337);
		float fSlow1340 = std::tan(fConst61 * fSlow1335);
		float fSlow1341 = 1.0f / fSlow1340;
		float fSlow1342 = fSlow1341 * (fSlow1341 + fSlow1339) + 1.0f;
		float fSlow1343 = ((iSlow1330) ? fSlow1337 : fSlow1338);
		float fSlow1344 = fSlow1341 * (fSlow1341 - fSlow1343) + 1.0f;
		float fSlow1345 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1340));
		float fSlow1346 = fSlow1341 * (fSlow1341 - fSlow1339) + 1.0f;
		int iSlow1347 = iSlow2 + 27180;
		int iSlow1348 = (127 * ((iSlow1347 & 16777215) ^ ((40503 * (iSlow1347 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1349 = (125 * (iSlow1348 ^ (iSlow1348 >> 11)) + 52711) & 16777215;
		int iSlow1350 = (121 * (iSlow1349 ^ (iSlow1349 >> 9)) + 10007) & 16777215;
		int iSlow1351 = iSlow2 + 27049;
		int iSlow1352 = (127 * ((iSlow1351 & 16777215) ^ ((40503 * (iSlow1351 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1353 = (125 * (iSlow1352 ^ (iSlow1352 >> 11)) + 52711) & 16777215;
		int iSlow1354 = (121 * (iSlow1353 ^ (iSlow1353 >> 9)) + 10007) & 16777215;
		int iSlow1355 = iSlow2 + 26918;
		int iSlow1356 = (127 * ((iSlow1355 & 16777215) ^ ((40503 * (iSlow1355 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1357 = (125 * (iSlow1356 ^ (iSlow1356 >> 11)) + 52711) & 16777215;
		int iSlow1358 = (121 * (iSlow1357 ^ (iSlow1357 >> 9)) + 10007) & 16777215;
		float fSlow1359 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1358 ^ (iSlow1358 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1354 ^ (iSlow1354 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1350 ^ (iSlow1350 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1360 = fSlow1359 > 0.0f;
		int iSlow1361 = iSlow2 + 29014;
		int iSlow1362 = (127 * ((iSlow1361 & 16777215) ^ ((40503 * (iSlow1361 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1363 = (125 * (iSlow1362 ^ (iSlow1362 >> 11)) + 52711) & 16777215;
		int iSlow1364 = (121 * (iSlow1363 ^ (iSlow1363 >> 9)) + 10007) & 16777215;
		float fSlow1365 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1364 ^ (iSlow1364 >> 12)) + 3571) & 16777215));
		float fSlow1366 = std::sin(fConst59 * fSlow1365);
		float fSlow1367 = fConst62 * (fSlow1365 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1359)) / fSlow1366);
		float fSlow1368 = fConst62 * (fSlow1365 / fSlow1366);
		float fSlow1369 = ((iSlow1360) ? fSlow1368 : fSlow1367);
		float fSlow1370 = std::tan(fConst61 * fSlow1365);
		float fSlow1371 = 1.0f / fSlow1370;
		float fSlow1372 = fSlow1371 * (fSlow1371 + fSlow1369) + 1.0f;
		float fSlow1373 = ((iSlow1360) ? fSlow1367 : fSlow1368);
		float fSlow1374 = fSlow1371 * (fSlow1371 - fSlow1373) + 1.0f;
		float fSlow1375 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1370));
		float fSlow1376 = fSlow1371 * (fSlow1371 - fSlow1369) + 1.0f;
		int iSlow1377 = iSlow2 + 25608;
		int iSlow1378 = (127 * ((iSlow1377 & 16777215) ^ ((40503 * (iSlow1377 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1379 = (125 * (iSlow1378 ^ (iSlow1378 >> 11)) + 52711) & 16777215;
		int iSlow1380 = (121 * (iSlow1379 ^ (iSlow1379 >> 9)) + 10007) & 16777215;
		int iSlow1381 = iSlow2 + 25477;
		int iSlow1382 = (127 * ((iSlow1381 & 16777215) ^ ((40503 * (iSlow1381 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1383 = (125 * (iSlow1382 ^ (iSlow1382 >> 11)) + 52711) & 16777215;
		int iSlow1384 = (121 * (iSlow1383 ^ (iSlow1383 >> 9)) + 10007) & 16777215;
		int iSlow1385 = iSlow2 + 25346;
		int iSlow1386 = (127 * ((iSlow1385 & 16777215) ^ ((40503 * (iSlow1385 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1387 = (125 * (iSlow1386 ^ (iSlow1386 >> 11)) + 52711) & 16777215;
		int iSlow1388 = (121 * (iSlow1387 ^ (iSlow1387 >> 9)) + 10007) & 16777215;
		float fSlow1389 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1388 ^ (iSlow1388 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1384 ^ (iSlow1384 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1380 ^ (iSlow1380 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1390 = fConst12 * fSlow435 * fSlow1389;
		float fSlow1391 = fSlow439 * fSlow1389;
		float fSlow1392 = fConst12 * fSlow1391;
		float fSlow1393 = fConst73 * fSlow1391;
		int iSlow1394 = iSlow2 + 26001;
		int iSlow1395 = (127 * ((iSlow1394 & 16777215) ^ ((40503 * (iSlow1394 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1396 = (125 * (iSlow1395 ^ (iSlow1395 >> 11)) + 52711) & 16777215;
		int iSlow1397 = (121 * (iSlow1396 ^ (iSlow1396 >> 9)) + 10007) & 16777215;
		int iSlow1398 = iSlow2 + 25870;
		int iSlow1399 = (127 * ((iSlow1398 & 16777215) ^ ((40503 * (iSlow1398 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1400 = (125 * (iSlow1399 ^ (iSlow1399 >> 11)) + 52711) & 16777215;
		int iSlow1401 = (121 * (iSlow1400 ^ (iSlow1400 >> 9)) + 10007) & 16777215;
		int iSlow1402 = iSlow2 + 25739;
		int iSlow1403 = (127 * ((iSlow1402 & 16777215) ^ ((40503 * (iSlow1402 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1404 = (125 * (iSlow1403 ^ (iSlow1403 >> 11)) + 52711) & 16777215;
		int iSlow1405 = (121 * (iSlow1404 ^ (iSlow1404 >> 9)) + 10007) & 16777215;
		float fSlow1406 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1405 ^ (iSlow1405 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1401 ^ (iSlow1401 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1397 ^ (iSlow1397 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1407 = 0.121492326f / fSlow1280;
		int iSlow1408 = iSlow2 + 24036;
		int iSlow1409 = (127 * ((iSlow1408 & 16777215) ^ ((40503 * (iSlow1408 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1410 = (125 * (iSlow1409 ^ (iSlow1409 >> 11)) + 52711) & 16777215;
		int iSlow1411 = (121 * (iSlow1410 ^ (iSlow1410 >> 9)) + 10007) & 16777215;
		int iSlow1412 = iSlow2 + 23905;
		int iSlow1413 = (127 * ((iSlow1412 & 16777215) ^ ((40503 * (iSlow1412 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1414 = (125 * (iSlow1413 ^ (iSlow1413 >> 11)) + 52711) & 16777215;
		int iSlow1415 = (121 * (iSlow1414 ^ (iSlow1414 >> 9)) + 10007) & 16777215;
		int iSlow1416 = iSlow2 + 23774;
		int iSlow1417 = (127 * ((iSlow1416 & 16777215) ^ ((40503 * (iSlow1416 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1418 = (125 * (iSlow1417 ^ (iSlow1417 >> 11)) + 52711) & 16777215;
		int iSlow1419 = (121 * (iSlow1418 ^ (iSlow1418 >> 9)) + 10007) & 16777215;
		float fSlow1420 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1419 ^ (iSlow1419 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1415 ^ (iSlow1415 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1411 ^ (iSlow1411 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1421 = fConst0 * fSlow1280;
		int iSlow1422 = iSlow2 + 26787;
		int iSlow1423 = (127 * ((iSlow1422 & 16777215) ^ ((40503 * (iSlow1422 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1424 = (125 * (iSlow1423 ^ (iSlow1423 >> 11)) + 52711) & 16777215;
		int iSlow1425 = (121 * (iSlow1424 ^ (iSlow1424 >> 9)) + 10007) & 16777215;
		int iSlow1426 = iSlow2 + 26656;
		int iSlow1427 = (127 * ((iSlow1426 & 16777215) ^ ((40503 * (iSlow1426 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1428 = (125 * (iSlow1427 ^ (iSlow1427 >> 11)) + 52711) & 16777215;
		int iSlow1429 = (121 * (iSlow1428 ^ (iSlow1428 >> 9)) + 10007) & 16777215;
		int iSlow1430 = iSlow2 + 26525;
		int iSlow1431 = (127 * ((iSlow1430 & 16777215) ^ ((40503 * (iSlow1430 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1432 = (125 * (iSlow1431 ^ (iSlow1431 >> 11)) + 52711) & 16777215;
		int iSlow1433 = (121 * (iSlow1432 ^ (iSlow1432 >> 9)) + 10007) & 16777215;
		float fSlow1434 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1433 ^ (iSlow1433 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1429 ^ (iSlow1429 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1425 ^ (iSlow1425 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1435 = iSlow2 + 26394;
		int iSlow1436 = (127 * ((iSlow1435 & 16777215) ^ ((40503 * (iSlow1435 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1437 = (125 * (iSlow1436 ^ (iSlow1436 >> 11)) + 52711) & 16777215;
		int iSlow1438 = (121 * (iSlow1437 ^ (iSlow1437 >> 9)) + 10007) & 16777215;
		int iSlow1439 = iSlow2 + 26263;
		int iSlow1440 = (127 * ((iSlow1439 & 16777215) ^ ((40503 * (iSlow1439 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1441 = (125 * (iSlow1440 ^ (iSlow1440 >> 11)) + 52711) & 16777215;
		int iSlow1442 = (121 * (iSlow1441 ^ (iSlow1441 >> 9)) + 10007) & 16777215;
		int iSlow1443 = iSlow2 + 26132;
		int iSlow1444 = (127 * ((iSlow1443 & 16777215) ^ ((40503 * (iSlow1443 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1445 = (125 * (iSlow1444 ^ (iSlow1444 >> 11)) + 52711) & 16777215;
		int iSlow1446 = (121 * (iSlow1445 ^ (iSlow1445 >> 9)) + 10007) & 16777215;
		float fSlow1447 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1446 ^ (iSlow1446 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1442 ^ (iSlow1442 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1438 ^ (iSlow1438 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1448 = 0.63661975f / fSlow1447;
		int iSlow1449 = iSlow2 + 27966;
		int iSlow1450 = (127 * ((iSlow1449 & 16777215) ^ ((40503 * (iSlow1449 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1451 = (125 * (iSlow1450 ^ (iSlow1450 >> 11)) + 52711) & 16777215;
		int iSlow1452 = (121 * (iSlow1451 ^ (iSlow1451 >> 9)) + 10007) & 16777215;
		int iSlow1453 = iSlow2 + 27835;
		int iSlow1454 = (127 * ((iSlow1453 & 16777215) ^ ((40503 * (iSlow1453 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1455 = (125 * (iSlow1454 ^ (iSlow1454 >> 11)) + 52711) & 16777215;
		int iSlow1456 = (121 * (iSlow1455 ^ (iSlow1455 >> 9)) + 10007) & 16777215;
		int iSlow1457 = iSlow2 + 27704;
		int iSlow1458 = (127 * ((iSlow1457 & 16777215) ^ ((40503 * (iSlow1457 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1459 = (125 * (iSlow1458 ^ (iSlow1458 >> 11)) + 52711) & 16777215;
		int iSlow1460 = (121 * (iSlow1459 ^ (iSlow1459 >> 9)) + 10007) & 16777215;
		float fSlow1461 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1460 ^ (iSlow1460 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1456 ^ (iSlow1456 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1452 ^ (iSlow1452 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow1462 = 4.0f * fSlow1461;
		int iSlow1463 = iSlow2 + 28359;
		int iSlow1464 = (127 * ((iSlow1463 & 16777215) ^ ((40503 * (iSlow1463 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1465 = (125 * (iSlow1464 ^ (iSlow1464 >> 11)) + 52711) & 16777215;
		int iSlow1466 = (121 * (iSlow1465 ^ (iSlow1465 >> 9)) + 10007) & 16777215;
		int iSlow1467 = iSlow2 + 28228;
		int iSlow1468 = (127 * ((iSlow1467 & 16777215) ^ ((40503 * (iSlow1467 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1469 = (125 * (iSlow1468 ^ (iSlow1468 >> 11)) + 52711) & 16777215;
		int iSlow1470 = (121 * (iSlow1469 ^ (iSlow1469 >> 9)) + 10007) & 16777215;
		int iSlow1471 = iSlow2 + 28097;
		int iSlow1472 = (127 * ((iSlow1471 & 16777215) ^ ((40503 * (iSlow1471 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1473 = (125 * (iSlow1472 ^ (iSlow1472 >> 11)) + 52711) & 16777215;
		int iSlow1474 = (121 * (iSlow1473 ^ (iSlow1473 >> 9)) + 10007) & 16777215;
		float fSlow1475 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1474 ^ (iSlow1474 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1470 ^ (iSlow1470 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1466 ^ (iSlow1466 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow1476 = 4e+01f * fSlow1461;
		int iSlow1477 = iSlow2 + 29407;
		int iSlow1478 = (127 * ((iSlow1477 & 16777215) ^ ((40503 * (iSlow1477 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1479 = (125 * (iSlow1478 ^ (iSlow1478 >> 11)) + 52711) & 16777215;
		int iSlow1480 = (121 * (iSlow1479 ^ (iSlow1479 >> 9)) + 10007) & 16777215;
		float fSlow1481 = float((113 * (iSlow1480 ^ (iSlow1480 >> 12)) + 3571) & 16777215);
		float fSlow1482 = 8.613662e-07f * fSlow1481;
		float fSlow1483 = std::sin(fSlow1482);
		float fSlow1484 = std::cos(fSlow1482);
		int iSlow1485 = iSlow2 + 29669;
		int iSlow1486 = (127 * ((iSlow1485 & 16777215) ^ ((40503 * (iSlow1485 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1487 = (125 * (iSlow1486 ^ (iSlow1486 >> 11)) + 52711) & 16777215;
		int iSlow1488 = (121 * (iSlow1487 ^ (iSlow1487 >> 9)) + 10007) & 16777215;
		float fSlow1489 = 2.3841858e-08f * float((113 * (iSlow1488 ^ (iSlow1488 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1490 = fConst87 * fSlow1489;
		float fSlow1491 = 6.366619e-07f * fSlow1481;
		float fSlow1492 = std::sin(fSlow1491);
		float fSlow1493 = std::cos(fSlow1491);
		float fSlow1494 = 0.013081228f / fSlow1489;
		int iSlow1495 = iSlow2 + 29538;
		int iSlow1496 = (127 * ((iSlow1495 & 16777215) ^ ((40503 * (iSlow1495 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1497 = (125 * (iSlow1496 ^ (iSlow1496 >> 11)) + 52711) & 16777215;
		int iSlow1498 = (121 * (iSlow1497 ^ (iSlow1497 >> 9)) + 10007) & 16777215;
		float fSlow1499 = 2.3841858e-08f * float((113 * (iSlow1498 ^ (iSlow1498 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1500 = fConst88 * fSlow1499;
		float fSlow1501 = 3.7450704e-07f * fSlow1481;
		float fSlow1502 = std::sin(fSlow1501);
		float fSlow1503 = std::cos(fSlow1501);
		float fSlow1504 = 0.18506388f / fSlow1499;
		int iSlow1505 = iSlow2 + 25215;
		int iSlow1506 = (127 * ((iSlow1505 & 16777215) ^ ((40503 * (iSlow1505 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1507 = (125 * (iSlow1506 ^ (iSlow1506 >> 11)) + 52711) & 16777215;
		int iSlow1508 = (121 * (iSlow1507 ^ (iSlow1507 >> 9)) + 10007) & 16777215;
		int iSlow1509 = iSlow2 + 25084;
		int iSlow1510 = (127 * ((iSlow1509 & 16777215) ^ ((40503 * (iSlow1509 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1511 = (125 * (iSlow1510 ^ (iSlow1510 >> 11)) + 52711) & 16777215;
		int iSlow1512 = (121 * (iSlow1511 ^ (iSlow1511 >> 9)) + 10007) & 16777215;
		int iSlow1513 = iSlow2 + 24953;
		int iSlow1514 = (127 * ((iSlow1513 & 16777215) ^ ((40503 * (iSlow1513 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1515 = (125 * (iSlow1514 ^ (iSlow1514 >> 11)) + 52711) & 16777215;
		int iSlow1516 = (121 * (iSlow1515 ^ (iSlow1515 >> 9)) + 10007) & 16777215;
		float fSlow1517 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1516 ^ (iSlow1516 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1512 ^ (iSlow1512 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1508 ^ (iSlow1508 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1518 = fSlow1371 * (fSlow1371 + fSlow1373) + 1.0f;
		float fSlow1519 = fSlow1341 * (fSlow1341 + fSlow1343) + 1.0f;
		float fSlow1520 = 1.0f - fSlow1272;
		int iSlow1521 = iSlow2 + 39815;
		int iSlow1522 = (127 * ((iSlow1521 & 16777215) ^ ((40503 * (iSlow1521 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1523 = (125 * (iSlow1522 ^ (iSlow1522 >> 11)) + 52711) & 16777215;
		int iSlow1524 = (121 * (iSlow1523 ^ (iSlow1523 >> 9)) + 10007) & 16777215;
		int iSlow1525 = iSlow2 + 39684;
		int iSlow1526 = (127 * ((iSlow1525 & 16777215) ^ ((40503 * (iSlow1525 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1527 = (125 * (iSlow1526 ^ (iSlow1526 >> 11)) + 52711) & 16777215;
		int iSlow1528 = (121 * (iSlow1527 ^ (iSlow1527 >> 9)) + 10007) & 16777215;
		int iSlow1529 = iSlow2 + 39553;
		int iSlow1530 = (127 * ((iSlow1529 & 16777215) ^ ((40503 * (iSlow1529 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1531 = (125 * (iSlow1530 ^ (iSlow1530 >> 11)) + 52711) & 16777215;
		int iSlow1532 = (121 * (iSlow1531 ^ (iSlow1531 >> 9)) + 10007) & 16777215;
		float fSlow1533 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1532 ^ (iSlow1532 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1528 ^ (iSlow1528 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1524 ^ (iSlow1524 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1534 = iSlow2 + 40994;
		int iSlow1535 = (127 * ((iSlow1534 & 16777215) ^ ((40503 * (iSlow1534 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1536 = (125 * (iSlow1535 ^ (iSlow1535 >> 11)) + 52711) & 16777215;
		int iSlow1537 = (121 * (iSlow1536 ^ (iSlow1536 >> 9)) + 10007) & 16777215;
		int iSlow1538 = iSlow2 + 40863;
		int iSlow1539 = (127 * ((iSlow1538 & 16777215) ^ ((40503 * (iSlow1538 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1540 = (125 * (iSlow1539 ^ (iSlow1539 >> 11)) + 52711) & 16777215;
		int iSlow1541 = (121 * (iSlow1540 ^ (iSlow1540 >> 9)) + 10007) & 16777215;
		int iSlow1542 = iSlow2 + 40732;
		int iSlow1543 = (127 * ((iSlow1542 & 16777215) ^ ((40503 * (iSlow1542 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1544 = (125 * (iSlow1543 ^ (iSlow1543 >> 11)) + 52711) & 16777215;
		int iSlow1545 = (121 * (iSlow1544 ^ (iSlow1544 >> 9)) + 10007) & 16777215;
		float fSlow1546 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1545 ^ (iSlow1545 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1541 ^ (iSlow1541 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1537 ^ (iSlow1537 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1547 = iSlow2 + 40208;
		int iSlow1548 = (127 * ((iSlow1547 & 16777215) ^ ((40503 * (iSlow1547 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1549 = (125 * (iSlow1548 ^ (iSlow1548 >> 11)) + 52711) & 16777215;
		int iSlow1550 = (121 * (iSlow1549 ^ (iSlow1549 >> 9)) + 10007) & 16777215;
		int iSlow1551 = iSlow2 + 40077;
		int iSlow1552 = (127 * ((iSlow1551 & 16777215) ^ ((40503 * (iSlow1551 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1553 = (125 * (iSlow1552 ^ (iSlow1552 >> 11)) + 52711) & 16777215;
		int iSlow1554 = (121 * (iSlow1553 ^ (iSlow1553 >> 9)) + 10007) & 16777215;
		int iSlow1555 = iSlow2 + 39946;
		int iSlow1556 = (127 * ((iSlow1555 & 16777215) ^ ((40503 * (iSlow1555 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1557 = (125 * (iSlow1556 ^ (iSlow1556 >> 11)) + 52711) & 16777215;
		int iSlow1558 = (121 * (iSlow1557 ^ (iSlow1557 >> 9)) + 10007) & 16777215;
		float fSlow1559 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1558 ^ (iSlow1558 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1554 ^ (iSlow1554 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1550 ^ (iSlow1550 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1560 = iSlow2 + 41780;
		int iSlow1561 = (127 * ((iSlow1560 & 16777215) ^ ((40503 * (iSlow1560 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1562 = (125 * (iSlow1561 ^ (iSlow1561 >> 11)) + 52711) & 16777215;
		int iSlow1563 = (121 * (iSlow1562 ^ (iSlow1562 >> 9)) + 10007) & 16777215;
		int iSlow1564 = iSlow2 + 41649;
		int iSlow1565 = (127 * ((iSlow1564 & 16777215) ^ ((40503 * (iSlow1564 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1566 = (125 * (iSlow1565 ^ (iSlow1565 >> 11)) + 52711) & 16777215;
		int iSlow1567 = (121 * (iSlow1566 ^ (iSlow1566 >> 9)) + 10007) & 16777215;
		int iSlow1568 = iSlow2 + 41518;
		int iSlow1569 = (127 * ((iSlow1568 & 16777215) ^ ((40503 * (iSlow1568 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1570 = (125 * (iSlow1569 ^ (iSlow1569 >> 11)) + 52711) & 16777215;
		int iSlow1571 = (121 * (iSlow1570 ^ (iSlow1570 >> 9)) + 10007) & 16777215;
		float fSlow1572 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow1571 ^ (iSlow1571 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1567 ^ (iSlow1567 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1563 ^ (iSlow1563 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1573 = 0.001f * fSlow277 * fSlow1572;
		int iSlow1574 = std::fabs(fSlow1573) < 1.1920929e-07f;
		float fSlow1575 = ((iSlow1574) ? 0.0f : std::exp(-(fConst15 / ((iSlow1574) ? 1.0f : fSlow1573))));
		float fSlow1576 = 0.001f * fSlow281 * fSlow1572;
		int iSlow1577 = std::fabs(fSlow1576) < 1.1920929e-07f;
		float fSlow1578 = ((iSlow1577) ? 0.0f : std::exp(-(fConst15 / ((iSlow1577) ? 1.0f : fSlow1576))));
		int iSlow1579 = iSlow2 + 38243;
		int iSlow1580 = (127 * ((iSlow1579 & 16777215) ^ ((40503 * (iSlow1579 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1581 = (125 * (iSlow1580 ^ (iSlow1580 >> 11)) + 52711) & 16777215;
		int iSlow1582 = (121 * (iSlow1581 ^ (iSlow1581 >> 9)) + 10007) & 16777215;
		float fSlow1583 = float((5.9604645e-08f * float((113 * (iSlow1582 ^ (iSlow1582 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow1584 = 1.2732395f * fSlow1583;
		int iSlow1585 = iSlow2 + 37195;
		int iSlow1586 = (127 * ((iSlow1585 & 16777215) ^ ((40503 * (iSlow1585 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1587 = (125 * (iSlow1586 ^ (iSlow1586 >> 11)) + 52711) & 16777215;
		int iSlow1588 = (121 * (iSlow1587 ^ (iSlow1587 >> 9)) + 10007) & 16777215;
		float fSlow1589 = 5.9604645e-08f * float((113 * (iSlow1588 ^ (iSlow1588 >> 12)) + 3571) & 16777215);
		float fSlow1590 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow1589 < fSlow319) + ((fSlow1589 >= fSlow319) & (fSlow1589 < fSlow313))));
		float fSlow1591 = fSlow1590 + 1.0f;
		float fSlow1592 = std::pow(0.029994002f / fSlow1591 * fSlow311, 0.8f);
		int iSlow1593 = iSlow2 + 32348;
		int iSlow1594 = (127 * ((iSlow1593 & 16777215) ^ ((40503 * (iSlow1593 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1595 = (125 * (iSlow1594 ^ (iSlow1594 >> 11)) + 52711) & 16777215;
		int iSlow1596 = (121 * (iSlow1595 ^ (iSlow1595 >> 9)) + 10007) & 16777215;
		int iSlow1597 = iSlow2 + 32217;
		int iSlow1598 = (127 * ((iSlow1597 & 16777215) ^ ((40503 * (iSlow1597 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1599 = (125 * (iSlow1598 ^ (iSlow1598 >> 11)) + 52711) & 16777215;
		int iSlow1600 = (121 * (iSlow1599 ^ (iSlow1599 >> 9)) + 10007) & 16777215;
		int iSlow1601 = iSlow2 + 32086;
		int iSlow1602 = (127 * ((iSlow1601 & 16777215) ^ ((40503 * (iSlow1601 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1603 = (125 * (iSlow1602 ^ (iSlow1602 >> 11)) + 52711) & 16777215;
		int iSlow1604 = (121 * (iSlow1603 ^ (iSlow1603 >> 9)) + 10007) & 16777215;
		float fSlow1605 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1604 ^ (iSlow1604 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1600 ^ (iSlow1600 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1596 ^ (iSlow1596 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1606 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow1605)) * fSlow1592));
		float fSlow1607 = 1.0f / fSlow1606;
		float fSlow1608 = (fSlow1607 + 0.5176381f) / fSlow1606 + 1.0f;
		float fSlow1609 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1606);
		float fSlow1610 = (fSlow1607 + -0.5176381f) / fSlow1606 + 1.0f;
		float fSlow1611 = (fSlow1607 + 1.4142135f) / fSlow1606 + 1.0f;
		float fSlow1612 = (fSlow1607 + -1.4142135f) / fSlow1606 + 1.0f;
		float fSlow1613 = (fSlow1607 + 1.9318516f) / fSlow1606 + 1.0f;
		float fSlow1614 = (fSlow1607 + -1.9318516f) / fSlow1606 + 1.0f;
		int iSlow1615 = iSlow2 + 32741;
		int iSlow1616 = (127 * ((iSlow1615 & 16777215) ^ ((40503 * (iSlow1615 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1617 = (125 * (iSlow1616 ^ (iSlow1616 >> 11)) + 52711) & 16777215;
		int iSlow1618 = (121 * (iSlow1617 ^ (iSlow1617 >> 9)) + 10007) & 16777215;
		int iSlow1619 = iSlow2 + 32610;
		int iSlow1620 = (127 * ((iSlow1619 & 16777215) ^ ((40503 * (iSlow1619 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1621 = (125 * (iSlow1620 ^ (iSlow1620 >> 11)) + 52711) & 16777215;
		int iSlow1622 = (121 * (iSlow1621 ^ (iSlow1621 >> 9)) + 10007) & 16777215;
		int iSlow1623 = iSlow2 + 32479;
		int iSlow1624 = (127 * ((iSlow1623 & 16777215) ^ ((40503 * (iSlow1623 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1625 = (125 * (iSlow1624 ^ (iSlow1624 >> 11)) + 52711) & 16777215;
		int iSlow1626 = (121 * (iSlow1625 ^ (iSlow1625 >> 9)) + 10007) & 16777215;
		float fSlow1627 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1626 ^ (iSlow1626 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1622 ^ (iSlow1622 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1618 ^ (iSlow1618 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow1590 - fSlow320);
		int iSlow1628 = iSlow2 + 35492;
		int iSlow1629 = (127 * ((iSlow1628 & 16777215) ^ ((40503 * (iSlow1628 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1630 = (125 * (iSlow1629 ^ (iSlow1629 >> 11)) + 52711) & 16777215;
		int iSlow1631 = (121 * (iSlow1630 ^ (iSlow1630 >> 9)) + 10007) & 16777215;
		int iSlow1632 = iSlow2 + 35361;
		int iSlow1633 = (127 * ((iSlow1632 & 16777215) ^ ((40503 * (iSlow1632 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1634 = (125 * (iSlow1633 ^ (iSlow1633 >> 11)) + 52711) & 16777215;
		int iSlow1635 = (121 * (iSlow1634 ^ (iSlow1634 >> 9)) + 10007) & 16777215;
		int iSlow1636 = iSlow2 + 35230;
		int iSlow1637 = (127 * ((iSlow1636 & 16777215) ^ ((40503 * (iSlow1636 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1638 = (125 * (iSlow1637 ^ (iSlow1637 >> 11)) + 52711) & 16777215;
		int iSlow1639 = (121 * (iSlow1638 ^ (iSlow1638 >> 9)) + 10007) & 16777215;
		float fSlow1640 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1639 ^ (iSlow1639 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1635 ^ (iSlow1635 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1631 ^ (iSlow1631 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1641 = fSlow1640 > 0.0f;
		int iSlow1642 = iSlow2 + 37064;
		int iSlow1643 = (127 * ((iSlow1642 & 16777215) ^ ((40503 * (iSlow1642 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1644 = (125 * (iSlow1643 ^ (iSlow1643 >> 11)) + 52711) & 16777215;
		int iSlow1645 = (121 * (iSlow1644 ^ (iSlow1644 >> 9)) + 10007) & 16777215;
		float fSlow1646 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1645 ^ (iSlow1645 >> 12)) + 3571) & 16777215));
		float fSlow1647 = std::sin(fConst59 * fSlow1646);
		float fSlow1648 = fConst60 * (fSlow1646 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1640)) / fSlow1647);
		float fSlow1649 = fConst60 * (fSlow1646 / fSlow1647);
		float fSlow1650 = ((iSlow1641) ? fSlow1649 : fSlow1648);
		float fSlow1651 = std::tan(fConst61 * fSlow1646);
		float fSlow1652 = 1.0f / fSlow1651;
		float fSlow1653 = fSlow1652 * (fSlow1652 + fSlow1650) + 1.0f;
		float fSlow1654 = ((iSlow1641) ? fSlow1648 : fSlow1649);
		float fSlow1655 = fSlow1652 * (fSlow1652 - fSlow1654) + 1.0f;
		float fSlow1656 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1651));
		float fSlow1657 = fSlow1652 * (fSlow1652 - fSlow1650) + 1.0f;
		int iSlow1658 = iSlow2 + 35099;
		int iSlow1659 = (127 * ((iSlow1658 & 16777215) ^ ((40503 * (iSlow1658 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1660 = (125 * (iSlow1659 ^ (iSlow1659 >> 11)) + 52711) & 16777215;
		int iSlow1661 = (121 * (iSlow1660 ^ (iSlow1660 >> 9)) + 10007) & 16777215;
		int iSlow1662 = iSlow2 + 34968;
		int iSlow1663 = (127 * ((iSlow1662 & 16777215) ^ ((40503 * (iSlow1662 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1664 = (125 * (iSlow1663 ^ (iSlow1663 >> 11)) + 52711) & 16777215;
		int iSlow1665 = (121 * (iSlow1664 ^ (iSlow1664 >> 9)) + 10007) & 16777215;
		int iSlow1666 = iSlow2 + 34837;
		int iSlow1667 = (127 * ((iSlow1666 & 16777215) ^ ((40503 * (iSlow1666 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1668 = (125 * (iSlow1667 ^ (iSlow1667 >> 11)) + 52711) & 16777215;
		int iSlow1669 = (121 * (iSlow1668 ^ (iSlow1668 >> 9)) + 10007) & 16777215;
		float fSlow1670 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1669 ^ (iSlow1669 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1665 ^ (iSlow1665 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1661 ^ (iSlow1661 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1671 = fSlow1670 > 0.0f;
		int iSlow1672 = iSlow2 + 36933;
		int iSlow1673 = (127 * ((iSlow1672 & 16777215) ^ ((40503 * (iSlow1672 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1674 = (125 * (iSlow1673 ^ (iSlow1673 >> 11)) + 52711) & 16777215;
		int iSlow1675 = (121 * (iSlow1674 ^ (iSlow1674 >> 9)) + 10007) & 16777215;
		float fSlow1676 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1675 ^ (iSlow1675 >> 12)) + 3571) & 16777215));
		float fSlow1677 = std::sin(fConst59 * fSlow1676);
		float fSlow1678 = fConst62 * (fSlow1676 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1670)) / fSlow1677);
		float fSlow1679 = fConst62 * (fSlow1676 / fSlow1677);
		float fSlow1680 = ((iSlow1671) ? fSlow1679 : fSlow1678);
		float fSlow1681 = std::tan(fConst61 * fSlow1676);
		float fSlow1682 = 1.0f / fSlow1681;
		float fSlow1683 = fSlow1682 * (fSlow1682 + fSlow1680) + 1.0f;
		float fSlow1684 = ((iSlow1671) ? fSlow1678 : fSlow1679);
		float fSlow1685 = fSlow1682 * (fSlow1682 - fSlow1684) + 1.0f;
		float fSlow1686 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1681));
		float fSlow1687 = fSlow1682 * (fSlow1682 - fSlow1680) + 1.0f;
		int iSlow1688 = iSlow2 + 33527;
		int iSlow1689 = (127 * ((iSlow1688 & 16777215) ^ ((40503 * (iSlow1688 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1690 = (125 * (iSlow1689 ^ (iSlow1689 >> 11)) + 52711) & 16777215;
		int iSlow1691 = (121 * (iSlow1690 ^ (iSlow1690 >> 9)) + 10007) & 16777215;
		int iSlow1692 = iSlow2 + 33396;
		int iSlow1693 = (127 * ((iSlow1692 & 16777215) ^ ((40503 * (iSlow1692 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1694 = (125 * (iSlow1693 ^ (iSlow1693 >> 11)) + 52711) & 16777215;
		int iSlow1695 = (121 * (iSlow1694 ^ (iSlow1694 >> 9)) + 10007) & 16777215;
		int iSlow1696 = iSlow2 + 33265;
		int iSlow1697 = (127 * ((iSlow1696 & 16777215) ^ ((40503 * (iSlow1696 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1698 = (125 * (iSlow1697 ^ (iSlow1697 >> 11)) + 52711) & 16777215;
		int iSlow1699 = (121 * (iSlow1698 ^ (iSlow1698 >> 9)) + 10007) & 16777215;
		float fSlow1700 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1699 ^ (iSlow1699 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1695 ^ (iSlow1695 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1691 ^ (iSlow1691 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1701 = fConst12 * fSlow435 * fSlow1700;
		float fSlow1702 = fSlow439 * fSlow1700;
		float fSlow1703 = fConst12 * fSlow1702;
		float fSlow1704 = fConst73 * fSlow1702;
		int iSlow1705 = iSlow2 + 33920;
		int iSlow1706 = (127 * ((iSlow1705 & 16777215) ^ ((40503 * (iSlow1705 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1707 = (125 * (iSlow1706 ^ (iSlow1706 >> 11)) + 52711) & 16777215;
		int iSlow1708 = (121 * (iSlow1707 ^ (iSlow1707 >> 9)) + 10007) & 16777215;
		int iSlow1709 = iSlow2 + 33789;
		int iSlow1710 = (127 * ((iSlow1709 & 16777215) ^ ((40503 * (iSlow1709 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1711 = (125 * (iSlow1710 ^ (iSlow1710 >> 11)) + 52711) & 16777215;
		int iSlow1712 = (121 * (iSlow1711 ^ (iSlow1711 >> 9)) + 10007) & 16777215;
		int iSlow1713 = iSlow2 + 33658;
		int iSlow1714 = (127 * ((iSlow1713 & 16777215) ^ ((40503 * (iSlow1713 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1715 = (125 * (iSlow1714 ^ (iSlow1714 >> 11)) + 52711) & 16777215;
		int iSlow1716 = (121 * (iSlow1715 ^ (iSlow1715 >> 9)) + 10007) & 16777215;
		float fSlow1717 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1716 ^ (iSlow1716 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1712 ^ (iSlow1712 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1708 ^ (iSlow1708 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1718 = 0.121492326f / fSlow1591;
		int iSlow1719 = iSlow2 + 31955;
		int iSlow1720 = (127 * ((iSlow1719 & 16777215) ^ ((40503 * (iSlow1719 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1721 = (125 * (iSlow1720 ^ (iSlow1720 >> 11)) + 52711) & 16777215;
		int iSlow1722 = (121 * (iSlow1721 ^ (iSlow1721 >> 9)) + 10007) & 16777215;
		int iSlow1723 = iSlow2 + 31824;
		int iSlow1724 = (127 * ((iSlow1723 & 16777215) ^ ((40503 * (iSlow1723 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1725 = (125 * (iSlow1724 ^ (iSlow1724 >> 11)) + 52711) & 16777215;
		int iSlow1726 = (121 * (iSlow1725 ^ (iSlow1725 >> 9)) + 10007) & 16777215;
		int iSlow1727 = iSlow2 + 31693;
		int iSlow1728 = (127 * ((iSlow1727 & 16777215) ^ ((40503 * (iSlow1727 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1729 = (125 * (iSlow1728 ^ (iSlow1728 >> 11)) + 52711) & 16777215;
		int iSlow1730 = (121 * (iSlow1729 ^ (iSlow1729 >> 9)) + 10007) & 16777215;
		float fSlow1731 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1730 ^ (iSlow1730 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1726 ^ (iSlow1726 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1722 ^ (iSlow1722 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1732 = fConst0 * fSlow1591;
		int iSlow1733 = iSlow2 + 34706;
		int iSlow1734 = (127 * ((iSlow1733 & 16777215) ^ ((40503 * (iSlow1733 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1735 = (125 * (iSlow1734 ^ (iSlow1734 >> 11)) + 52711) & 16777215;
		int iSlow1736 = (121 * (iSlow1735 ^ (iSlow1735 >> 9)) + 10007) & 16777215;
		int iSlow1737 = iSlow2 + 34575;
		int iSlow1738 = (127 * ((iSlow1737 & 16777215) ^ ((40503 * (iSlow1737 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1739 = (125 * (iSlow1738 ^ (iSlow1738 >> 11)) + 52711) & 16777215;
		int iSlow1740 = (121 * (iSlow1739 ^ (iSlow1739 >> 9)) + 10007) & 16777215;
		int iSlow1741 = iSlow2 + 34444;
		int iSlow1742 = (127 * ((iSlow1741 & 16777215) ^ ((40503 * (iSlow1741 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1743 = (125 * (iSlow1742 ^ (iSlow1742 >> 11)) + 52711) & 16777215;
		int iSlow1744 = (121 * (iSlow1743 ^ (iSlow1743 >> 9)) + 10007) & 16777215;
		float fSlow1745 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1744 ^ (iSlow1744 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1740 ^ (iSlow1740 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1736 ^ (iSlow1736 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1746 = iSlow2 + 34313;
		int iSlow1747 = (127 * ((iSlow1746 & 16777215) ^ ((40503 * (iSlow1746 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1748 = (125 * (iSlow1747 ^ (iSlow1747 >> 11)) + 52711) & 16777215;
		int iSlow1749 = (121 * (iSlow1748 ^ (iSlow1748 >> 9)) + 10007) & 16777215;
		int iSlow1750 = iSlow2 + 34182;
		int iSlow1751 = (127 * ((iSlow1750 & 16777215) ^ ((40503 * (iSlow1750 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1752 = (125 * (iSlow1751 ^ (iSlow1751 >> 11)) + 52711) & 16777215;
		int iSlow1753 = (121 * (iSlow1752 ^ (iSlow1752 >> 9)) + 10007) & 16777215;
		int iSlow1754 = iSlow2 + 34051;
		int iSlow1755 = (127 * ((iSlow1754 & 16777215) ^ ((40503 * (iSlow1754 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1756 = (125 * (iSlow1755 ^ (iSlow1755 >> 11)) + 52711) & 16777215;
		int iSlow1757 = (121 * (iSlow1756 ^ (iSlow1756 >> 9)) + 10007) & 16777215;
		float fSlow1758 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1757 ^ (iSlow1757 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1753 ^ (iSlow1753 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1749 ^ (iSlow1749 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1759 = 0.63661975f / fSlow1758;
		int iSlow1760 = iSlow2 + 35885;
		int iSlow1761 = (127 * ((iSlow1760 & 16777215) ^ ((40503 * (iSlow1760 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1762 = (125 * (iSlow1761 ^ (iSlow1761 >> 11)) + 52711) & 16777215;
		int iSlow1763 = (121 * (iSlow1762 ^ (iSlow1762 >> 9)) + 10007) & 16777215;
		int iSlow1764 = iSlow2 + 35754;
		int iSlow1765 = (127 * ((iSlow1764 & 16777215) ^ ((40503 * (iSlow1764 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1766 = (125 * (iSlow1765 ^ (iSlow1765 >> 11)) + 52711) & 16777215;
		int iSlow1767 = (121 * (iSlow1766 ^ (iSlow1766 >> 9)) + 10007) & 16777215;
		int iSlow1768 = iSlow2 + 35623;
		int iSlow1769 = (127 * ((iSlow1768 & 16777215) ^ ((40503 * (iSlow1768 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1770 = (125 * (iSlow1769 ^ (iSlow1769 >> 11)) + 52711) & 16777215;
		int iSlow1771 = (121 * (iSlow1770 ^ (iSlow1770 >> 9)) + 10007) & 16777215;
		float fSlow1772 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1771 ^ (iSlow1771 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1767 ^ (iSlow1767 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1763 ^ (iSlow1763 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow1773 = 4.0f * fSlow1772;
		int iSlow1774 = iSlow2 + 36278;
		int iSlow1775 = (127 * ((iSlow1774 & 16777215) ^ ((40503 * (iSlow1774 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1776 = (125 * (iSlow1775 ^ (iSlow1775 >> 11)) + 52711) & 16777215;
		int iSlow1777 = (121 * (iSlow1776 ^ (iSlow1776 >> 9)) + 10007) & 16777215;
		int iSlow1778 = iSlow2 + 36147;
		int iSlow1779 = (127 * ((iSlow1778 & 16777215) ^ ((40503 * (iSlow1778 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1780 = (125 * (iSlow1779 ^ (iSlow1779 >> 11)) + 52711) & 16777215;
		int iSlow1781 = (121 * (iSlow1780 ^ (iSlow1780 >> 9)) + 10007) & 16777215;
		int iSlow1782 = iSlow2 + 36016;
		int iSlow1783 = (127 * ((iSlow1782 & 16777215) ^ ((40503 * (iSlow1782 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1784 = (125 * (iSlow1783 ^ (iSlow1783 >> 11)) + 52711) & 16777215;
		int iSlow1785 = (121 * (iSlow1784 ^ (iSlow1784 >> 9)) + 10007) & 16777215;
		float fSlow1786 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1785 ^ (iSlow1785 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1781 ^ (iSlow1781 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1777 ^ (iSlow1777 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow1787 = 4e+01f * fSlow1772;
		int iSlow1788 = iSlow2 + 37326;
		int iSlow1789 = (127 * ((iSlow1788 & 16777215) ^ ((40503 * (iSlow1788 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1790 = (125 * (iSlow1789 ^ (iSlow1789 >> 11)) + 52711) & 16777215;
		int iSlow1791 = (121 * (iSlow1790 ^ (iSlow1790 >> 9)) + 10007) & 16777215;
		float fSlow1792 = float((113 * (iSlow1791 ^ (iSlow1791 >> 12)) + 3571) & 16777215);
		float fSlow1793 = 8.613662e-07f * fSlow1792;
		float fSlow1794 = std::sin(fSlow1793);
		float fSlow1795 = std::cos(fSlow1793);
		int iSlow1796 = iSlow2 + 37588;
		int iSlow1797 = (127 * ((iSlow1796 & 16777215) ^ ((40503 * (iSlow1796 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1798 = (125 * (iSlow1797 ^ (iSlow1797 >> 11)) + 52711) & 16777215;
		int iSlow1799 = (121 * (iSlow1798 ^ (iSlow1798 >> 9)) + 10007) & 16777215;
		float fSlow1800 = 2.3841858e-08f * float((113 * (iSlow1799 ^ (iSlow1799 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1801 = fConst87 * fSlow1800;
		float fSlow1802 = 6.366619e-07f * fSlow1792;
		float fSlow1803 = std::sin(fSlow1802);
		float fSlow1804 = std::cos(fSlow1802);
		float fSlow1805 = 0.013081228f / fSlow1800;
		int iSlow1806 = iSlow2 + 37457;
		int iSlow1807 = (127 * ((iSlow1806 & 16777215) ^ ((40503 * (iSlow1806 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1808 = (125 * (iSlow1807 ^ (iSlow1807 >> 11)) + 52711) & 16777215;
		int iSlow1809 = (121 * (iSlow1808 ^ (iSlow1808 >> 9)) + 10007) & 16777215;
		float fSlow1810 = 2.3841858e-08f * float((113 * (iSlow1809 ^ (iSlow1809 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow1811 = fConst88 * fSlow1810;
		float fSlow1812 = 3.7450704e-07f * fSlow1792;
		float fSlow1813 = std::sin(fSlow1812);
		float fSlow1814 = std::cos(fSlow1812);
		float fSlow1815 = 0.18506388f / fSlow1810;
		int iSlow1816 = iSlow2 + 33134;
		int iSlow1817 = (127 * ((iSlow1816 & 16777215) ^ ((40503 * (iSlow1816 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1818 = (125 * (iSlow1817 ^ (iSlow1817 >> 11)) + 52711) & 16777215;
		int iSlow1819 = (121 * (iSlow1818 ^ (iSlow1818 >> 9)) + 10007) & 16777215;
		int iSlow1820 = iSlow2 + 33003;
		int iSlow1821 = (127 * ((iSlow1820 & 16777215) ^ ((40503 * (iSlow1820 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1822 = (125 * (iSlow1821 ^ (iSlow1821 >> 11)) + 52711) & 16777215;
		int iSlow1823 = (121 * (iSlow1822 ^ (iSlow1822 >> 9)) + 10007) & 16777215;
		int iSlow1824 = iSlow2 + 32872;
		int iSlow1825 = (127 * ((iSlow1824 & 16777215) ^ ((40503 * (iSlow1824 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1826 = (125 * (iSlow1825 ^ (iSlow1825 >> 11)) + 52711) & 16777215;
		int iSlow1827 = (121 * (iSlow1826 ^ (iSlow1826 >> 9)) + 10007) & 16777215;
		float fSlow1828 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1827 ^ (iSlow1827 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1823 ^ (iSlow1823 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1819 ^ (iSlow1819 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1829 = fSlow1682 * (fSlow1682 + fSlow1684) + 1.0f;
		float fSlow1830 = fSlow1652 * (fSlow1652 + fSlow1654) + 1.0f;
		float fSlow1831 = 1.0f - fSlow1583;
		int iSlow1832 = iSlow2 + 47734;
		int iSlow1833 = (127 * ((iSlow1832 & 16777215) ^ ((40503 * (iSlow1832 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1834 = (125 * (iSlow1833 ^ (iSlow1833 >> 11)) + 52711) & 16777215;
		int iSlow1835 = (121 * (iSlow1834 ^ (iSlow1834 >> 9)) + 10007) & 16777215;
		int iSlow1836 = iSlow2 + 47603;
		int iSlow1837 = (127 * ((iSlow1836 & 16777215) ^ ((40503 * (iSlow1836 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1838 = (125 * (iSlow1837 ^ (iSlow1837 >> 11)) + 52711) & 16777215;
		int iSlow1839 = (121 * (iSlow1838 ^ (iSlow1838 >> 9)) + 10007) & 16777215;
		int iSlow1840 = iSlow2 + 47472;
		int iSlow1841 = (127 * ((iSlow1840 & 16777215) ^ ((40503 * (iSlow1840 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1842 = (125 * (iSlow1841 ^ (iSlow1841 >> 11)) + 52711) & 16777215;
		int iSlow1843 = (121 * (iSlow1842 ^ (iSlow1842 >> 9)) + 10007) & 16777215;
		float fSlow1844 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1843 ^ (iSlow1843 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1839 ^ (iSlow1839 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1835 ^ (iSlow1835 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1845 = iSlow2 + 48913;
		int iSlow1846 = (127 * ((iSlow1845 & 16777215) ^ ((40503 * (iSlow1845 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1847 = (125 * (iSlow1846 ^ (iSlow1846 >> 11)) + 52711) & 16777215;
		int iSlow1848 = (121 * (iSlow1847 ^ (iSlow1847 >> 9)) + 10007) & 16777215;
		int iSlow1849 = iSlow2 + 48782;
		int iSlow1850 = (127 * ((iSlow1849 & 16777215) ^ ((40503 * (iSlow1849 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1851 = (125 * (iSlow1850 ^ (iSlow1850 >> 11)) + 52711) & 16777215;
		int iSlow1852 = (121 * (iSlow1851 ^ (iSlow1851 >> 9)) + 10007) & 16777215;
		int iSlow1853 = iSlow2 + 48651;
		int iSlow1854 = (127 * ((iSlow1853 & 16777215) ^ ((40503 * (iSlow1853 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1855 = (125 * (iSlow1854 ^ (iSlow1854 >> 11)) + 52711) & 16777215;
		int iSlow1856 = (121 * (iSlow1855 ^ (iSlow1855 >> 9)) + 10007) & 16777215;
		float fSlow1857 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1856 ^ (iSlow1856 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1852 ^ (iSlow1852 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1848 ^ (iSlow1848 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1858 = iSlow2 + 48127;
		int iSlow1859 = (127 * ((iSlow1858 & 16777215) ^ ((40503 * (iSlow1858 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1860 = (125 * (iSlow1859 ^ (iSlow1859 >> 11)) + 52711) & 16777215;
		int iSlow1861 = (121 * (iSlow1860 ^ (iSlow1860 >> 9)) + 10007) & 16777215;
		int iSlow1862 = iSlow2 + 47996;
		int iSlow1863 = (127 * ((iSlow1862 & 16777215) ^ ((40503 * (iSlow1862 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1864 = (125 * (iSlow1863 ^ (iSlow1863 >> 11)) + 52711) & 16777215;
		int iSlow1865 = (121 * (iSlow1864 ^ (iSlow1864 >> 9)) + 10007) & 16777215;
		int iSlow1866 = iSlow2 + 47865;
		int iSlow1867 = (127 * ((iSlow1866 & 16777215) ^ ((40503 * (iSlow1866 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1868 = (125 * (iSlow1867 ^ (iSlow1867 >> 11)) + 52711) & 16777215;
		int iSlow1869 = (121 * (iSlow1868 ^ (iSlow1868 >> 9)) + 10007) & 16777215;
		float fSlow1870 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1869 ^ (iSlow1869 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1865 ^ (iSlow1865 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1861 ^ (iSlow1861 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow1871 = iSlow2 + 49699;
		int iSlow1872 = (127 * ((iSlow1871 & 16777215) ^ ((40503 * (iSlow1871 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1873 = (125 * (iSlow1872 ^ (iSlow1872 >> 11)) + 52711) & 16777215;
		int iSlow1874 = (121 * (iSlow1873 ^ (iSlow1873 >> 9)) + 10007) & 16777215;
		int iSlow1875 = iSlow2 + 49568;
		int iSlow1876 = (127 * ((iSlow1875 & 16777215) ^ ((40503 * (iSlow1875 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1877 = (125 * (iSlow1876 ^ (iSlow1876 >> 11)) + 52711) & 16777215;
		int iSlow1878 = (121 * (iSlow1877 ^ (iSlow1877 >> 9)) + 10007) & 16777215;
		int iSlow1879 = iSlow2 + 49437;
		int iSlow1880 = (127 * ((iSlow1879 & 16777215) ^ ((40503 * (iSlow1879 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1881 = (125 * (iSlow1880 ^ (iSlow1880 >> 11)) + 52711) & 16777215;
		int iSlow1882 = (121 * (iSlow1881 ^ (iSlow1881 >> 9)) + 10007) & 16777215;
		float fSlow1883 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow1882 ^ (iSlow1882 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1878 ^ (iSlow1878 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1874 ^ (iSlow1874 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1884 = 0.001f * fSlow277 * fSlow1883;
		int iSlow1885 = std::fabs(fSlow1884) < 1.1920929e-07f;
		float fSlow1886 = ((iSlow1885) ? 0.0f : std::exp(-(fConst15 / ((iSlow1885) ? 1.0f : fSlow1884))));
		float fSlow1887 = 0.001f * fSlow281 * fSlow1883;
		int iSlow1888 = std::fabs(fSlow1887) < 1.1920929e-07f;
		float fSlow1889 = ((iSlow1888) ? 0.0f : std::exp(-(fConst15 / ((iSlow1888) ? 1.0f : fSlow1887))));
		int iSlow1890 = iSlow2 + 46162;
		int iSlow1891 = (127 * ((iSlow1890 & 16777215) ^ ((40503 * (iSlow1890 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1892 = (125 * (iSlow1891 ^ (iSlow1891 >> 11)) + 52711) & 16777215;
		int iSlow1893 = (121 * (iSlow1892 ^ (iSlow1892 >> 9)) + 10007) & 16777215;
		float fSlow1894 = float((5.9604645e-08f * float((113 * (iSlow1893 ^ (iSlow1893 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow1895 = 1.2732395f * fSlow1894;
		int iSlow1896 = iSlow2 + 45114;
		int iSlow1897 = (127 * ((iSlow1896 & 16777215) ^ ((40503 * (iSlow1896 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1898 = (125 * (iSlow1897 ^ (iSlow1897 >> 11)) + 52711) & 16777215;
		int iSlow1899 = (121 * (iSlow1898 ^ (iSlow1898 >> 9)) + 10007) & 16777215;
		float fSlow1900 = 5.9604645e-08f * float((113 * (iSlow1899 ^ (iSlow1899 >> 12)) + 3571) & 16777215);
		float fSlow1901 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow1900 < fSlow319) + ((fSlow1900 >= fSlow319) & (fSlow1900 < fSlow313))));
		float fSlow1902 = fSlow1901 + 1.0f;
		float fSlow1903 = std::pow(0.029994002f / fSlow1902 * fSlow311, 0.8f);
		int iSlow1904 = iSlow2 + 40267;
		int iSlow1905 = (127 * ((iSlow1904 & 16777215) ^ ((40503 * (iSlow1904 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1906 = (125 * (iSlow1905 ^ (iSlow1905 >> 11)) + 52711) & 16777215;
		int iSlow1907 = (121 * (iSlow1906 ^ (iSlow1906 >> 9)) + 10007) & 16777215;
		int iSlow1908 = iSlow2 + 40136;
		int iSlow1909 = (127 * ((iSlow1908 & 16777215) ^ ((40503 * (iSlow1908 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1910 = (125 * (iSlow1909 ^ (iSlow1909 >> 11)) + 52711) & 16777215;
		int iSlow1911 = (121 * (iSlow1910 ^ (iSlow1910 >> 9)) + 10007) & 16777215;
		int iSlow1912 = iSlow2 + 40005;
		int iSlow1913 = (127 * ((iSlow1912 & 16777215) ^ ((40503 * (iSlow1912 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1914 = (125 * (iSlow1913 ^ (iSlow1913 >> 11)) + 52711) & 16777215;
		int iSlow1915 = (121 * (iSlow1914 ^ (iSlow1914 >> 9)) + 10007) & 16777215;
		float fSlow1916 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow1915 ^ (iSlow1915 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1911 ^ (iSlow1911 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1907 ^ (iSlow1907 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow1917 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow1916)) * fSlow1903));
		float fSlow1918 = 1.0f / fSlow1917;
		float fSlow1919 = (fSlow1918 + 0.5176381f) / fSlow1917 + 1.0f;
		float fSlow1920 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1917);
		float fSlow1921 = (fSlow1918 + -0.5176381f) / fSlow1917 + 1.0f;
		float fSlow1922 = (fSlow1918 + 1.4142135f) / fSlow1917 + 1.0f;
		float fSlow1923 = (fSlow1918 + -1.4142135f) / fSlow1917 + 1.0f;
		float fSlow1924 = (fSlow1918 + 1.9318516f) / fSlow1917 + 1.0f;
		float fSlow1925 = (fSlow1918 + -1.9318516f) / fSlow1917 + 1.0f;
		int iSlow1926 = iSlow2 + 40660;
		int iSlow1927 = (127 * ((iSlow1926 & 16777215) ^ ((40503 * (iSlow1926 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1928 = (125 * (iSlow1927 ^ (iSlow1927 >> 11)) + 52711) & 16777215;
		int iSlow1929 = (121 * (iSlow1928 ^ (iSlow1928 >> 9)) + 10007) & 16777215;
		int iSlow1930 = iSlow2 + 40529;
		int iSlow1931 = (127 * ((iSlow1930 & 16777215) ^ ((40503 * (iSlow1930 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1932 = (125 * (iSlow1931 ^ (iSlow1931 >> 11)) + 52711) & 16777215;
		int iSlow1933 = (121 * (iSlow1932 ^ (iSlow1932 >> 9)) + 10007) & 16777215;
		int iSlow1934 = iSlow2 + 40398;
		int iSlow1935 = (127 * ((iSlow1934 & 16777215) ^ ((40503 * (iSlow1934 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1936 = (125 * (iSlow1935 ^ (iSlow1935 >> 11)) + 52711) & 16777215;
		int iSlow1937 = (121 * (iSlow1936 ^ (iSlow1936 >> 9)) + 10007) & 16777215;
		float fSlow1938 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1937 ^ (iSlow1937 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1933 ^ (iSlow1933 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1929 ^ (iSlow1929 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow1901 - fSlow320);
		int iSlow1939 = iSlow2 + 43411;
		int iSlow1940 = (127 * ((iSlow1939 & 16777215) ^ ((40503 * (iSlow1939 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1941 = (125 * (iSlow1940 ^ (iSlow1940 >> 11)) + 52711) & 16777215;
		int iSlow1942 = (121 * (iSlow1941 ^ (iSlow1941 >> 9)) + 10007) & 16777215;
		int iSlow1943 = iSlow2 + 43280;
		int iSlow1944 = (127 * ((iSlow1943 & 16777215) ^ ((40503 * (iSlow1943 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1945 = (125 * (iSlow1944 ^ (iSlow1944 >> 11)) + 52711) & 16777215;
		int iSlow1946 = (121 * (iSlow1945 ^ (iSlow1945 >> 9)) + 10007) & 16777215;
		int iSlow1947 = iSlow2 + 43149;
		int iSlow1948 = (127 * ((iSlow1947 & 16777215) ^ ((40503 * (iSlow1947 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1949 = (125 * (iSlow1948 ^ (iSlow1948 >> 11)) + 52711) & 16777215;
		int iSlow1950 = (121 * (iSlow1949 ^ (iSlow1949 >> 9)) + 10007) & 16777215;
		float fSlow1951 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1950 ^ (iSlow1950 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1946 ^ (iSlow1946 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1942 ^ (iSlow1942 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1952 = fSlow1951 > 0.0f;
		int iSlow1953 = iSlow2 + 44983;
		int iSlow1954 = (127 * ((iSlow1953 & 16777215) ^ ((40503 * (iSlow1953 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1955 = (125 * (iSlow1954 ^ (iSlow1954 >> 11)) + 52711) & 16777215;
		int iSlow1956 = (121 * (iSlow1955 ^ (iSlow1955 >> 9)) + 10007) & 16777215;
		float fSlow1957 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1956 ^ (iSlow1956 >> 12)) + 3571) & 16777215));
		float fSlow1958 = std::sin(fConst59 * fSlow1957);
		float fSlow1959 = fConst60 * (fSlow1957 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1951)) / fSlow1958);
		float fSlow1960 = fConst60 * (fSlow1957 / fSlow1958);
		float fSlow1961 = ((iSlow1952) ? fSlow1960 : fSlow1959);
		float fSlow1962 = std::tan(fConst61 * fSlow1957);
		float fSlow1963 = 1.0f / fSlow1962;
		float fSlow1964 = fSlow1963 * (fSlow1963 + fSlow1961) + 1.0f;
		float fSlow1965 = ((iSlow1952) ? fSlow1959 : fSlow1960);
		float fSlow1966 = fSlow1963 * (fSlow1963 - fSlow1965) + 1.0f;
		float fSlow1967 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1962));
		float fSlow1968 = fSlow1963 * (fSlow1963 - fSlow1961) + 1.0f;
		int iSlow1969 = iSlow2 + 43018;
		int iSlow1970 = (127 * ((iSlow1969 & 16777215) ^ ((40503 * (iSlow1969 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1971 = (125 * (iSlow1970 ^ (iSlow1970 >> 11)) + 52711) & 16777215;
		int iSlow1972 = (121 * (iSlow1971 ^ (iSlow1971 >> 9)) + 10007) & 16777215;
		int iSlow1973 = iSlow2 + 42887;
		int iSlow1974 = (127 * ((iSlow1973 & 16777215) ^ ((40503 * (iSlow1973 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1975 = (125 * (iSlow1974 ^ (iSlow1974 >> 11)) + 52711) & 16777215;
		int iSlow1976 = (121 * (iSlow1975 ^ (iSlow1975 >> 9)) + 10007) & 16777215;
		int iSlow1977 = iSlow2 + 42756;
		int iSlow1978 = (127 * ((iSlow1977 & 16777215) ^ ((40503 * (iSlow1977 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1979 = (125 * (iSlow1978 ^ (iSlow1978 >> 11)) + 52711) & 16777215;
		int iSlow1980 = (121 * (iSlow1979 ^ (iSlow1979 >> 9)) + 10007) & 16777215;
		float fSlow1981 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow1980 ^ (iSlow1980 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1976 ^ (iSlow1976 >> 12)) + 3571) & 16777215) + float((113 * (iSlow1972 ^ (iSlow1972 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow1982 = fSlow1981 > 0.0f;
		int iSlow1983 = iSlow2 + 44852;
		int iSlow1984 = (127 * ((iSlow1983 & 16777215) ^ ((40503 * (iSlow1983 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow1985 = (125 * (iSlow1984 ^ (iSlow1984 >> 11)) + 52711) & 16777215;
		int iSlow1986 = (121 * (iSlow1985 ^ (iSlow1985 >> 9)) + 10007) & 16777215;
		float fSlow1987 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow1986 ^ (iSlow1986 >> 12)) + 3571) & 16777215));
		float fSlow1988 = std::sin(fConst59 * fSlow1987);
		float fSlow1989 = fConst62 * (fSlow1987 * std::pow(1e+01f, 0.05f * std::fabs(fSlow1981)) / fSlow1988);
		float fSlow1990 = fConst62 * (fSlow1987 / fSlow1988);
		float fSlow1991 = ((iSlow1982) ? fSlow1990 : fSlow1989);
		float fSlow1992 = std::tan(fConst61 * fSlow1987);
		float fSlow1993 = 1.0f / fSlow1992;
		float fSlow1994 = fSlow1993 * (fSlow1993 + fSlow1991) + 1.0f;
		float fSlow1995 = ((iSlow1982) ? fSlow1989 : fSlow1990);
		float fSlow1996 = fSlow1993 * (fSlow1993 - fSlow1995) + 1.0f;
		float fSlow1997 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow1992));
		float fSlow1998 = fSlow1993 * (fSlow1993 - fSlow1991) + 1.0f;
		int iSlow1999 = iSlow2 + 41446;
		int iSlow2000 = (127 * ((iSlow1999 & 16777215) ^ ((40503 * (iSlow1999 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2001 = (125 * (iSlow2000 ^ (iSlow2000 >> 11)) + 52711) & 16777215;
		int iSlow2002 = (121 * (iSlow2001 ^ (iSlow2001 >> 9)) + 10007) & 16777215;
		int iSlow2003 = iSlow2 + 41315;
		int iSlow2004 = (127 * ((iSlow2003 & 16777215) ^ ((40503 * (iSlow2003 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2005 = (125 * (iSlow2004 ^ (iSlow2004 >> 11)) + 52711) & 16777215;
		int iSlow2006 = (121 * (iSlow2005 ^ (iSlow2005 >> 9)) + 10007) & 16777215;
		int iSlow2007 = iSlow2 + 41184;
		int iSlow2008 = (127 * ((iSlow2007 & 16777215) ^ ((40503 * (iSlow2007 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2009 = (125 * (iSlow2008 ^ (iSlow2008 >> 11)) + 52711) & 16777215;
		int iSlow2010 = (121 * (iSlow2009 ^ (iSlow2009 >> 9)) + 10007) & 16777215;
		float fSlow2011 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2010 ^ (iSlow2010 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2006 ^ (iSlow2006 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2002 ^ (iSlow2002 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2012 = fConst12 * fSlow435 * fSlow2011;
		float fSlow2013 = fSlow439 * fSlow2011;
		float fSlow2014 = fConst12 * fSlow2013;
		float fSlow2015 = fConst73 * fSlow2013;
		int iSlow2016 = iSlow2 + 41839;
		int iSlow2017 = (127 * ((iSlow2016 & 16777215) ^ ((40503 * (iSlow2016 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2018 = (125 * (iSlow2017 ^ (iSlow2017 >> 11)) + 52711) & 16777215;
		int iSlow2019 = (121 * (iSlow2018 ^ (iSlow2018 >> 9)) + 10007) & 16777215;
		int iSlow2020 = iSlow2 + 41708;
		int iSlow2021 = (127 * ((iSlow2020 & 16777215) ^ ((40503 * (iSlow2020 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2022 = (125 * (iSlow2021 ^ (iSlow2021 >> 11)) + 52711) & 16777215;
		int iSlow2023 = (121 * (iSlow2022 ^ (iSlow2022 >> 9)) + 10007) & 16777215;
		int iSlow2024 = iSlow2 + 41577;
		int iSlow2025 = (127 * ((iSlow2024 & 16777215) ^ ((40503 * (iSlow2024 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2026 = (125 * (iSlow2025 ^ (iSlow2025 >> 11)) + 52711) & 16777215;
		int iSlow2027 = (121 * (iSlow2026 ^ (iSlow2026 >> 9)) + 10007) & 16777215;
		float fSlow2028 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2027 ^ (iSlow2027 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2023 ^ (iSlow2023 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2019 ^ (iSlow2019 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2029 = 0.121492326f / fSlow1902;
		int iSlow2030 = iSlow2 + 39874;
		int iSlow2031 = (127 * ((iSlow2030 & 16777215) ^ ((40503 * (iSlow2030 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2032 = (125 * (iSlow2031 ^ (iSlow2031 >> 11)) + 52711) & 16777215;
		int iSlow2033 = (121 * (iSlow2032 ^ (iSlow2032 >> 9)) + 10007) & 16777215;
		int iSlow2034 = iSlow2 + 39743;
		int iSlow2035 = (127 * ((iSlow2034 & 16777215) ^ ((40503 * (iSlow2034 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2036 = (125 * (iSlow2035 ^ (iSlow2035 >> 11)) + 52711) & 16777215;
		int iSlow2037 = (121 * (iSlow2036 ^ (iSlow2036 >> 9)) + 10007) & 16777215;
		int iSlow2038 = iSlow2 + 39612;
		int iSlow2039 = (127 * ((iSlow2038 & 16777215) ^ ((40503 * (iSlow2038 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2040 = (125 * (iSlow2039 ^ (iSlow2039 >> 11)) + 52711) & 16777215;
		int iSlow2041 = (121 * (iSlow2040 ^ (iSlow2040 >> 9)) + 10007) & 16777215;
		float fSlow2042 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2041 ^ (iSlow2041 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2037 ^ (iSlow2037 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2033 ^ (iSlow2033 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2043 = fConst0 * fSlow1902;
		int iSlow2044 = iSlow2 + 42625;
		int iSlow2045 = (127 * ((iSlow2044 & 16777215) ^ ((40503 * (iSlow2044 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2046 = (125 * (iSlow2045 ^ (iSlow2045 >> 11)) + 52711) & 16777215;
		int iSlow2047 = (121 * (iSlow2046 ^ (iSlow2046 >> 9)) + 10007) & 16777215;
		int iSlow2048 = iSlow2 + 42494;
		int iSlow2049 = (127 * ((iSlow2048 & 16777215) ^ ((40503 * (iSlow2048 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2050 = (125 * (iSlow2049 ^ (iSlow2049 >> 11)) + 52711) & 16777215;
		int iSlow2051 = (121 * (iSlow2050 ^ (iSlow2050 >> 9)) + 10007) & 16777215;
		int iSlow2052 = iSlow2 + 42363;
		int iSlow2053 = (127 * ((iSlow2052 & 16777215) ^ ((40503 * (iSlow2052 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2054 = (125 * (iSlow2053 ^ (iSlow2053 >> 11)) + 52711) & 16777215;
		int iSlow2055 = (121 * (iSlow2054 ^ (iSlow2054 >> 9)) + 10007) & 16777215;
		float fSlow2056 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2055 ^ (iSlow2055 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2051 ^ (iSlow2051 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2047 ^ (iSlow2047 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2057 = iSlow2 + 42232;
		int iSlow2058 = (127 * ((iSlow2057 & 16777215) ^ ((40503 * (iSlow2057 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2059 = (125 * (iSlow2058 ^ (iSlow2058 >> 11)) + 52711) & 16777215;
		int iSlow2060 = (121 * (iSlow2059 ^ (iSlow2059 >> 9)) + 10007) & 16777215;
		int iSlow2061 = iSlow2 + 42101;
		int iSlow2062 = (127 * ((iSlow2061 & 16777215) ^ ((40503 * (iSlow2061 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2063 = (125 * (iSlow2062 ^ (iSlow2062 >> 11)) + 52711) & 16777215;
		int iSlow2064 = (121 * (iSlow2063 ^ (iSlow2063 >> 9)) + 10007) & 16777215;
		int iSlow2065 = iSlow2 + 41970;
		int iSlow2066 = (127 * ((iSlow2065 & 16777215) ^ ((40503 * (iSlow2065 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2067 = (125 * (iSlow2066 ^ (iSlow2066 >> 11)) + 52711) & 16777215;
		int iSlow2068 = (121 * (iSlow2067 ^ (iSlow2067 >> 9)) + 10007) & 16777215;
		float fSlow2069 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2068 ^ (iSlow2068 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2064 ^ (iSlow2064 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2060 ^ (iSlow2060 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2070 = 0.63661975f / fSlow2069;
		int iSlow2071 = iSlow2 + 43804;
		int iSlow2072 = (127 * ((iSlow2071 & 16777215) ^ ((40503 * (iSlow2071 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2073 = (125 * (iSlow2072 ^ (iSlow2072 >> 11)) + 52711) & 16777215;
		int iSlow2074 = (121 * (iSlow2073 ^ (iSlow2073 >> 9)) + 10007) & 16777215;
		int iSlow2075 = iSlow2 + 43673;
		int iSlow2076 = (127 * ((iSlow2075 & 16777215) ^ ((40503 * (iSlow2075 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2077 = (125 * (iSlow2076 ^ (iSlow2076 >> 11)) + 52711) & 16777215;
		int iSlow2078 = (121 * (iSlow2077 ^ (iSlow2077 >> 9)) + 10007) & 16777215;
		int iSlow2079 = iSlow2 + 43542;
		int iSlow2080 = (127 * ((iSlow2079 & 16777215) ^ ((40503 * (iSlow2079 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2081 = (125 * (iSlow2080 ^ (iSlow2080 >> 11)) + 52711) & 16777215;
		int iSlow2082 = (121 * (iSlow2081 ^ (iSlow2081 >> 9)) + 10007) & 16777215;
		float fSlow2083 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2082 ^ (iSlow2082 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2078 ^ (iSlow2078 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2074 ^ (iSlow2074 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow2084 = 4.0f * fSlow2083;
		int iSlow2085 = iSlow2 + 44197;
		int iSlow2086 = (127 * ((iSlow2085 & 16777215) ^ ((40503 * (iSlow2085 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2087 = (125 * (iSlow2086 ^ (iSlow2086 >> 11)) + 52711) & 16777215;
		int iSlow2088 = (121 * (iSlow2087 ^ (iSlow2087 >> 9)) + 10007) & 16777215;
		int iSlow2089 = iSlow2 + 44066;
		int iSlow2090 = (127 * ((iSlow2089 & 16777215) ^ ((40503 * (iSlow2089 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2091 = (125 * (iSlow2090 ^ (iSlow2090 >> 11)) + 52711) & 16777215;
		int iSlow2092 = (121 * (iSlow2091 ^ (iSlow2091 >> 9)) + 10007) & 16777215;
		int iSlow2093 = iSlow2 + 43935;
		int iSlow2094 = (127 * ((iSlow2093 & 16777215) ^ ((40503 * (iSlow2093 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2095 = (125 * (iSlow2094 ^ (iSlow2094 >> 11)) + 52711) & 16777215;
		int iSlow2096 = (121 * (iSlow2095 ^ (iSlow2095 >> 9)) + 10007) & 16777215;
		float fSlow2097 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow2096 ^ (iSlow2096 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2092 ^ (iSlow2092 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2088 ^ (iSlow2088 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow2098 = 4e+01f * fSlow2083;
		int iSlow2099 = iSlow2 + 45245;
		int iSlow2100 = (127 * ((iSlow2099 & 16777215) ^ ((40503 * (iSlow2099 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2101 = (125 * (iSlow2100 ^ (iSlow2100 >> 11)) + 52711) & 16777215;
		int iSlow2102 = (121 * (iSlow2101 ^ (iSlow2101 >> 9)) + 10007) & 16777215;
		float fSlow2103 = float((113 * (iSlow2102 ^ (iSlow2102 >> 12)) + 3571) & 16777215);
		float fSlow2104 = 8.613662e-07f * fSlow2103;
		float fSlow2105 = std::sin(fSlow2104);
		float fSlow2106 = std::cos(fSlow2104);
		int iSlow2107 = iSlow2 + 45507;
		int iSlow2108 = (127 * ((iSlow2107 & 16777215) ^ ((40503 * (iSlow2107 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2109 = (125 * (iSlow2108 ^ (iSlow2108 >> 11)) + 52711) & 16777215;
		int iSlow2110 = (121 * (iSlow2109 ^ (iSlow2109 >> 9)) + 10007) & 16777215;
		float fSlow2111 = 2.3841858e-08f * float((113 * (iSlow2110 ^ (iSlow2110 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2112 = fConst87 * fSlow2111;
		float fSlow2113 = 6.366619e-07f * fSlow2103;
		float fSlow2114 = std::sin(fSlow2113);
		float fSlow2115 = std::cos(fSlow2113);
		float fSlow2116 = 0.013081228f / fSlow2111;
		int iSlow2117 = iSlow2 + 45376;
		int iSlow2118 = (127 * ((iSlow2117 & 16777215) ^ ((40503 * (iSlow2117 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2119 = (125 * (iSlow2118 ^ (iSlow2118 >> 11)) + 52711) & 16777215;
		int iSlow2120 = (121 * (iSlow2119 ^ (iSlow2119 >> 9)) + 10007) & 16777215;
		float fSlow2121 = 2.3841858e-08f * float((113 * (iSlow2120 ^ (iSlow2120 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2122 = fConst88 * fSlow2121;
		float fSlow2123 = 3.7450704e-07f * fSlow2103;
		float fSlow2124 = std::sin(fSlow2123);
		float fSlow2125 = std::cos(fSlow2123);
		float fSlow2126 = 0.18506388f / fSlow2121;
		int iSlow2127 = iSlow2 + 41053;
		int iSlow2128 = (127 * ((iSlow2127 & 16777215) ^ ((40503 * (iSlow2127 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2129 = (125 * (iSlow2128 ^ (iSlow2128 >> 11)) + 52711) & 16777215;
		int iSlow2130 = (121 * (iSlow2129 ^ (iSlow2129 >> 9)) + 10007) & 16777215;
		int iSlow2131 = iSlow2 + 40922;
		int iSlow2132 = (127 * ((iSlow2131 & 16777215) ^ ((40503 * (iSlow2131 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2133 = (125 * (iSlow2132 ^ (iSlow2132 >> 11)) + 52711) & 16777215;
		int iSlow2134 = (121 * (iSlow2133 ^ (iSlow2133 >> 9)) + 10007) & 16777215;
		int iSlow2135 = iSlow2 + 40791;
		int iSlow2136 = (127 * ((iSlow2135 & 16777215) ^ ((40503 * (iSlow2135 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2137 = (125 * (iSlow2136 ^ (iSlow2136 >> 11)) + 52711) & 16777215;
		int iSlow2138 = (121 * (iSlow2137 ^ (iSlow2137 >> 9)) + 10007) & 16777215;
		float fSlow2139 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2138 ^ (iSlow2138 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2134 ^ (iSlow2134 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2130 ^ (iSlow2130 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2140 = fSlow1993 * (fSlow1993 + fSlow1995) + 1.0f;
		float fSlow2141 = fSlow1963 * (fSlow1963 + fSlow1965) + 1.0f;
		float fSlow2142 = 1.0f - fSlow1894;
		int iSlow2143 = iSlow2 + 55653;
		int iSlow2144 = (127 * ((iSlow2143 & 16777215) ^ ((40503 * (iSlow2143 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2145 = (125 * (iSlow2144 ^ (iSlow2144 >> 11)) + 52711) & 16777215;
		int iSlow2146 = (121 * (iSlow2145 ^ (iSlow2145 >> 9)) + 10007) & 16777215;
		int iSlow2147 = iSlow2 + 55522;
		int iSlow2148 = (127 * ((iSlow2147 & 16777215) ^ ((40503 * (iSlow2147 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2149 = (125 * (iSlow2148 ^ (iSlow2148 >> 11)) + 52711) & 16777215;
		int iSlow2150 = (121 * (iSlow2149 ^ (iSlow2149 >> 9)) + 10007) & 16777215;
		int iSlow2151 = iSlow2 + 55391;
		int iSlow2152 = (127 * ((iSlow2151 & 16777215) ^ ((40503 * (iSlow2151 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2153 = (125 * (iSlow2152 ^ (iSlow2152 >> 11)) + 52711) & 16777215;
		int iSlow2154 = (121 * (iSlow2153 ^ (iSlow2153 >> 9)) + 10007) & 16777215;
		float fSlow2155 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2154 ^ (iSlow2154 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2150 ^ (iSlow2150 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2146 ^ (iSlow2146 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2156 = iSlow2 + 56832;
		int iSlow2157 = (127 * ((iSlow2156 & 16777215) ^ ((40503 * (iSlow2156 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2158 = (125 * (iSlow2157 ^ (iSlow2157 >> 11)) + 52711) & 16777215;
		int iSlow2159 = (121 * (iSlow2158 ^ (iSlow2158 >> 9)) + 10007) & 16777215;
		int iSlow2160 = iSlow2 + 56701;
		int iSlow2161 = (127 * ((iSlow2160 & 16777215) ^ ((40503 * (iSlow2160 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2162 = (125 * (iSlow2161 ^ (iSlow2161 >> 11)) + 52711) & 16777215;
		int iSlow2163 = (121 * (iSlow2162 ^ (iSlow2162 >> 9)) + 10007) & 16777215;
		int iSlow2164 = iSlow2 + 56570;
		int iSlow2165 = (127 * ((iSlow2164 & 16777215) ^ ((40503 * (iSlow2164 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2166 = (125 * (iSlow2165 ^ (iSlow2165 >> 11)) + 52711) & 16777215;
		int iSlow2167 = (121 * (iSlow2166 ^ (iSlow2166 >> 9)) + 10007) & 16777215;
		float fSlow2168 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2167 ^ (iSlow2167 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2163 ^ (iSlow2163 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2159 ^ (iSlow2159 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2169 = iSlow2 + 56046;
		int iSlow2170 = (127 * ((iSlow2169 & 16777215) ^ ((40503 * (iSlow2169 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2171 = (125 * (iSlow2170 ^ (iSlow2170 >> 11)) + 52711) & 16777215;
		int iSlow2172 = (121 * (iSlow2171 ^ (iSlow2171 >> 9)) + 10007) & 16777215;
		int iSlow2173 = iSlow2 + 55915;
		int iSlow2174 = (127 * ((iSlow2173 & 16777215) ^ ((40503 * (iSlow2173 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2175 = (125 * (iSlow2174 ^ (iSlow2174 >> 11)) + 52711) & 16777215;
		int iSlow2176 = (121 * (iSlow2175 ^ (iSlow2175 >> 9)) + 10007) & 16777215;
		int iSlow2177 = iSlow2 + 55784;
		int iSlow2178 = (127 * ((iSlow2177 & 16777215) ^ ((40503 * (iSlow2177 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2179 = (125 * (iSlow2178 ^ (iSlow2178 >> 11)) + 52711) & 16777215;
		int iSlow2180 = (121 * (iSlow2179 ^ (iSlow2179 >> 9)) + 10007) & 16777215;
		float fSlow2181 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2180 ^ (iSlow2180 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2176 ^ (iSlow2176 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2172 ^ (iSlow2172 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2182 = iSlow2 + 57618;
		int iSlow2183 = (127 * ((iSlow2182 & 16777215) ^ ((40503 * (iSlow2182 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2184 = (125 * (iSlow2183 ^ (iSlow2183 >> 11)) + 52711) & 16777215;
		int iSlow2185 = (121 * (iSlow2184 ^ (iSlow2184 >> 9)) + 10007) & 16777215;
		int iSlow2186 = iSlow2 + 57487;
		int iSlow2187 = (127 * ((iSlow2186 & 16777215) ^ ((40503 * (iSlow2186 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2188 = (125 * (iSlow2187 ^ (iSlow2187 >> 11)) + 52711) & 16777215;
		int iSlow2189 = (121 * (iSlow2188 ^ (iSlow2188 >> 9)) + 10007) & 16777215;
		int iSlow2190 = iSlow2 + 57356;
		int iSlow2191 = (127 * ((iSlow2190 & 16777215) ^ ((40503 * (iSlow2190 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2192 = (125 * (iSlow2191 ^ (iSlow2191 >> 11)) + 52711) & 16777215;
		int iSlow2193 = (121 * (iSlow2192 ^ (iSlow2192 >> 9)) + 10007) & 16777215;
		float fSlow2194 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow2193 ^ (iSlow2193 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2189 ^ (iSlow2189 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2185 ^ (iSlow2185 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2195 = 0.001f * fSlow277 * fSlow2194;
		int iSlow2196 = std::fabs(fSlow2195) < 1.1920929e-07f;
		float fSlow2197 = ((iSlow2196) ? 0.0f : std::exp(-(fConst15 / ((iSlow2196) ? 1.0f : fSlow2195))));
		float fSlow2198 = 0.001f * fSlow281 * fSlow2194;
		int iSlow2199 = std::fabs(fSlow2198) < 1.1920929e-07f;
		float fSlow2200 = ((iSlow2199) ? 0.0f : std::exp(-(fConst15 / ((iSlow2199) ? 1.0f : fSlow2198))));
		int iSlow2201 = iSlow2 + 54081;
		int iSlow2202 = (127 * ((iSlow2201 & 16777215) ^ ((40503 * (iSlow2201 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2203 = (125 * (iSlow2202 ^ (iSlow2202 >> 11)) + 52711) & 16777215;
		int iSlow2204 = (121 * (iSlow2203 ^ (iSlow2203 >> 9)) + 10007) & 16777215;
		float fSlow2205 = float((5.9604645e-08f * float((113 * (iSlow2204 ^ (iSlow2204 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow2206 = 1.2732395f * fSlow2205;
		int iSlow2207 = iSlow2 + 53033;
		int iSlow2208 = (127 * ((iSlow2207 & 16777215) ^ ((40503 * (iSlow2207 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2209 = (125 * (iSlow2208 ^ (iSlow2208 >> 11)) + 52711) & 16777215;
		int iSlow2210 = (121 * (iSlow2209 ^ (iSlow2209 >> 9)) + 10007) & 16777215;
		float fSlow2211 = 5.9604645e-08f * float((113 * (iSlow2210 ^ (iSlow2210 >> 12)) + 3571) & 16777215);
		float fSlow2212 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow2211 < fSlow319) + ((fSlow2211 >= fSlow319) & (fSlow2211 < fSlow313))));
		float fSlow2213 = fSlow2212 + 1.0f;
		float fSlow2214 = std::pow(0.029994002f / fSlow2213 * fSlow311, 0.8f);
		int iSlow2215 = iSlow2 + 48186;
		int iSlow2216 = (127 * ((iSlow2215 & 16777215) ^ ((40503 * (iSlow2215 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2217 = (125 * (iSlow2216 ^ (iSlow2216 >> 11)) + 52711) & 16777215;
		int iSlow2218 = (121 * (iSlow2217 ^ (iSlow2217 >> 9)) + 10007) & 16777215;
		int iSlow2219 = iSlow2 + 48055;
		int iSlow2220 = (127 * ((iSlow2219 & 16777215) ^ ((40503 * (iSlow2219 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2221 = (125 * (iSlow2220 ^ (iSlow2220 >> 11)) + 52711) & 16777215;
		int iSlow2222 = (121 * (iSlow2221 ^ (iSlow2221 >> 9)) + 10007) & 16777215;
		int iSlow2223 = iSlow2 + 47924;
		int iSlow2224 = (127 * ((iSlow2223 & 16777215) ^ ((40503 * (iSlow2223 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2225 = (125 * (iSlow2224 ^ (iSlow2224 >> 11)) + 52711) & 16777215;
		int iSlow2226 = (121 * (iSlow2225 ^ (iSlow2225 >> 9)) + 10007) & 16777215;
		float fSlow2227 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow2226 ^ (iSlow2226 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2222 ^ (iSlow2222 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2218 ^ (iSlow2218 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2228 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow2227)) * fSlow2214));
		float fSlow2229 = 1.0f / fSlow2228;
		float fSlow2230 = (fSlow2229 + 0.5176381f) / fSlow2228 + 1.0f;
		float fSlow2231 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2228);
		float fSlow2232 = (fSlow2229 + -0.5176381f) / fSlow2228 + 1.0f;
		float fSlow2233 = (fSlow2229 + 1.4142135f) / fSlow2228 + 1.0f;
		float fSlow2234 = (fSlow2229 + -1.4142135f) / fSlow2228 + 1.0f;
		float fSlow2235 = (fSlow2229 + 1.9318516f) / fSlow2228 + 1.0f;
		float fSlow2236 = (fSlow2229 + -1.9318516f) / fSlow2228 + 1.0f;
		int iSlow2237 = iSlow2 + 48579;
		int iSlow2238 = (127 * ((iSlow2237 & 16777215) ^ ((40503 * (iSlow2237 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2239 = (125 * (iSlow2238 ^ (iSlow2238 >> 11)) + 52711) & 16777215;
		int iSlow2240 = (121 * (iSlow2239 ^ (iSlow2239 >> 9)) + 10007) & 16777215;
		int iSlow2241 = iSlow2 + 48448;
		int iSlow2242 = (127 * ((iSlow2241 & 16777215) ^ ((40503 * (iSlow2241 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2243 = (125 * (iSlow2242 ^ (iSlow2242 >> 11)) + 52711) & 16777215;
		int iSlow2244 = (121 * (iSlow2243 ^ (iSlow2243 >> 9)) + 10007) & 16777215;
		int iSlow2245 = iSlow2 + 48317;
		int iSlow2246 = (127 * ((iSlow2245 & 16777215) ^ ((40503 * (iSlow2245 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2247 = (125 * (iSlow2246 ^ (iSlow2246 >> 11)) + 52711) & 16777215;
		int iSlow2248 = (121 * (iSlow2247 ^ (iSlow2247 >> 9)) + 10007) & 16777215;
		float fSlow2249 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2248 ^ (iSlow2248 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2244 ^ (iSlow2244 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2240 ^ (iSlow2240 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow2212 - fSlow320);
		int iSlow2250 = iSlow2 + 51330;
		int iSlow2251 = (127 * ((iSlow2250 & 16777215) ^ ((40503 * (iSlow2250 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2252 = (125 * (iSlow2251 ^ (iSlow2251 >> 11)) + 52711) & 16777215;
		int iSlow2253 = (121 * (iSlow2252 ^ (iSlow2252 >> 9)) + 10007) & 16777215;
		int iSlow2254 = iSlow2 + 51199;
		int iSlow2255 = (127 * ((iSlow2254 & 16777215) ^ ((40503 * (iSlow2254 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2256 = (125 * (iSlow2255 ^ (iSlow2255 >> 11)) + 52711) & 16777215;
		int iSlow2257 = (121 * (iSlow2256 ^ (iSlow2256 >> 9)) + 10007) & 16777215;
		int iSlow2258 = iSlow2 + 51068;
		int iSlow2259 = (127 * ((iSlow2258 & 16777215) ^ ((40503 * (iSlow2258 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2260 = (125 * (iSlow2259 ^ (iSlow2259 >> 11)) + 52711) & 16777215;
		int iSlow2261 = (121 * (iSlow2260 ^ (iSlow2260 >> 9)) + 10007) & 16777215;
		float fSlow2262 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2261 ^ (iSlow2261 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2257 ^ (iSlow2257 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2253 ^ (iSlow2253 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow2263 = fSlow2262 > 0.0f;
		int iSlow2264 = iSlow2 + 52902;
		int iSlow2265 = (127 * ((iSlow2264 & 16777215) ^ ((40503 * (iSlow2264 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2266 = (125 * (iSlow2265 ^ (iSlow2265 >> 11)) + 52711) & 16777215;
		int iSlow2267 = (121 * (iSlow2266 ^ (iSlow2266 >> 9)) + 10007) & 16777215;
		float fSlow2268 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow2267 ^ (iSlow2267 >> 12)) + 3571) & 16777215));
		float fSlow2269 = std::sin(fConst59 * fSlow2268);
		float fSlow2270 = fConst60 * (fSlow2268 * std::pow(1e+01f, 0.05f * std::fabs(fSlow2262)) / fSlow2269);
		float fSlow2271 = fConst60 * (fSlow2268 / fSlow2269);
		float fSlow2272 = ((iSlow2263) ? fSlow2271 : fSlow2270);
		float fSlow2273 = std::tan(fConst61 * fSlow2268);
		float fSlow2274 = 1.0f / fSlow2273;
		float fSlow2275 = fSlow2274 * (fSlow2274 + fSlow2272) + 1.0f;
		float fSlow2276 = ((iSlow2263) ? fSlow2270 : fSlow2271);
		float fSlow2277 = fSlow2274 * (fSlow2274 - fSlow2276) + 1.0f;
		float fSlow2278 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2273));
		float fSlow2279 = fSlow2274 * (fSlow2274 - fSlow2272) + 1.0f;
		int iSlow2280 = iSlow2 + 50937;
		int iSlow2281 = (127 * ((iSlow2280 & 16777215) ^ ((40503 * (iSlow2280 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2282 = (125 * (iSlow2281 ^ (iSlow2281 >> 11)) + 52711) & 16777215;
		int iSlow2283 = (121 * (iSlow2282 ^ (iSlow2282 >> 9)) + 10007) & 16777215;
		int iSlow2284 = iSlow2 + 50806;
		int iSlow2285 = (127 * ((iSlow2284 & 16777215) ^ ((40503 * (iSlow2284 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2286 = (125 * (iSlow2285 ^ (iSlow2285 >> 11)) + 52711) & 16777215;
		int iSlow2287 = (121 * (iSlow2286 ^ (iSlow2286 >> 9)) + 10007) & 16777215;
		int iSlow2288 = iSlow2 + 50675;
		int iSlow2289 = (127 * ((iSlow2288 & 16777215) ^ ((40503 * (iSlow2288 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2290 = (125 * (iSlow2289 ^ (iSlow2289 >> 11)) + 52711) & 16777215;
		int iSlow2291 = (121 * (iSlow2290 ^ (iSlow2290 >> 9)) + 10007) & 16777215;
		float fSlow2292 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2291 ^ (iSlow2291 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2287 ^ (iSlow2287 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2283 ^ (iSlow2283 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow2293 = fSlow2292 > 0.0f;
		int iSlow2294 = iSlow2 + 52771;
		int iSlow2295 = (127 * ((iSlow2294 & 16777215) ^ ((40503 * (iSlow2294 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2296 = (125 * (iSlow2295 ^ (iSlow2295 >> 11)) + 52711) & 16777215;
		int iSlow2297 = (121 * (iSlow2296 ^ (iSlow2296 >> 9)) + 10007) & 16777215;
		float fSlow2298 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow2297 ^ (iSlow2297 >> 12)) + 3571) & 16777215));
		float fSlow2299 = std::sin(fConst59 * fSlow2298);
		float fSlow2300 = fConst62 * (fSlow2298 * std::pow(1e+01f, 0.05f * std::fabs(fSlow2292)) / fSlow2299);
		float fSlow2301 = fConst62 * (fSlow2298 / fSlow2299);
		float fSlow2302 = ((iSlow2293) ? fSlow2301 : fSlow2300);
		float fSlow2303 = std::tan(fConst61 * fSlow2298);
		float fSlow2304 = 1.0f / fSlow2303;
		float fSlow2305 = fSlow2304 * (fSlow2304 + fSlow2302) + 1.0f;
		float fSlow2306 = ((iSlow2293) ? fSlow2300 : fSlow2301);
		float fSlow2307 = fSlow2304 * (fSlow2304 - fSlow2306) + 1.0f;
		float fSlow2308 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2303));
		float fSlow2309 = fSlow2304 * (fSlow2304 - fSlow2302) + 1.0f;
		int iSlow2310 = iSlow2 + 49365;
		int iSlow2311 = (127 * ((iSlow2310 & 16777215) ^ ((40503 * (iSlow2310 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2312 = (125 * (iSlow2311 ^ (iSlow2311 >> 11)) + 52711) & 16777215;
		int iSlow2313 = (121 * (iSlow2312 ^ (iSlow2312 >> 9)) + 10007) & 16777215;
		int iSlow2314 = iSlow2 + 49234;
		int iSlow2315 = (127 * ((iSlow2314 & 16777215) ^ ((40503 * (iSlow2314 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2316 = (125 * (iSlow2315 ^ (iSlow2315 >> 11)) + 52711) & 16777215;
		int iSlow2317 = (121 * (iSlow2316 ^ (iSlow2316 >> 9)) + 10007) & 16777215;
		int iSlow2318 = iSlow2 + 49103;
		int iSlow2319 = (127 * ((iSlow2318 & 16777215) ^ ((40503 * (iSlow2318 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2320 = (125 * (iSlow2319 ^ (iSlow2319 >> 11)) + 52711) & 16777215;
		int iSlow2321 = (121 * (iSlow2320 ^ (iSlow2320 >> 9)) + 10007) & 16777215;
		float fSlow2322 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2321 ^ (iSlow2321 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2317 ^ (iSlow2317 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2313 ^ (iSlow2313 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2323 = fConst12 * fSlow435 * fSlow2322;
		float fSlow2324 = fSlow439 * fSlow2322;
		float fSlow2325 = fConst12 * fSlow2324;
		float fSlow2326 = fConst73 * fSlow2324;
		int iSlow2327 = iSlow2 + 49758;
		int iSlow2328 = (127 * ((iSlow2327 & 16777215) ^ ((40503 * (iSlow2327 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2329 = (125 * (iSlow2328 ^ (iSlow2328 >> 11)) + 52711) & 16777215;
		int iSlow2330 = (121 * (iSlow2329 ^ (iSlow2329 >> 9)) + 10007) & 16777215;
		int iSlow2331 = iSlow2 + 49627;
		int iSlow2332 = (127 * ((iSlow2331 & 16777215) ^ ((40503 * (iSlow2331 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2333 = (125 * (iSlow2332 ^ (iSlow2332 >> 11)) + 52711) & 16777215;
		int iSlow2334 = (121 * (iSlow2333 ^ (iSlow2333 >> 9)) + 10007) & 16777215;
		int iSlow2335 = iSlow2 + 49496;
		int iSlow2336 = (127 * ((iSlow2335 & 16777215) ^ ((40503 * (iSlow2335 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2337 = (125 * (iSlow2336 ^ (iSlow2336 >> 11)) + 52711) & 16777215;
		int iSlow2338 = (121 * (iSlow2337 ^ (iSlow2337 >> 9)) + 10007) & 16777215;
		float fSlow2339 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2338 ^ (iSlow2338 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2334 ^ (iSlow2334 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2330 ^ (iSlow2330 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2340 = 0.121492326f / fSlow2213;
		int iSlow2341 = iSlow2 + 47793;
		int iSlow2342 = (127 * ((iSlow2341 & 16777215) ^ ((40503 * (iSlow2341 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2343 = (125 * (iSlow2342 ^ (iSlow2342 >> 11)) + 52711) & 16777215;
		int iSlow2344 = (121 * (iSlow2343 ^ (iSlow2343 >> 9)) + 10007) & 16777215;
		int iSlow2345 = iSlow2 + 47662;
		int iSlow2346 = (127 * ((iSlow2345 & 16777215) ^ ((40503 * (iSlow2345 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2347 = (125 * (iSlow2346 ^ (iSlow2346 >> 11)) + 52711) & 16777215;
		int iSlow2348 = (121 * (iSlow2347 ^ (iSlow2347 >> 9)) + 10007) & 16777215;
		int iSlow2349 = iSlow2 + 47531;
		int iSlow2350 = (127 * ((iSlow2349 & 16777215) ^ ((40503 * (iSlow2349 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2351 = (125 * (iSlow2350 ^ (iSlow2350 >> 11)) + 52711) & 16777215;
		int iSlow2352 = (121 * (iSlow2351 ^ (iSlow2351 >> 9)) + 10007) & 16777215;
		float fSlow2353 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2352 ^ (iSlow2352 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2348 ^ (iSlow2348 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2344 ^ (iSlow2344 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2354 = fConst0 * fSlow2213;
		int iSlow2355 = iSlow2 + 50544;
		int iSlow2356 = (127 * ((iSlow2355 & 16777215) ^ ((40503 * (iSlow2355 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2357 = (125 * (iSlow2356 ^ (iSlow2356 >> 11)) + 52711) & 16777215;
		int iSlow2358 = (121 * (iSlow2357 ^ (iSlow2357 >> 9)) + 10007) & 16777215;
		int iSlow2359 = iSlow2 + 50413;
		int iSlow2360 = (127 * ((iSlow2359 & 16777215) ^ ((40503 * (iSlow2359 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2361 = (125 * (iSlow2360 ^ (iSlow2360 >> 11)) + 52711) & 16777215;
		int iSlow2362 = (121 * (iSlow2361 ^ (iSlow2361 >> 9)) + 10007) & 16777215;
		int iSlow2363 = iSlow2 + 50282;
		int iSlow2364 = (127 * ((iSlow2363 & 16777215) ^ ((40503 * (iSlow2363 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2365 = (125 * (iSlow2364 ^ (iSlow2364 >> 11)) + 52711) & 16777215;
		int iSlow2366 = (121 * (iSlow2365 ^ (iSlow2365 >> 9)) + 10007) & 16777215;
		float fSlow2367 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2366 ^ (iSlow2366 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2362 ^ (iSlow2362 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2358 ^ (iSlow2358 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2368 = iSlow2 + 50151;
		int iSlow2369 = (127 * ((iSlow2368 & 16777215) ^ ((40503 * (iSlow2368 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2370 = (125 * (iSlow2369 ^ (iSlow2369 >> 11)) + 52711) & 16777215;
		int iSlow2371 = (121 * (iSlow2370 ^ (iSlow2370 >> 9)) + 10007) & 16777215;
		int iSlow2372 = iSlow2 + 50020;
		int iSlow2373 = (127 * ((iSlow2372 & 16777215) ^ ((40503 * (iSlow2372 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2374 = (125 * (iSlow2373 ^ (iSlow2373 >> 11)) + 52711) & 16777215;
		int iSlow2375 = (121 * (iSlow2374 ^ (iSlow2374 >> 9)) + 10007) & 16777215;
		int iSlow2376 = iSlow2 + 49889;
		int iSlow2377 = (127 * ((iSlow2376 & 16777215) ^ ((40503 * (iSlow2376 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2378 = (125 * (iSlow2377 ^ (iSlow2377 >> 11)) + 52711) & 16777215;
		int iSlow2379 = (121 * (iSlow2378 ^ (iSlow2378 >> 9)) + 10007) & 16777215;
		float fSlow2380 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2379 ^ (iSlow2379 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2375 ^ (iSlow2375 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2371 ^ (iSlow2371 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2381 = 0.63661975f / fSlow2380;
		int iSlow2382 = iSlow2 + 51723;
		int iSlow2383 = (127 * ((iSlow2382 & 16777215) ^ ((40503 * (iSlow2382 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2384 = (125 * (iSlow2383 ^ (iSlow2383 >> 11)) + 52711) & 16777215;
		int iSlow2385 = (121 * (iSlow2384 ^ (iSlow2384 >> 9)) + 10007) & 16777215;
		int iSlow2386 = iSlow2 + 51592;
		int iSlow2387 = (127 * ((iSlow2386 & 16777215) ^ ((40503 * (iSlow2386 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2388 = (125 * (iSlow2387 ^ (iSlow2387 >> 11)) + 52711) & 16777215;
		int iSlow2389 = (121 * (iSlow2388 ^ (iSlow2388 >> 9)) + 10007) & 16777215;
		int iSlow2390 = iSlow2 + 51461;
		int iSlow2391 = (127 * ((iSlow2390 & 16777215) ^ ((40503 * (iSlow2390 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2392 = (125 * (iSlow2391 ^ (iSlow2391 >> 11)) + 52711) & 16777215;
		int iSlow2393 = (121 * (iSlow2392 ^ (iSlow2392 >> 9)) + 10007) & 16777215;
		float fSlow2394 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2393 ^ (iSlow2393 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2389 ^ (iSlow2389 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2385 ^ (iSlow2385 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow2395 = 4.0f * fSlow2394;
		int iSlow2396 = iSlow2 + 52116;
		int iSlow2397 = (127 * ((iSlow2396 & 16777215) ^ ((40503 * (iSlow2396 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2398 = (125 * (iSlow2397 ^ (iSlow2397 >> 11)) + 52711) & 16777215;
		int iSlow2399 = (121 * (iSlow2398 ^ (iSlow2398 >> 9)) + 10007) & 16777215;
		int iSlow2400 = iSlow2 + 51985;
		int iSlow2401 = (127 * ((iSlow2400 & 16777215) ^ ((40503 * (iSlow2400 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2402 = (125 * (iSlow2401 ^ (iSlow2401 >> 11)) + 52711) & 16777215;
		int iSlow2403 = (121 * (iSlow2402 ^ (iSlow2402 >> 9)) + 10007) & 16777215;
		int iSlow2404 = iSlow2 + 51854;
		int iSlow2405 = (127 * ((iSlow2404 & 16777215) ^ ((40503 * (iSlow2404 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2406 = (125 * (iSlow2405 ^ (iSlow2405 >> 11)) + 52711) & 16777215;
		int iSlow2407 = (121 * (iSlow2406 ^ (iSlow2406 >> 9)) + 10007) & 16777215;
		float fSlow2408 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow2407 ^ (iSlow2407 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2403 ^ (iSlow2403 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2399 ^ (iSlow2399 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow2409 = 4e+01f * fSlow2394;
		int iSlow2410 = iSlow2 + 53164;
		int iSlow2411 = (127 * ((iSlow2410 & 16777215) ^ ((40503 * (iSlow2410 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2412 = (125 * (iSlow2411 ^ (iSlow2411 >> 11)) + 52711) & 16777215;
		int iSlow2413 = (121 * (iSlow2412 ^ (iSlow2412 >> 9)) + 10007) & 16777215;
		float fSlow2414 = float((113 * (iSlow2413 ^ (iSlow2413 >> 12)) + 3571) & 16777215);
		float fSlow2415 = 8.613662e-07f * fSlow2414;
		float fSlow2416 = std::sin(fSlow2415);
		float fSlow2417 = std::cos(fSlow2415);
		int iSlow2418 = iSlow2 + 53426;
		int iSlow2419 = (127 * ((iSlow2418 & 16777215) ^ ((40503 * (iSlow2418 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2420 = (125 * (iSlow2419 ^ (iSlow2419 >> 11)) + 52711) & 16777215;
		int iSlow2421 = (121 * (iSlow2420 ^ (iSlow2420 >> 9)) + 10007) & 16777215;
		float fSlow2422 = 2.3841858e-08f * float((113 * (iSlow2421 ^ (iSlow2421 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2423 = fConst87 * fSlow2422;
		float fSlow2424 = 6.366619e-07f * fSlow2414;
		float fSlow2425 = std::sin(fSlow2424);
		float fSlow2426 = std::cos(fSlow2424);
		float fSlow2427 = 0.013081228f / fSlow2422;
		int iSlow2428 = iSlow2 + 53295;
		int iSlow2429 = (127 * ((iSlow2428 & 16777215) ^ ((40503 * (iSlow2428 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2430 = (125 * (iSlow2429 ^ (iSlow2429 >> 11)) + 52711) & 16777215;
		int iSlow2431 = (121 * (iSlow2430 ^ (iSlow2430 >> 9)) + 10007) & 16777215;
		float fSlow2432 = 2.3841858e-08f * float((113 * (iSlow2431 ^ (iSlow2431 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2433 = fConst88 * fSlow2432;
		float fSlow2434 = 3.7450704e-07f * fSlow2414;
		float fSlow2435 = std::sin(fSlow2434);
		float fSlow2436 = std::cos(fSlow2434);
		float fSlow2437 = 0.18506388f / fSlow2432;
		int iSlow2438 = iSlow2 + 48972;
		int iSlow2439 = (127 * ((iSlow2438 & 16777215) ^ ((40503 * (iSlow2438 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2440 = (125 * (iSlow2439 ^ (iSlow2439 >> 11)) + 52711) & 16777215;
		int iSlow2441 = (121 * (iSlow2440 ^ (iSlow2440 >> 9)) + 10007) & 16777215;
		int iSlow2442 = iSlow2 + 48841;
		int iSlow2443 = (127 * ((iSlow2442 & 16777215) ^ ((40503 * (iSlow2442 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2444 = (125 * (iSlow2443 ^ (iSlow2443 >> 11)) + 52711) & 16777215;
		int iSlow2445 = (121 * (iSlow2444 ^ (iSlow2444 >> 9)) + 10007) & 16777215;
		int iSlow2446 = iSlow2 + 48710;
		int iSlow2447 = (127 * ((iSlow2446 & 16777215) ^ ((40503 * (iSlow2446 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2448 = (125 * (iSlow2447 ^ (iSlow2447 >> 11)) + 52711) & 16777215;
		int iSlow2449 = (121 * (iSlow2448 ^ (iSlow2448 >> 9)) + 10007) & 16777215;
		float fSlow2450 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2449 ^ (iSlow2449 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2445 ^ (iSlow2445 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2441 ^ (iSlow2441 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2451 = fSlow2304 * (fSlow2304 + fSlow2306) + 1.0f;
		float fSlow2452 = fSlow2274 * (fSlow2274 + fSlow2276) + 1.0f;
		float fSlow2453 = 1.0f - fSlow2205;
		int iSlow2454 = iSlow2 + 63572;
		int iSlow2455 = (127 * ((iSlow2454 & 16777215) ^ ((40503 * (iSlow2454 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2456 = (125 * (iSlow2455 ^ (iSlow2455 >> 11)) + 52711) & 16777215;
		int iSlow2457 = (121 * (iSlow2456 ^ (iSlow2456 >> 9)) + 10007) & 16777215;
		int iSlow2458 = iSlow2 + 63441;
		int iSlow2459 = (127 * ((iSlow2458 & 16777215) ^ ((40503 * (iSlow2458 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2460 = (125 * (iSlow2459 ^ (iSlow2459 >> 11)) + 52711) & 16777215;
		int iSlow2461 = (121 * (iSlow2460 ^ (iSlow2460 >> 9)) + 10007) & 16777215;
		int iSlow2462 = iSlow2 + 63310;
		int iSlow2463 = (127 * ((iSlow2462 & 16777215) ^ ((40503 * (iSlow2462 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2464 = (125 * (iSlow2463 ^ (iSlow2463 >> 11)) + 52711) & 16777215;
		int iSlow2465 = (121 * (iSlow2464 ^ (iSlow2464 >> 9)) + 10007) & 16777215;
		float fSlow2466 = 0.9f * fSlow245 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2465 ^ (iSlow2465 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2461 ^ (iSlow2461 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2457 ^ (iSlow2457 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2467 = iSlow2 + 64751;
		int iSlow2468 = (127 * ((iSlow2467 & 16777215) ^ ((40503 * (iSlow2467 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2469 = (125 * (iSlow2468 ^ (iSlow2468 >> 11)) + 52711) & 16777215;
		int iSlow2470 = (121 * (iSlow2469 ^ (iSlow2469 >> 9)) + 10007) & 16777215;
		int iSlow2471 = iSlow2 + 64620;
		int iSlow2472 = (127 * ((iSlow2471 & 16777215) ^ ((40503 * (iSlow2471 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2473 = (125 * (iSlow2472 ^ (iSlow2472 >> 11)) + 52711) & 16777215;
		int iSlow2474 = (121 * (iSlow2473 ^ (iSlow2473 >> 9)) + 10007) & 16777215;
		int iSlow2475 = iSlow2 + 64489;
		int iSlow2476 = (127 * ((iSlow2475 & 16777215) ^ ((40503 * (iSlow2475 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2477 = (125 * (iSlow2476 ^ (iSlow2476 >> 11)) + 52711) & 16777215;
		int iSlow2478 = (121 * (iSlow2477 ^ (iSlow2477 >> 9)) + 10007) & 16777215;
		float fSlow2479 = 0.5f * std::exp(0.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2478 ^ (iSlow2478 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2474 ^ (iSlow2474 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2470 ^ (iSlow2470 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2480 = iSlow2 + 63965;
		int iSlow2481 = (127 * ((iSlow2480 & 16777215) ^ ((40503 * (iSlow2480 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2482 = (125 * (iSlow2481 ^ (iSlow2481 >> 11)) + 52711) & 16777215;
		int iSlow2483 = (121 * (iSlow2482 ^ (iSlow2482 >> 9)) + 10007) & 16777215;
		int iSlow2484 = iSlow2 + 63834;
		int iSlow2485 = (127 * ((iSlow2484 & 16777215) ^ ((40503 * (iSlow2484 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2486 = (125 * (iSlow2485 ^ (iSlow2485 >> 11)) + 52711) & 16777215;
		int iSlow2487 = (121 * (iSlow2486 ^ (iSlow2486 >> 9)) + 10007) & 16777215;
		int iSlow2488 = iSlow2 + 63703;
		int iSlow2489 = (127 * ((iSlow2488 & 16777215) ^ ((40503 * (iSlow2488 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2490 = (125 * (iSlow2489 ^ (iSlow2489 >> 11)) + 52711) & 16777215;
		int iSlow2491 = (121 * (iSlow2490 ^ (iSlow2490 >> 9)) + 10007) & 16777215;
		float fSlow2492 = 1.1641532e-10f * fSlow231 * std::exp(1.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2491 ^ (iSlow2491 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2487 ^ (iSlow2487 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2483 ^ (iSlow2483 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2493 = iSlow2 + 65537;
		int iSlow2494 = (127 * ((iSlow2493 & 16777215) ^ ((40503 * (iSlow2493 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2495 = (125 * (iSlow2494 ^ (iSlow2494 >> 11)) + 52711) & 16777215;
		int iSlow2496 = (121 * (iSlow2495 ^ (iSlow2495 >> 9)) + 10007) & 16777215;
		int iSlow2497 = iSlow2 + 65406;
		int iSlow2498 = (127 * ((iSlow2497 & 16777215) ^ ((40503 * (iSlow2497 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2499 = (125 * (iSlow2498 ^ (iSlow2498 >> 11)) + 52711) & 16777215;
		int iSlow2500 = (121 * (iSlow2499 ^ (iSlow2499 >> 9)) + 10007) & 16777215;
		int iSlow2501 = iSlow2 + 65275;
		int iSlow2502 = (127 * ((iSlow2501 & 16777215) ^ ((40503 * (iSlow2501 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2503 = (125 * (iSlow2502 ^ (iSlow2502 >> 11)) + 52711) & 16777215;
		int iSlow2504 = (121 * (iSlow2503 ^ (iSlow2503 >> 9)) + 10007) & 16777215;
		float fSlow2505 = std::exp(fSlow15 * (5.9604645e-08f * (float((113 * (iSlow2504 ^ (iSlow2504 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2500 ^ (iSlow2500 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2496 ^ (iSlow2496 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2506 = 0.001f * fSlow277 * fSlow2505;
		int iSlow2507 = std::fabs(fSlow2506) < 1.1920929e-07f;
		float fSlow2508 = ((iSlow2507) ? 0.0f : std::exp(-(fConst15 / ((iSlow2507) ? 1.0f : fSlow2506))));
		float fSlow2509 = 0.001f * fSlow281 * fSlow2505;
		int iSlow2510 = std::fabs(fSlow2509) < 1.1920929e-07f;
		float fSlow2511 = ((iSlow2510) ? 0.0f : std::exp(-(fConst15 / ((iSlow2510) ? 1.0f : fSlow2509))));
		int iSlow2512 = iSlow2 + 62000;
		int iSlow2513 = (127 * ((iSlow2512 & 16777215) ^ ((40503 * (iSlow2512 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2514 = (125 * (iSlow2513 ^ (iSlow2513 >> 11)) + 52711) & 16777215;
		int iSlow2515 = (121 * (iSlow2514 ^ (iSlow2514 >> 9)) + 10007) & 16777215;
		float fSlow2516 = float((5.9604645e-08f * float((113 * (iSlow2515 ^ (iSlow2515 >> 12)) + 3571) & 16777215)) < fSlow304);
		float fSlow2517 = 1.2732395f * fSlow2516;
		int iSlow2518 = iSlow2 + 60952;
		int iSlow2519 = (127 * ((iSlow2518 & 16777215) ^ ((40503 * (iSlow2518 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2520 = (125 * (iSlow2519 ^ (iSlow2519 >> 11)) + 52711) & 16777215;
		int iSlow2521 = (121 * (iSlow2520 ^ (iSlow2520 >> 9)) + 10007) & 16777215;
		float fSlow2522 = 5.9604645e-08f * float((113 * (iSlow2521 ^ (iSlow2521 >> 12)) + 3571) & 16777215);
		float fSlow2523 = std::min<float>(2.0f, fSlow320 + float(2 * (fSlow2522 < fSlow319) + ((fSlow2522 >= fSlow319) & (fSlow2522 < fSlow313))));
		float fSlow2524 = fSlow2523 + 1.0f;
		float fSlow2525 = std::pow(0.029994002f / fSlow2524 * fSlow311, 0.8f);
		int iSlow2526 = iSlow2 + 56105;
		int iSlow2527 = (127 * ((iSlow2526 & 16777215) ^ ((40503 * (iSlow2526 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2528 = (125 * (iSlow2527 ^ (iSlow2527 >> 11)) + 52711) & 16777215;
		int iSlow2529 = (121 * (iSlow2528 ^ (iSlow2528 >> 9)) + 10007) & 16777215;
		int iSlow2530 = iSlow2 + 55974;
		int iSlow2531 = (127 * ((iSlow2530 & 16777215) ^ ((40503 * (iSlow2530 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2532 = (125 * (iSlow2531 ^ (iSlow2531 >> 11)) + 52711) & 16777215;
		int iSlow2533 = (121 * (iSlow2532 ^ (iSlow2532 >> 9)) + 10007) & 16777215;
		int iSlow2534 = iSlow2 + 55843;
		int iSlow2535 = (127 * ((iSlow2534 & 16777215) ^ ((40503 * (iSlow2534 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2536 = (125 * (iSlow2535 ^ (iSlow2535 >> 11)) + 52711) & 16777215;
		int iSlow2537 = (121 * (iSlow2536 ^ (iSlow2536 >> 9)) + 10007) & 16777215;
		float fSlow2538 = fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow2537 ^ (iSlow2537 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2533 ^ (iSlow2533 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2529 ^ (iSlow2529 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2539 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow2538) * fSlow2525));
		float fSlow2540 = (1.0f / fSlow2539 + 0.5176381f) / fSlow2539 + 1.0f;
		float fSlow2541 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-(0.3f * fSlow2538)) * fSlow2525));
		float fSlow2542 = 1.0f / fSlow2541;
		float fSlow2543 = (fSlow2542 + 0.5176381f) / fSlow2541 + 1.0f;
		float fSlow2544 = 1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2541);
		float fSlow2545 = (fSlow2542 + -0.5176381f) / fSlow2541 + 1.0f;
		float fSlow2546 = (fSlow2542 + 1.4142135f) / fSlow2541 + 1.0f;
		float fSlow2547 = (fSlow2542 + -1.4142135f) / fSlow2541 + 1.0f;
		float fSlow2548 = (fSlow2542 + 1.9318516f) / fSlow2541 + 1.0f;
		float fSlow2549 = (fSlow2542 + -1.9318516f) / fSlow2541 + 1.0f;
		int iSlow2550 = iSlow2 + 56498;
		int iSlow2551 = (127 * ((iSlow2550 & 16777215) ^ ((40503 * (iSlow2550 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2552 = (125 * (iSlow2551 ^ (iSlow2551 >> 11)) + 52711) & 16777215;
		int iSlow2553 = (121 * (iSlow2552 ^ (iSlow2552 >> 9)) + 10007) & 16777215;
		int iSlow2554 = iSlow2 + 56367;
		int iSlow2555 = (127 * ((iSlow2554 & 16777215) ^ ((40503 * (iSlow2554 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2556 = (125 * (iSlow2555 ^ (iSlow2555 >> 11)) + 52711) & 16777215;
		int iSlow2557 = (121 * (iSlow2556 ^ (iSlow2556 >> 9)) + 10007) & 16777215;
		int iSlow2558 = iSlow2 + 56236;
		int iSlow2559 = (127 * ((iSlow2558 & 16777215) ^ ((40503 * (iSlow2558 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2560 = (125 * (iSlow2559 ^ (iSlow2559 >> 11)) + 52711) & 16777215;
		int iSlow2561 = (121 * (iSlow2560 ^ (iSlow2560 >> 9)) + 10007) & 16777215;
		float fSlow2562 = std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2561 ^ (iSlow2561 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2557 ^ (iSlow2557 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2553 ^ (iSlow2553 >> 12)) + 3571) & 16777215)) + -1.5f)) * std::pow(1.41f, fSlow2523 - fSlow320);
		int iSlow2563 = iSlow2 + 59249;
		int iSlow2564 = (127 * ((iSlow2563 & 16777215) ^ ((40503 * (iSlow2563 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2565 = (125 * (iSlow2564 ^ (iSlow2564 >> 11)) + 52711) & 16777215;
		int iSlow2566 = (121 * (iSlow2565 ^ (iSlow2565 >> 9)) + 10007) & 16777215;
		int iSlow2567 = iSlow2 + 59118;
		int iSlow2568 = (127 * ((iSlow2567 & 16777215) ^ ((40503 * (iSlow2567 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2569 = (125 * (iSlow2568 ^ (iSlow2568 >> 11)) + 52711) & 16777215;
		int iSlow2570 = (121 * (iSlow2569 ^ (iSlow2569 >> 9)) + 10007) & 16777215;
		int iSlow2571 = iSlow2 + 58987;
		int iSlow2572 = (127 * ((iSlow2571 & 16777215) ^ ((40503 * (iSlow2571 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2573 = (125 * (iSlow2572 ^ (iSlow2572 >> 11)) + 52711) & 16777215;
		int iSlow2574 = (121 * (iSlow2573 ^ (iSlow2573 >> 9)) + 10007) & 16777215;
		float fSlow2575 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2574 ^ (iSlow2574 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2570 ^ (iSlow2570 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2566 ^ (iSlow2566 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow2576 = fSlow2575 > 0.0f;
		int iSlow2577 = iSlow2 + 60821;
		int iSlow2578 = (127 * ((iSlow2577 & 16777215) ^ ((40503 * (iSlow2577 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2579 = (125 * (iSlow2578 ^ (iSlow2578 >> 11)) + 52711) & 16777215;
		int iSlow2580 = (121 * (iSlow2579 ^ (iSlow2579 >> 9)) + 10007) & 16777215;
		float fSlow2581 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow2580 ^ (iSlow2580 >> 12)) + 3571) & 16777215));
		float fSlow2582 = std::sin(fConst59 * fSlow2581);
		float fSlow2583 = fConst60 * (fSlow2581 * std::pow(1e+01f, 0.05f * std::fabs(fSlow2575)) / fSlow2582);
		float fSlow2584 = fConst60 * (fSlow2581 / fSlow2582);
		float fSlow2585 = ((iSlow2576) ? fSlow2584 : fSlow2583);
		float fSlow2586 = std::tan(fConst61 * fSlow2581);
		float fSlow2587 = 1.0f / fSlow2586;
		float fSlow2588 = fSlow2587 * (fSlow2587 + fSlow2585) + 1.0f;
		float fSlow2589 = ((iSlow2576) ? fSlow2583 : fSlow2584);
		float fSlow2590 = fSlow2587 * (fSlow2587 - fSlow2589) + 1.0f;
		float fSlow2591 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2586));
		float fSlow2592 = fSlow2587 * (fSlow2587 - fSlow2585) + 1.0f;
		int iSlow2593 = iSlow2 + 58856;
		int iSlow2594 = (127 * ((iSlow2593 & 16777215) ^ ((40503 * (iSlow2593 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2595 = (125 * (iSlow2594 ^ (iSlow2594 >> 11)) + 52711) & 16777215;
		int iSlow2596 = (121 * (iSlow2595 ^ (iSlow2595 >> 9)) + 10007) & 16777215;
		int iSlow2597 = iSlow2 + 58725;
		int iSlow2598 = (127 * ((iSlow2597 & 16777215) ^ ((40503 * (iSlow2597 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2599 = (125 * (iSlow2598 ^ (iSlow2598 >> 11)) + 52711) & 16777215;
		int iSlow2600 = (121 * (iSlow2599 ^ (iSlow2599 >> 9)) + 10007) & 16777215;
		int iSlow2601 = iSlow2 + 58594;
		int iSlow2602 = (127 * ((iSlow2601 & 16777215) ^ ((40503 * (iSlow2601 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2603 = (125 * (iSlow2602 ^ (iSlow2602 >> 11)) + 52711) & 16777215;
		int iSlow2604 = (121 * (iSlow2603 ^ (iSlow2603 >> 9)) + 10007) & 16777215;
		float fSlow2605 = 4.4f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2604 ^ (iSlow2604 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2600 ^ (iSlow2600 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2596 ^ (iSlow2596 >> 12)) + 3571) & 16777215)) + -1.5f);
		int iSlow2606 = fSlow2605 > 0.0f;
		int iSlow2607 = iSlow2 + 60690;
		int iSlow2608 = (127 * ((iSlow2607 & 16777215) ^ ((40503 * (iSlow2607 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2609 = (125 * (iSlow2608 ^ (iSlow2608 >> 11)) + 52711) & 16777215;
		int iSlow2610 = (121 * (iSlow2609 ^ (iSlow2609 >> 9)) + 10007) & 16777215;
		float fSlow2611 = std::pow(2.0f, 1.9669532e-07f * float((113 * (iSlow2610 ^ (iSlow2610 >> 12)) + 3571) & 16777215));
		float fSlow2612 = std::sin(fConst59 * fSlow2611);
		float fSlow2613 = fConst62 * (fSlow2611 * std::pow(1e+01f, 0.05f * std::fabs(fSlow2605)) / fSlow2612);
		float fSlow2614 = fConst62 * (fSlow2611 / fSlow2612);
		float fSlow2615 = ((iSlow2606) ? fSlow2614 : fSlow2613);
		float fSlow2616 = std::tan(fConst61 * fSlow2611);
		float fSlow2617 = 1.0f / fSlow2616;
		float fSlow2618 = fSlow2617 * (fSlow2617 + fSlow2615) + 1.0f;
		float fSlow2619 = ((iSlow2606) ? fSlow2613 : fSlow2614);
		float fSlow2620 = fSlow2617 * (fSlow2617 - fSlow2619) + 1.0f;
		float fSlow2621 = 2.0f * (1.0f - 1.0f / VhsDsp_faustpower2_f(fSlow2616));
		float fSlow2622 = fSlow2617 * (fSlow2617 - fSlow2615) + 1.0f;
		int iSlow2623 = iSlow2 + 57284;
		int iSlow2624 = (127 * ((iSlow2623 & 16777215) ^ ((40503 * (iSlow2623 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2625 = (125 * (iSlow2624 ^ (iSlow2624 >> 11)) + 52711) & 16777215;
		int iSlow2626 = (121 * (iSlow2625 ^ (iSlow2625 >> 9)) + 10007) & 16777215;
		int iSlow2627 = iSlow2 + 57153;
		int iSlow2628 = (127 * ((iSlow2627 & 16777215) ^ ((40503 * (iSlow2627 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2629 = (125 * (iSlow2628 ^ (iSlow2628 >> 11)) + 52711) & 16777215;
		int iSlow2630 = (121 * (iSlow2629 ^ (iSlow2629 >> 9)) + 10007) & 16777215;
		int iSlow2631 = iSlow2 + 57022;
		int iSlow2632 = (127 * ((iSlow2631 & 16777215) ^ ((40503 * (iSlow2631 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2633 = (125 * (iSlow2632 ^ (iSlow2632 >> 11)) + 52711) & 16777215;
		int iSlow2634 = (121 * (iSlow2633 ^ (iSlow2633 >> 9)) + 10007) & 16777215;
		float fSlow2635 = std::exp(2.0f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2634 ^ (iSlow2634 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2630 ^ (iSlow2630 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2626 ^ (iSlow2626 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2636 = fConst12 * fSlow435 * fSlow2635;
		float fSlow2637 = fSlow439 * fSlow2635;
		float fSlow2638 = fConst12 * fSlow2637;
		float fSlow2639 = fConst73 * fSlow2637;
		int iSlow2640 = iSlow2 + 57677;
		int iSlow2641 = (127 * ((iSlow2640 & 16777215) ^ ((40503 * (iSlow2640 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2642 = (125 * (iSlow2641 ^ (iSlow2641 >> 11)) + 52711) & 16777215;
		int iSlow2643 = (121 * (iSlow2642 ^ (iSlow2642 >> 9)) + 10007) & 16777215;
		int iSlow2644 = iSlow2 + 57546;
		int iSlow2645 = (127 * ((iSlow2644 & 16777215) ^ ((40503 * (iSlow2644 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2646 = (125 * (iSlow2645 ^ (iSlow2645 >> 11)) + 52711) & 16777215;
		int iSlow2647 = (121 * (iSlow2646 ^ (iSlow2646 >> 9)) + 10007) & 16777215;
		int iSlow2648 = iSlow2 + 57415;
		int iSlow2649 = (127 * ((iSlow2648 & 16777215) ^ ((40503 * (iSlow2648 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2650 = (125 * (iSlow2649 ^ (iSlow2649 >> 11)) + 52711) & 16777215;
		int iSlow2651 = (121 * (iSlow2650 ^ (iSlow2650 >> 9)) + 10007) & 16777215;
		float fSlow2652 = 0.006f * fSlow455 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2651 ^ (iSlow2651 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2647 ^ (iSlow2647 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2643 ^ (iSlow2643 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2653 = 0.121492326f / fSlow2524;
		int iSlow2654 = iSlow2 + 55712;
		int iSlow2655 = (127 * ((iSlow2654 & 16777215) ^ ((40503 * (iSlow2654 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2656 = (125 * (iSlow2655 ^ (iSlow2655 >> 11)) + 52711) & 16777215;
		int iSlow2657 = (121 * (iSlow2656 ^ (iSlow2656 >> 9)) + 10007) & 16777215;
		int iSlow2658 = iSlow2 + 55581;
		int iSlow2659 = (127 * ((iSlow2658 & 16777215) ^ ((40503 * (iSlow2658 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2660 = (125 * (iSlow2659 ^ (iSlow2659 >> 11)) + 52711) & 16777215;
		int iSlow2661 = (121 * (iSlow2660 ^ (iSlow2660 >> 9)) + 10007) & 16777215;
		int iSlow2662 = iSlow2 + 55450;
		int iSlow2663 = (127 * ((iSlow2662 & 16777215) ^ ((40503 * (iSlow2662 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2664 = (125 * (iSlow2663 ^ (iSlow2663 >> 11)) + 52711) & 16777215;
		int iSlow2665 = (121 * (iSlow2664 ^ (iSlow2664 >> 9)) + 10007) & 16777215;
		float fSlow2666 = fSlow471 * std::exp(1.8f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2665 ^ (iSlow2665 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2661 ^ (iSlow2661 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2657 ^ (iSlow2657 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2667 = fConst0 * fSlow2524;
		int iSlow2668 = iSlow2 + 58463;
		int iSlow2669 = (127 * ((iSlow2668 & 16777215) ^ ((40503 * (iSlow2668 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2670 = (125 * (iSlow2669 ^ (iSlow2669 >> 11)) + 52711) & 16777215;
		int iSlow2671 = (121 * (iSlow2670 ^ (iSlow2670 >> 9)) + 10007) & 16777215;
		int iSlow2672 = iSlow2 + 58332;
		int iSlow2673 = (127 * ((iSlow2672 & 16777215) ^ ((40503 * (iSlow2672 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2674 = (125 * (iSlow2673 ^ (iSlow2673 >> 11)) + 52711) & 16777215;
		int iSlow2675 = (121 * (iSlow2674 ^ (iSlow2674 >> 9)) + 10007) & 16777215;
		int iSlow2676 = iSlow2 + 58201;
		int iSlow2677 = (127 * ((iSlow2676 & 16777215) ^ ((40503 * (iSlow2676 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2678 = (125 * (iSlow2677 ^ (iSlow2677 >> 11)) + 52711) & 16777215;
		int iSlow2679 = (121 * (iSlow2678 ^ (iSlow2678 >> 9)) + 10007) & 16777215;
		float fSlow2680 = std::exp(1.2f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2679 ^ (iSlow2679 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2675 ^ (iSlow2675 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2671 ^ (iSlow2671 >> 12)) + 3571) & 16777215)) + -1.5f));
		int iSlow2681 = iSlow2 + 58070;
		int iSlow2682 = (127 * ((iSlow2681 & 16777215) ^ ((40503 * (iSlow2681 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2683 = (125 * (iSlow2682 ^ (iSlow2682 >> 11)) + 52711) & 16777215;
		int iSlow2684 = (121 * (iSlow2683 ^ (iSlow2683 >> 9)) + 10007) & 16777215;
		int iSlow2685 = iSlow2 + 57939;
		int iSlow2686 = (127 * ((iSlow2685 & 16777215) ^ ((40503 * (iSlow2685 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2687 = (125 * (iSlow2686 ^ (iSlow2686 >> 11)) + 52711) & 16777215;
		int iSlow2688 = (121 * (iSlow2687 ^ (iSlow2687 >> 9)) + 10007) & 16777215;
		int iSlow2689 = iSlow2 + 57808;
		int iSlow2690 = (127 * ((iSlow2689 & 16777215) ^ ((40503 * (iSlow2689 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2691 = (125 * (iSlow2690 ^ (iSlow2690 >> 11)) + 52711) & 16777215;
		int iSlow2692 = (121 * (iSlow2691 ^ (iSlow2691 >> 9)) + 10007) & 16777215;
		float fSlow2693 = std::pow(1e+01f, 0.25f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2692 ^ (iSlow2692 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2688 ^ (iSlow2688 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2684 ^ (iSlow2684 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2694 = 0.63661975f / fSlow2693;
		int iSlow2695 = iSlow2 + 59642;
		int iSlow2696 = (127 * ((iSlow2695 & 16777215) ^ ((40503 * (iSlow2695 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2697 = (125 * (iSlow2696 ^ (iSlow2696 >> 11)) + 52711) & 16777215;
		int iSlow2698 = (121 * (iSlow2697 ^ (iSlow2697 >> 9)) + 10007) & 16777215;
		int iSlow2699 = iSlow2 + 59511;
		int iSlow2700 = (127 * ((iSlow2699 & 16777215) ^ ((40503 * (iSlow2699 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2701 = (125 * (iSlow2700 ^ (iSlow2700 >> 11)) + 52711) & 16777215;
		int iSlow2702 = (121 * (iSlow2701 ^ (iSlow2701 >> 9)) + 10007) & 16777215;
		int iSlow2703 = iSlow2 + 59380;
		int iSlow2704 = (127 * ((iSlow2703 & 16777215) ^ ((40503 * (iSlow2703 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2705 = (125 * (iSlow2704 ^ (iSlow2704 >> 11)) + 52711) & 16777215;
		int iSlow2706 = (121 * (iSlow2705 ^ (iSlow2705 >> 9)) + 10007) & 16777215;
		float fSlow2707 = std::min<float>(1.0f, fSlow521 * std::exp(fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2706 ^ (iSlow2706 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2702 ^ (iSlow2702 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2698 ^ (iSlow2698 >> 12)) + 3571) & 16777215)) + -1.5f)));
		float fSlow2708 = 4.0f * fSlow2707;
		int iSlow2709 = iSlow2 + 60035;
		int iSlow2710 = (127 * ((iSlow2709 & 16777215) ^ ((40503 * (iSlow2709 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2711 = (125 * (iSlow2710 ^ (iSlow2710 >> 11)) + 52711) & 16777215;
		int iSlow2712 = (121 * (iSlow2711 ^ (iSlow2711 >> 9)) + 10007) & 16777215;
		int iSlow2713 = iSlow2 + 59904;
		int iSlow2714 = (127 * ((iSlow2713 & 16777215) ^ ((40503 * (iSlow2713 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2715 = (125 * (iSlow2714 ^ (iSlow2714 >> 11)) + 52711) & 16777215;
		int iSlow2716 = (121 * (iSlow2715 ^ (iSlow2715 >> 9)) + 10007) & 16777215;
		int iSlow2717 = iSlow2 + 59773;
		int iSlow2718 = (127 * ((iSlow2717 & 16777215) ^ ((40503 * (iSlow2717 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2719 = (125 * (iSlow2718 ^ (iSlow2718 >> 11)) + 52711) & 16777215;
		int iSlow2720 = (121 * (iSlow2719 ^ (iSlow2719 >> 9)) + 10007) & 16777215;
		float fSlow2721 = fSlow536 * std::exp(-(0.3f * fSlow32 * std::fabs(2.0f * (5.9604645e-08f * (float((113 * (iSlow2720 ^ (iSlow2720 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2716 ^ (iSlow2716 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2712 ^ (iSlow2712 >> 12)) + 3571) & 16777215)) + -1.5f))));
		float fSlow2722 = 4e+01f * fSlow2707;
		int iSlow2723 = iSlow2 + 61083;
		int iSlow2724 = (127 * ((iSlow2723 & 16777215) ^ ((40503 * (iSlow2723 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2725 = (125 * (iSlow2724 ^ (iSlow2724 >> 11)) + 52711) & 16777215;
		int iSlow2726 = (121 * (iSlow2725 ^ (iSlow2725 >> 9)) + 10007) & 16777215;
		float fSlow2727 = float((113 * (iSlow2726 ^ (iSlow2726 >> 12)) + 3571) & 16777215);
		float fSlow2728 = 8.613662e-07f * fSlow2727;
		float fSlow2729 = std::sin(fSlow2728);
		float fSlow2730 = std::cos(fSlow2728);
		int iSlow2731 = iSlow2 + 61345;
		int iSlow2732 = (127 * ((iSlow2731 & 16777215) ^ ((40503 * (iSlow2731 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2733 = (125 * (iSlow2732 ^ (iSlow2732 >> 11)) + 52711) & 16777215;
		int iSlow2734 = (121 * (iSlow2733 ^ (iSlow2733 >> 9)) + 10007) & 16777215;
		float fSlow2735 = 2.3841858e-08f * float((113 * (iSlow2734 ^ (iSlow2734 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2736 = fConst87 * fSlow2735;
		float fSlow2737 = 6.366619e-07f * fSlow2727;
		float fSlow2738 = std::sin(fSlow2737);
		float fSlow2739 = std::cos(fSlow2737);
		float fSlow2740 = 0.013081228f / fSlow2735;
		int iSlow2741 = iSlow2 + 61214;
		int iSlow2742 = (127 * ((iSlow2741 & 16777215) ^ ((40503 * (iSlow2741 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2743 = (125 * (iSlow2742 ^ (iSlow2742 >> 11)) + 52711) & 16777215;
		int iSlow2744 = (121 * (iSlow2743 ^ (iSlow2743 >> 9)) + 10007) & 16777215;
		float fSlow2745 = 2.3841858e-08f * float((113 * (iSlow2744 ^ (iSlow2744 >> 12)) + 3571) & 16777215) + 0.8f;
		float fSlow2746 = fConst88 * fSlow2745;
		float fSlow2747 = 3.7450704e-07f * fSlow2727;
		float fSlow2748 = std::sin(fSlow2747);
		float fSlow2749 = std::cos(fSlow2747);
		float fSlow2750 = 0.18506388f / fSlow2745;
		int iSlow2751 = iSlow2 + 56891;
		int iSlow2752 = (127 * ((iSlow2751 & 16777215) ^ ((40503 * (iSlow2751 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2753 = (125 * (iSlow2752 ^ (iSlow2752 >> 11)) + 52711) & 16777215;
		int iSlow2754 = (121 * (iSlow2753 ^ (iSlow2753 >> 9)) + 10007) & 16777215;
		int iSlow2755 = iSlow2 + 56760;
		int iSlow2756 = (127 * ((iSlow2755 & 16777215) ^ ((40503 * (iSlow2755 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2757 = (125 * (iSlow2756 ^ (iSlow2756 >> 11)) + 52711) & 16777215;
		int iSlow2758 = (121 * (iSlow2757 ^ (iSlow2757 >> 9)) + 10007) & 16777215;
		int iSlow2759 = iSlow2 + 56629;
		int iSlow2760 = (127 * ((iSlow2759 & 16777215) ^ ((40503 * (iSlow2759 >> 24)) & 16777215)) + 8191) & 16777215;
		int iSlow2761 = (125 * (iSlow2760 ^ (iSlow2760 >> 11)) + 52711) & 16777215;
		int iSlow2762 = (121 * (iSlow2761 ^ (iSlow2761 >> 9)) + 10007) & 16777215;
		float fSlow2763 = 0.01f * fSlow583 * std::exp(1.6f * fSlow32 * (5.9604645e-08f * (float((113 * (iSlow2762 ^ (iSlow2762 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2758 ^ (iSlow2758 >> 12)) + 3571) & 16777215) + float((113 * (iSlow2754 ^ (iSlow2754 >> 12)) + 3571) & 16777215)) + -1.5f));
		float fSlow2764 = fSlow2617 * (fSlow2617 + fSlow2619) + 1.0f;
		float fSlow2765 = fSlow2587 * (fSlow2587 + fSlow2589) + 1.0f;
		float fSlow2766 = 1.0f - fSlow2516;
		float fSlow2767 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow2227) * fSlow2214));
		float fSlow2768 = (1.0f / fSlow2767 + 0.5176381f) / fSlow2767 + 1.0f;
		float fSlow2769 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow1916) * fSlow1903));
		float fSlow2770 = (1.0f / fSlow2769 + 0.5176381f) / fSlow2769 + 1.0f;
		float fSlow2771 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow1605) * fSlow1592));
		float fSlow2772 = (1.0f / fSlow2771 + 0.5176381f) / fSlow2771 + 1.0f;
		float fSlow2773 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow1294) * fSlow1281));
		float fSlow2774 = (1.0f / fSlow2773 + 0.5176381f) / fSlow2773 + 1.0f;
		float fSlow2775 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow983) * fSlow970));
		float fSlow2776 = (1.0f / fSlow2775 + 0.5176381f) / fSlow2775 + 1.0f;
		float fSlow2777 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow672) * fSlow659));
		float fSlow2778 = (1.0f / fSlow2777 + 0.5176381f) / fSlow2777 + 1.0f;
		float fSlow2779 = std::tan(fConst51 * std::min<float>(fConst1, 1e+04f * fSlow337 * std::exp(-0.3f * fSlow336) * fSlow323));
		float fSlow2780 = (1.0f / fSlow2779 + 0.5176381f) / fSlow2779 + 1.0f;
		float fSlow2781 = fConst22 * float(fHslider33);
		float fSlow2782 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider34));
		float fSlow2783 = fConst22 * float(fHslider35);
		float fSlow2784 = fConst22 * float(fHslider36);
		float fSlow2785 = fConst22 * float(fHslider37);
		float fSlow2786 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider38));
		float fSlow2787 = fConst22 * std::pow(1e+01f, 0.05f * float(fHslider39));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			iRec8[0] = 1103515245 * iRec8[1] + 22359;
			fRec7[0] = fConst10 * float(iRec8[0]) + fConst8 * fRec7[1];
			fRec6[0] = fConst9 * fRec7[0] + fConst8 * fRec6[1];
			float fTemp0 = std::exp(fSlow18 * (fConst11 * fRec6[0] - fSlow19));
			iRec9[0] = 1103515245 * iRec9[1] + 30359;
			int iTemp1 = std::fabs(4.656613e-10f * float(iRec9[0])) < (fSlow34 * fTemp0);
			iRec10[0] = 1103515245 * iRec10[1] + 30587;
			iRec11[0] = 1103515245 * iRec11[1] + 30589;
			iRec12[0] = 1103515245 * iRec12[1] + 30591;
			fRec5[0] = ((iTemp1) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec12[0]) + float(iRec11[0]) + float(iRec10[0]))) : fRec5[1]);
			fRec13[0] = (fRec13[1] + 1.0f) * (1.0f - float(iTemp1));
			int iTemp2 = fRec13[0] < (fConst0 * fRec5[0]);
			iRec14[0] = std::max<int>(iRec14[1], iTemp1);
			float fTemp3 = float(iRec14[0] * iTemp2);
			float fTemp4 = 1.0f - fTemp3 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec13[0] - fConst14 * fRec5[0]) / (fConst13 * fRec5[0] + 1.0f))));
			int iTemp5 = int(1.0f - fTemp3);
			int iTemp6 = 1 - iVec0[1];
			float fTemp7 = ((iTemp6) ? 0.0f : fSlow38 + fRec17[1]);
			fRec17[0] = fTemp7 - std::floor(fTemp7);
			float fTemp8 = float(fRec17[0] < fSlow37);
			int iTemp9 = int(1.0f - fTemp8);
			iRec29[0] = 1103515245 * iRec29[1] + 22357;
			fRec28[0] = fConst10 * float(iRec29[0]) + fConst8 * fRec28[1];
			fRec27[0] = fConst9 * fRec28[0] + fConst8 * fRec27[1];
			float fTemp10 = std::exp(fSlow18 * (fConst11 * fRec27[0] - fSlow19));
			iRec30[0] = 1103515245 * iRec30[1] + 30357;
			int iTemp11 = std::fabs(4.656613e-10f * float(iRec30[0])) < (fSlow65 * fTemp10);
			iRec31[0] = 1103515245 * iRec31[1] + 30581;
			iRec32[0] = 1103515245 * iRec32[1] + 30583;
			iRec33[0] = 1103515245 * iRec33[1] + 30585;
			fRec26[0] = ((iTemp11) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec33[0]) + float(iRec32[0]) + float(iRec31[0]))) : fRec26[1]);
			fRec34[0] = (fRec34[1] + 1.0f) * (1.0f - float(iTemp11));
			int iTemp12 = fRec34[0] < (fConst0 * fRec26[0]);
			iRec35[0] = std::max<int>(iRec35[1], iTemp11);
			float fTemp13 = float(iRec35[0] * iTemp12);
			float fTemp14 = 1.0f - fTemp13 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec34[0] - fConst14 * fRec26[0]) / (fConst13 * fRec26[0] + 1.0f))));
			int iTemp15 = int(1.0f - fTemp13);
			iRec49[0] = 1103515245 * iRec49[1] + 22355;
			fRec48[0] = fConst10 * float(iRec49[0]) + fConst8 * fRec48[1];
			fRec47[0] = fConst9 * fRec48[0] + fConst8 * fRec47[1];
			float fTemp16 = std::exp(fSlow18 * (fConst11 * fRec47[0] - fSlow19));
			iRec50[0] = 1103515245 * iRec50[1] + 30355;
			int iTemp17 = std::fabs(4.656613e-10f * float(iRec50[0])) < (fSlow92 * fTemp16);
			iRec51[0] = 1103515245 * iRec51[1] + 30575;
			iRec52[0] = 1103515245 * iRec52[1] + 30577;
			iRec53[0] = 1103515245 * iRec53[1] + 30579;
			fRec46[0] = ((iTemp17) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec53[0]) + float(iRec52[0]) + float(iRec51[0]))) : fRec46[1]);
			fRec54[0] = (fRec54[1] + 1.0f) * (1.0f - float(iTemp17));
			int iTemp18 = fRec54[0] < (fConst0 * fRec46[0]);
			iRec55[0] = std::max<int>(iRec55[1], iTemp17);
			float fTemp19 = float(iRec55[0] * iTemp18);
			float fTemp20 = 1.0f - fTemp19 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec54[0] - fConst14 * fRec46[0]) / (fConst13 * fRec46[0] + 1.0f))));
			int iTemp21 = int(1.0f - fTemp19);
			iRec69[0] = 1103515245 * iRec69[1] + 22353;
			fRec68[0] = fConst10 * float(iRec69[0]) + fConst8 * fRec68[1];
			fRec67[0] = fConst9 * fRec68[0] + fConst8 * fRec67[1];
			float fTemp22 = std::exp(fSlow18 * (fConst11 * fRec67[0] - fSlow19));
			iRec70[0] = 1103515245 * iRec70[1] + 30353;
			int iTemp23 = std::fabs(4.656613e-10f * float(iRec70[0])) < (fSlow119 * fTemp22);
			iRec71[0] = 1103515245 * iRec71[1] + 30569;
			iRec72[0] = 1103515245 * iRec72[1] + 30571;
			iRec73[0] = 1103515245 * iRec73[1] + 30573;
			fRec66[0] = ((iTemp23) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec73[0]) + float(iRec72[0]) + float(iRec71[0]))) : fRec66[1]);
			fRec74[0] = (fRec74[1] + 1.0f) * (1.0f - float(iTemp23));
			int iTemp24 = fRec74[0] < (fConst0 * fRec66[0]);
			iRec75[0] = std::max<int>(iRec75[1], iTemp23);
			float fTemp25 = float(iRec75[0] * iTemp24);
			float fTemp26 = 1.0f - fTemp25 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec74[0] - fConst14 * fRec66[0]) / (fConst13 * fRec66[0] + 1.0f))));
			int iTemp27 = int(1.0f - fTemp25);
			iRec89[0] = 1103515245 * iRec89[1] + 22351;
			fRec88[0] = fConst10 * float(iRec89[0]) + fConst8 * fRec88[1];
			fRec87[0] = fConst9 * fRec88[0] + fConst8 * fRec87[1];
			float fTemp28 = std::exp(fSlow18 * (fConst11 * fRec87[0] - fSlow19));
			iRec90[0] = 1103515245 * iRec90[1] + 30351;
			int iTemp29 = std::fabs(4.656613e-10f * float(iRec90[0])) < (fSlow146 * fTemp28);
			iRec91[0] = 1103515245 * iRec91[1] + 30563;
			iRec92[0] = 1103515245 * iRec92[1] + 30565;
			iRec93[0] = 1103515245 * iRec93[1] + 30567;
			fRec86[0] = ((iTemp29) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec93[0]) + float(iRec92[0]) + float(iRec91[0]))) : fRec86[1]);
			fRec94[0] = (fRec94[1] + 1.0f) * (1.0f - float(iTemp29));
			int iTemp30 = fRec94[0] < (fConst0 * fRec86[0]);
			iRec95[0] = std::max<int>(iRec95[1], iTemp29);
			float fTemp31 = float(iRec95[0] * iTemp30);
			float fTemp32 = 1.0f - fTemp31 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec94[0] - fConst14 * fRec86[0]) / (fConst13 * fRec86[0] + 1.0f))));
			int iTemp33 = int(1.0f - fTemp31);
			iRec109[0] = 1103515245 * iRec109[1] + 22349;
			fRec108[0] = fConst10 * float(iRec109[0]) + fConst8 * fRec108[1];
			fRec107[0] = fConst9 * fRec108[0] + fConst8 * fRec107[1];
			float fTemp34 = std::exp(fSlow18 * (fConst11 * fRec107[0] - fSlow19));
			iRec110[0] = 1103515245 * iRec110[1] + 30349;
			int iTemp35 = std::fabs(4.656613e-10f * float(iRec110[0])) < (fSlow173 * fTemp34);
			iRec111[0] = 1103515245 * iRec111[1] + 30557;
			iRec112[0] = 1103515245 * iRec112[1] + 30559;
			iRec113[0] = 1103515245 * iRec113[1] + 30561;
			fRec106[0] = ((iTemp35) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec113[0]) + float(iRec112[0]) + float(iRec111[0]))) : fRec106[1]);
			fRec114[0] = (fRec114[1] + 1.0f) * (1.0f - float(iTemp35));
			int iTemp36 = fRec114[0] < (fConst0 * fRec106[0]);
			iRec115[0] = std::max<int>(iRec115[1], iTemp35);
			float fTemp37 = float(iRec115[0] * iTemp36);
			float fTemp38 = 1.0f - fTemp37 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec114[0] - fConst14 * fRec106[0]) / (fConst13 * fRec106[0] + 1.0f))));
			int iTemp39 = int(1.0f - fTemp37);
			iRec129[0] = 1103515245 * iRec129[1] + 22347;
			fRec128[0] = fConst10 * float(iRec129[0]) + fConst8 * fRec128[1];
			fRec127[0] = fConst9 * fRec128[0] + fConst8 * fRec127[1];
			float fTemp40 = std::exp(fSlow18 * (fConst11 * fRec127[0] - fSlow19));
			iRec130[0] = 1103515245 * iRec130[1] + 30347;
			int iTemp41 = std::fabs(4.656613e-10f * float(iRec130[0])) < (fSlow200 * fTemp40);
			iRec131[0] = 1103515245 * iRec131[1] + 30551;
			iRec132[0] = 1103515245 * iRec132[1] + 30553;
			iRec133[0] = 1103515245 * iRec133[1] + 30555;
			fRec126[0] = ((iTemp41) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec133[0]) + float(iRec132[0]) + float(iRec131[0]))) : fRec126[1]);
			fRec134[0] = (fRec134[1] + 1.0f) * (1.0f - float(iTemp41));
			int iTemp42 = fRec134[0] < (fConst0 * fRec126[0]);
			iRec135[0] = std::max<int>(iRec135[1], iTemp41);
			float fTemp43 = float(iRec135[0] * iTemp42);
			float fTemp44 = 1.0f - fTemp43 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec134[0] - fConst14 * fRec126[0]) / (fConst13 * fRec126[0] + 1.0f))));
			int iTemp45 = int(1.0f - fTemp43);
			iRec147[0] = 1103515245 * iRec147[1] + 12345;
			float fTemp46 = float(iRec147[0]);
			fRec146[0] = 4.656613e-10f * fTemp46 - fConst21 * (fConst19 * fRec146[2] + fConst17 * fRec146[1]);
			float fTemp47 = 2.0f * fRec146[1];
			fRec148[0] = fSlow215 + fConst23 * fRec148[1];
			fRec149[0] = fSlow216 + fConst23 * fRec149[1];
			float fTemp48 = fSlow217 * std::pow(2.0f, 0.00083333335f * fRec149[0]);
			float fTemp49 = std::min<float>(fConst1, fTemp48 * (fConst24 * fRec148[0] * (fRec146[2] + fRec146[0] + fTemp47) + 1.0f));
			float fTemp50 = ((iTemp6) ? 0.0f : fRec151[1] + fConst25 * fTemp49);
			fRec151[0] = fTemp50 - std::floor(fTemp50);
			float fTemp51 = ftbl0VhsDspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec151[0]), 65535))];
			float fTemp52 = ((iTemp6) ? 0.0f : fRec152[1] + fConst15 * fTemp49);
			fRec152[0] = fTemp52 - std::floor(fTemp52);
			float fTemp53 = ftbl0VhsDspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec152[0]), 65535))];
			fRec153[0] = fSlow218 + fConst23 * fRec153[1];
			float fTemp54 = fRec153[0] * (fTemp53 + 0.35f * fTemp51 * float((2.0f * fTemp49) < fConst1));
			iRec154[0] = 1103515245 * iRec154[1] + 31545;
			float fTemp55 = float((fRec17[0] - fRec17[1]) < 0.0f);
			fRec155[0] = fConst26 * fRec155[1] + fTemp55;
			float fTemp56 = VhsDsp_faustpower3_f(std::fabs(2.0f * fRec17[0] + -1.0f));
			iRec158[0] = 1103515245 * iRec158[1] + 31345;
			float fTemp57 = float(iRec158[0]);
			fRec157[0] = fConst29 * fTemp57 + fConst27 * fRec157[1];
			fRec156[0] = fConst28 * fRec157[0] + fConst27 * fRec156[1];
			iRec161[0] = 1103515245 * iRec161[1] + 22345;
			fRec160[0] = fConst10 * float(iRec161[0]) + fConst8 * fRec160[1];
			fRec159[0] = fConst9 * fRec160[0] + fConst8 * fRec159[1];
			float fTemp58 = std::exp(fSlow18 * (fConst11 * fRec159[0] - fSlow19));
			float fTemp59 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow246 * fTemp58 * (std::fabs(fConst30 * fRec156[0]) + 0.3f) * fTemp56));
			float fTemp60 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp59));
			iRec162[0] = 1103515245 * iRec162[1] + 31145;
			iRec163[0] = 1103515245 * iRec163[1] + 31245;
			float fTemp61 = float(iRec163[0]);
			float fTemp62 = std::max<float>(fTemp59, 0.2f);
			fRec164[0] = fSlow247 + fConst23 * fRec164[1];
			iRec166[0] = 1103515245 * iRec166[1] + 30945;
			float fTemp63 = float(iRec166[0]);
			fVec2[0] = fTemp63;
			float fRec165 = 4.656613e-10f * (fTemp63 - fVec2[1]);
			iRec168[0] = 1103515245 * iRec168[1] + 30345;
			int iTemp64 = std::fabs(4.656613e-10f * float(iRec168[0])) < (fSlow273 * fTemp58);
			iRec169[0] = 1103515245 * iRec169[1] + 30545;
			iRec170[0] = 1103515245 * iRec170[1] + 30547;
			iRec171[0] = 1103515245 * iRec171[1] + 30549;
			fRec167[0] = ((iTemp64) ? 0.0006f * std::exp(6.0535965e-10f * (float(iRec171[0]) + float(iRec170[0]) + float(iRec169[0]))) : fRec167[1]);
			fRec172[0] = (fRec172[1] + 1.0f) * (1.0f - float(iTemp64));
			int iTemp65 = fRec172[0] < (fConst0 * fRec167[0]);
			iRec173[0] = std::max<int>(iRec173[1], iTemp64);
			float fTemp66 = float(iRec173[0] * iTemp65);
			float fTemp67 = 1.0f - fTemp66 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fRec172[0] - fConst14 * fRec167[0]) / (fConst13 * fRec167[0] + 1.0f))));
			int iTemp68 = int(1.0f - fTemp66);
			float fTemp69 = 1.0f - fTemp8 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, 2777.7778f * (fRec17[0] / fSlow36 + -0.00024f))));
			float fTemp70 = float(input0[i0]);
			float fTemp71 = ((iSlow201) ? 0.0f : fTemp70);
			fVec3[0] = fTemp71;
			fRec178[0] = -(fConst34 * (fConst33 * fRec178[1] - fConst32 * (fTemp71 - fVec3[1])));
			float fTemp72 = std::fabs(fSlow276 * fTemp71 + fSlow275 * fRec178[0]);
			float fTemp73 = ((fTemp72 > fRec177[1]) ? fSlow284 : fSlow280);
			fRec177[0] = fTemp72 * (1.0f - fTemp73) + fRec177[1] * fTemp73;
			float fTemp74 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec177[0]))) - fSlow16);
			float fTemp75 = fTemp71 * std::pow(1e+01f, 0.05f * (((fTemp74 > 0.0f) ? 0.5f * fTemp74 : 0.714f * fTemp74) - fTemp74));
			fVec4[0] = fTemp75;
			fRec176[0] = -(fConst42 * (fConst40 * fRec176[1] - fConst39 * (fConst37 * fTemp75 + fConst36 * fVec4[1])));
			float fTemp76 = 0.63661975f * std::atan(1.5707964f * fRec176[0]);
			fRec175[0] = ((iTemp9) ? fTemp76 : fRec175[1]);
			float fTemp77 = fRec175[0] + (fTemp76 - fRec175[0]) * fTemp69;
			fRec174[0] = ((iTemp68) ? fTemp77 : fRec174[1]);
			fRec179[0] = fConst44 * float(iRec173[0] * (fRec172[0] > fConst43) * iTemp65) + fConst26 * fRec179[1];
			float fTemp78 = 1.0f - fRec179[0];
			float fTemp79 = fTemp78 * (fRec174[0] + (fTemp77 - fRec174[0]) * fTemp67) + fSlow260 * (fRec165 * fRec164[0] / fTemp62) + 3.259629e-10f * fTemp61 * float(std::fabs(4.656613e-10f * float(iRec162[0])) < fTemp60) + fSlow232 * fRec155[0] * float(iRec154[0]) + fTemp54;
			fVec5[0] = fTemp79;
			fRec145[0] = -(fConst46 * (fConst36 * fRec145[1] - fConst45 * (fConst41 * fTemp79 + fConst40 * fVec5[1])));
			fRec144[0] = -(fConst34 * (fConst33 * fRec144[1] - fConst32 * (fRec145[0] - fRec145[1])));
			float fTemp80 = std::fabs(fSlow276 * fRec145[0] + fSlow275 * fRec144[0]);
			float fTemp81 = ((fTemp80 > fRec143[1]) ? fSlow303 : fSlow300);
			fRec143[0] = fTemp80 * (1.0f - fTemp81) + fRec143[1] * fTemp81;
			float fTemp82 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec143[0]))) - fSlow214)));
			float fTemp83 = fRec145[0] * std::pow(1e+01f, 0.05f * (((fTemp82 > 0.0f) ? 2.0f * fTemp82 : 1.4005603f * fTemp82) - fTemp82));
			fVec6[0] = fTemp83;
			fRec142[0] = -(fConst49 * (fConst48 * fRec142[1] - fConst47 * (fTemp83 - fVec6[1])));
			fRec141[0] = fRec142[0] - fConst7 * (fConst5 * fRec141[2] + fConst3 * fRec141[1]);
			float fTemp84 = 2.0f * fRec141[1];
			fRec184[0] = fSlow347 + fConst23 * fRec184[1];
			fRec186[0] = fSlow348 + fConst23 * fRec186[1];
			float fTemp85 = std::tan(fConst51 * fRec186[0]);
			float fTemp86 = 1.0f / fTemp85;
			float fTemp87 = fTemp86 + 1.0f;
			float fTemp88 = 1.0f - fTemp86;
			iRec187[0] = 1103515245 * iRec187[1] + 14345;
			float fTemp89 = float(iRec187[0]);
			fVec7[0] = fTemp89;
			fRec185[0] = (4.656613e-10f * ((fTemp89 - fVec7[1]) / fTemp85) - fRec185[1] * fTemp88) / fTemp87;
			float fTemp90 = fSlow390 * fRec188[1];
			float fTemp91 = fSlow420 * fRec189[1];
			iRec192[0] = 1103515245 * iRec192[1] + 26345;
			int iTemp92 = std::fabs(4.656613e-10f * float(iRec192[0])) < (fSlow436 * fTemp58);
			iRec194[0] = 1103515245 * iRec194[1] + 26545;
			fRec193[0] = ((iTemp92) ? 0.7f * std::fabs(4.656613e-10f * float(iRec194[0])) + 0.3f : fRec193[1]);
			fRec191[0] = std::max<float>(fConst64 * fRec191[1], fRec193[0] * float(iTemp92));
			fRec190[0] = fConst65 * fRec191[0] + fConst63 * fRec190[1];
			float fTemp93 = 1.0f - 0.35f * fRec190[0];
			float fTemp94 = 1.5f * fRec190[0] + 1.0f;
			iRec200[0] = 1103515245 * iRec200[1] + 24345;
			fRec199[0] = fConst70 * float(iRec200[0]) + fConst68 * fRec199[1];
			fRec198[0] = fConst69 * fRec199[0] + fConst68 * fRec198[1];
			float fTemp95 = fTemp58 * std::exp(fSlow18 * (fConst71 * fRec198[0] - fSlow438)) * (25.0f * fRec190[0] + 1.0f);
			iRec201[0] = 1103515245 * iRec201[1] + 18345;
			int iTemp96 = std::fabs(4.656613e-10f * float(iRec201[0])) < (fSlow441 * fTemp95);
			iRec203[0] = 1103515245 * iRec203[1] + 20345;
			fRec202[0] = ((iTemp96) ? 0.75f * std::fabs(4.656613e-10f * float(iRec203[0])) + 0.25f : fRec202[1]);
			fRec197[0] = std::max<float>(fSlow437 * fRec197[1], fRec202[0] * float(iTemp96));
			fRec196[0] = fConst72 * fRec197[0] + fConst66 * fRec196[1];
			float fTemp97 = fSlow442 * fTemp95;
			iRec206[0] = 1103515245 * iRec206[1] + 18545;
			int iTemp98 = std::fabs(4.656613e-10f * float(iRec206[0])) < fTemp97;
			iRec208[0] = 1103515245 * iRec208[1] + 20545;
			fRec207[0] = ((iTemp98) ? 0.75f * std::fabs(4.656613e-10f * float(iRec208[0])) + 0.25f : fRec207[1]);
			fRec205[0] = std::max<float>(fSlow437 * fRec205[1], fRec207[0] * float(iTemp98));
			fRec204[0] = fConst72 * fRec205[0] + fConst66 * fRec204[1];
			float fTemp99 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow457 * (fSlow311 / (fSlow456 * std::max<float>(fRec196[0], 0.7f * fRec204[0]) * fTemp94 + 1e-07f))))));
			float fTemp100 = 1.0f - fTemp99;
			iRec212[0] = 1103515245 * iRec212[1] + 23345;
			fRec211[0] = fConst78 * float(iRec212[0]) + fConst76 * fRec211[1];
			fRec210[0] = fConst77 * fRec211[0] + fConst76 * fRec210[1];
			float fTemp101 = std::min<float>(fConst75, fSlow473 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow472 * std::fabs(fSlow458 * fRec210[0] + 1.0f) * (6.0f * fRec190[0] + 1.0f))) / fSlow311));
			float fTemp102 = 0.875f * fTemp101;
			float fTemp103 = std::floor(fTemp102);
			float fTemp104 = fTemp103 + (1.0f - fTemp102);
			fRec213[0] = fSlow474 + fConst23 * fRec213[1];
			fRec217[0] = fSlow475 + fConst23 * fRec217[1];
			fRec218[0] = fSlow476 + fConst23 * fRec218[1];
			float fTemp105 = std::min<float>(0.8f, fSlow489 * fRec218[0]);
			float fTemp106 = 1.5707964f * fTemp105;
			float fTemp107 = VhsDsp_faustpower2_f(fTemp106) + 1.0f;
			float fTemp108 = std::atan(fTemp106);
			float fTemp109 = float(input1[i0]);
			float fTemp110 = ((iSlow201) ? 0.0f : fTemp109);
			fVec8[0] = fTemp110;
			float fTemp111 = 0.5f * (((iSlow490) ? 0.0f : fTemp110) + ((iSlow490) ? 0.0f : fTemp71));
			float fTemp112 = (std::atan(1.5707964f * (fSlow503 * fRec217[0] * ((iSlow490) ? fTemp71 : fTemp111) + fTemp105)) - fTemp108) * fTemp107;
			float fTemp113 = fSlow504 * (fTemp112 / fRec217[0]);
			float fTemp114 = std::fabs(fTemp113);
			float fTemp115 = ((fTemp114 > fRec216[1]) ? fConst80 : fSlow508);
			fRec216[0] = fTemp114 * (1.0f - fTemp115) + fRec216[1] * fTemp115;
			float fTemp116 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow537 * std::exp(-(fSlow523 * fRec216[0]))))));
			float fTemp117 = 1.0f - fTemp116;
			fRec219[0] = fTemp116 * fRec219[1] + fSlow504 * (fTemp112 * fTemp117 / fRec217[0]);
			fRec215[0] = fRec215[1] * fTemp116 + fRec219[0] * fTemp117;
			float fTemp118 = fTemp113 - fRec215[0];
			float fTemp119 = std::fabs(fTemp118);
			float fTemp120 = ((fTemp119 > fRec214[1]) ? fConst81 : fSlow540);
			fRec214[0] = fTemp119 * (1.0f - fTemp120) + fRec214[1] * fTemp120;
			float fTemp121 = fTemp118 / (fSlow541 * fRec214[0] * fRec213[0] + 1.0f);
			float fTemp122 = fRec215[0] + fTemp121;
			fVec9[IOTA0 & 2047] = fTemp122;
			int iTemp123 = int(fTemp102);
			int iTemp124 = std::min<int>(2049, std::max<int>(0, iTemp123));
			float fTemp125 = 0.75f * fTemp101;
			float fTemp126 = std::floor(fTemp125);
			float fTemp127 = fTemp126 + (1.0f - fTemp125);
			int iTemp128 = int(fTemp125);
			int iTemp129 = std::min<int>(2049, std::max<int>(0, iTemp128));
			float fTemp130 = 0.625f * fTemp101;
			float fTemp131 = std::floor(fTemp130);
			float fTemp132 = fTemp131 + (1.0f - fTemp130);
			int iTemp133 = int(fTemp130);
			int iTemp134 = std::min<int>(2049, std::max<int>(0, iTemp133));
			float fTemp135 = 0.5f * fTemp101;
			float fTemp136 = std::floor(fTemp135);
			float fTemp137 = fTemp136 + (1.0f - fTemp135);
			int iTemp138 = int(fTemp135);
			int iTemp139 = std::min<int>(2049, std::max<int>(0, iTemp138));
			float fTemp140 = 0.375f * fTemp101;
			float fTemp141 = std::floor(fTemp140);
			float fTemp142 = fTemp141 + (1.0f - fTemp140);
			int iTemp143 = int(fTemp140);
			int iTemp144 = std::min<int>(2049, std::max<int>(0, iTemp143));
			float fTemp145 = 0.25f * fTemp101;
			float fTemp146 = std::floor(fTemp145);
			float fTemp147 = fTemp146 + (1.0f - fTemp145);
			int iTemp148 = int(fTemp145);
			int iTemp149 = std::min<int>(2049, std::max<int>(0, iTemp148));
			float fTemp150 = 0.125f * fTemp101;
			float fTemp151 = std::floor(fTemp150);
			float fTemp152 = fTemp151 + (1.0f - fTemp150);
			int iTemp153 = int(fTemp150);
			int iTemp154 = std::min<int>(2049, std::max<int>(0, iTemp153));
			int iTemp155 = std::min<int>(2049, std::max<int>(0, iTemp153 + 1));
			float fTemp156 = fTemp150 - fTemp151;
			int iTemp157 = std::min<int>(2049, std::max<int>(0, iTemp148 + 1));
			float fTemp158 = fTemp145 - fTemp146;
			int iTemp159 = std::min<int>(2049, std::max<int>(0, iTemp143 + 1));
			float fTemp160 = fTemp140 - fTemp141;
			int iTemp161 = std::min<int>(2049, std::max<int>(0, iTemp138 + 1));
			float fTemp162 = fTemp135 - fTemp136;
			int iTemp163 = std::min<int>(2049, std::max<int>(0, iTemp133 + 1));
			float fTemp164 = fTemp130 - fTemp131;
			int iTemp165 = std::min<int>(2049, std::max<int>(0, iTemp128 + 1));
			float fTemp166 = fTemp125 - fTemp126;
			int iTemp167 = std::min<int>(2049, std::max<int>(0, iTemp123 + 1));
			float fTemp168 = fTemp102 - fTemp103;
			float fTemp169 = fRec215[0] + fTemp168 * fVec9[(IOTA0 - iTemp167) & 2047] + fTemp166 * fVec9[(IOTA0 - iTemp165) & 2047] + fTemp164 * fVec9[(IOTA0 - iTemp163) & 2047] + fTemp162 * fVec9[(IOTA0 - iTemp161) & 2047] + fTemp160 * fVec9[(IOTA0 - iTemp159) & 2047] + fTemp158 * fVec9[(IOTA0 - iTemp157) & 2047] + fTemp156 * fVec9[(IOTA0 - iTemp155) & 2047] + fTemp121 + fVec9[(IOTA0 - iTemp154) & 2047] * fTemp152 + fVec9[(IOTA0 - iTemp149) & 2047] * fTemp147 + fVec9[(IOTA0 - iTemp144) & 2047] * fTemp142 + fVec9[(IOTA0 - iTemp139) & 2047] * fTemp137 + fVec9[(IOTA0 - iTemp134) & 2047] * fTemp132 + fVec9[(IOTA0 - iTemp129) & 2047] * fTemp127 + fVec9[(IOTA0 - iTemp124) & 2047] * fTemp104;
			fVec10[IOTA0 & 8191] = fTemp169;
			iRec221[0] = 1103515245 * iRec221[1] + 26745;
			fRec220[0] = ((iTemp92) ? (((4.656613e-10f * float(iRec221[0])) > 0.0f) ? 1.0f : -1.0f) : fRec220[1]);
			iRec226[0] = 1103515245 * iRec226[1] + 16345;
			fRec225[0] = fConst84 * float(iRec226[0]) + fConst82 * fRec225[1];
			fRec224[0] = fConst83 * fRec225[0] + fConst82 * fRec224[1];
			fRec223[0] = fConst83 * fRec224[0] + fConst82 * fRec223[1];
			fRec222[0] = fConst83 * fRec223[0] + fConst82 * fRec222[1];
			float fTemp170 = ((iTemp6) ? 0.0f : fRec228[1] + fSlow542);
			fRec228[0] = fTemp170 - std::floor(fTemp170);
			int iTemp171 = std::max<int>(0, std::min<int>(int(65536.0f * fRec228[0]), 65535));
			float fTemp172 = ftbl1VhsDspSIG1[iTemp171];
			float fTemp173 = ftbl0VhsDspSIG0[iTemp171];
			float fTemp174 = ((iTemp6) ? 0.0f : fSlow556 + fRec229[1]);
			fRec229[0] = fTemp174 - std::floor(fTemp174);
			int iTemp175 = std::max<int>(0, std::min<int>(int(65536.0f * fRec229[0]), 65535));
			float fTemp176 = ((iTemp6) ? 0.0f : fSlow566 + fRec230[1]);
			fRec230[0] = fTemp176 - std::floor(fTemp176);
			int iTemp177 = std::max<int>(0, std::min<int>(int(65536.0f * fRec230[0]), 65535));
			float fTemp178 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow584 * fTemp58 * (8.0f * fRec190[0] + 1.0f)) * (fSlow570 * (fSlow569 * ftbl0VhsDspSIG0[iTemp177] + fSlow568 * ftbl1VhsDspSIG1[iTemp177]) + fSlow560 * (fSlow559 * ftbl0VhsDspSIG0[iTemp175] + fSlow558 * ftbl1VhsDspSIG1[iTemp175]) + 0.07957747f * ((fSlow550 * fTemp173 + fSlow549 * fTemp172) / fSlow36) + fConst85 * fRec222[0]) + 0.0058f + 0.0006802721f * fRec190[0] * fRec220[0])));
			float fTemp179 = fTemp178 + -1.499995f;
			int iTemp180 = int(fTemp179);
			int iTemp181 = std::min<int>(8192, std::max<int>(0, iTemp180 + 4));
			float fTemp182 = std::floor(fTemp179);
			float fTemp183 = fTemp178 + (-3.0f - fTemp182);
			float fTemp184 = fTemp178 + (-2.0f - fTemp182);
			float fTemp185 = fTemp178 + (-1.0f - fTemp182);
			float fTemp186 = fTemp178 - fTemp182;
			float fTemp187 = fTemp186 * fTemp185;
			float fTemp188 = fTemp187 * fTemp184;
			float fTemp189 = fTemp188 * fTemp183;
			int iTemp190 = std::min<int>(8192, std::max<int>(0, iTemp180 + 3));
			int iTemp191 = std::min<int>(8192, std::max<int>(0, iTemp180 + 2));
			int iTemp192 = std::min<int>(8192, std::max<int>(0, iTemp180 + 1));
			int iTemp193 = std::min<int>(8192, std::max<int>(0, iTemp180));
			float fTemp194 = fTemp178 + (-4.0f - fTemp182);
			fRec209[0] = fTemp99 * fRec209[1] + fTemp100 * (fTemp194 * (fTemp183 * (fTemp184 * (0.0052083335f * fVec10[(IOTA0 - iTemp193) & 8191] * fTemp185 - 0.020833334f * fTemp186 * fVec10[(IOTA0 - iTemp192) & 8191]) + 0.03125f * fTemp187 * fVec10[(IOTA0 - iTemp191) & 8191]) - 0.020833334f * fTemp188 * fVec10[(IOTA0 - iTemp190) & 8191]) + 0.0052083335f * fTemp189 * fVec10[(IOTA0 - iTemp181) & 8191]);
			fRec195[0] = fRec195[1] * fTemp99 + fRec209[0] * fTemp100;
			fRec189[0] = fRec195[0] * fTemp93 - (fRec189[2] * fSlow421 + fTemp91) / fSlow417;
			fRec188[0] = (fTemp91 + fRec189[0] * fSlow585 + fRec189[2] * fSlow419) / fSlow417 - (fRec188[2] * fSlow391 + fTemp90) / fSlow387;
			fRec183[0] = (fTemp90 + fRec188[0] * fSlow586 + fRec188[2] * fSlow389) / fSlow387 + fSlow361 * fRec185[0] * fRec184[0] - fConst58 * (fConst56 * fRec183[2] + fConst54 * fRec183[1]);
			fRec182[0] = fConst89 * (fRec183[2] + (fRec183[0] - 2.0f * fRec183[1])) - (fRec182[2] * fSlow346 + 2.0f * fRec182[1] * fSlow341) / fSlow345;
			fRec181[0] = (fRec182[2] + fRec182[0] + 2.0f * fRec182[1]) / fSlow345 - (fRec181[2] * fSlow344 + 2.0f * fSlow341 * fRec181[1]) / fSlow343;
			fRec180[0] = (fRec181[2] + fRec181[0] + 2.0f * fRec181[1]) / fSlow343 - (fRec180[2] * fSlow342 + 2.0f * fSlow341 * fRec180[1]) / fSlow340;
			float fTemp195 = 2.0f * fRec180[1];
			float fTemp196 = ((iSlow201) ? fTemp70 : fSlow587 * ((fRec180[2] + fRec180[0] + fTemp195) / fSlow340) + fSlow310 * std::atan(fConst50 * (fRec141[2] + fRec141[0] + fTemp84)));
			float fTemp197 = ((iSlow174) ? 0.0f : fTemp196);
			fVec12[0] = fTemp197;
			fRec140[0] = -(fConst34 * (fConst33 * fRec140[1] - fConst32 * (fTemp197 - fVec12[1])));
			float fTemp198 = std::fabs(fSlow276 * fTemp197 + fSlow275 * fRec140[0]);
			float fTemp199 = ((fTemp198 > fRec139[1]) ? fSlow284 : fSlow280);
			fRec139[0] = fTemp198 * (1.0f - fTemp199) + fRec139[1] * fTemp199;
			float fTemp200 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec139[0]))) - fSlow16);
			float fTemp201 = fTemp197 * std::pow(1e+01f, 0.05f * (((fTemp200 > 0.0f) ? 0.5f * fTemp200 : 0.714f * fTemp200) - fTemp200));
			fVec13[0] = fTemp201;
			fRec138[0] = -(fConst42 * (fConst40 * fRec138[1] - fConst39 * (fConst37 * fTemp201 + fConst36 * fVec13[1])));
			float fTemp202 = 0.63661975f * std::atan(1.5707964f * fRec138[0]);
			fRec137[0] = ((iTemp9) ? fTemp202 : fRec137[1]);
			float fTemp203 = fRec137[0] + fTemp69 * (fTemp202 - fRec137[0]);
			fRec136[0] = ((iTemp45) ? fTemp203 : fRec136[1]);
			fRec231[0] = fConst44 * float(iRec135[0] * (fRec134[0] > fConst43) * iTemp42) + fConst26 * fRec231[1];
			float fTemp204 = 1.0f - fRec231[0];
			iRec234[0] = 1103515245 * iRec234[1] + 31347;
			float fTemp205 = float(iRec234[0]);
			fRec233[0] = fConst29 * fTemp205 + fConst27 * fRec233[1];
			fRec232[0] = fConst28 * fRec233[0] + fConst27 * fRec232[1];
			float fTemp206 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow600 * fTemp40 * fTemp56 * (std::fabs(fConst30 * fRec232[0]) + 0.3f)));
			float fTemp207 = std::max<float>(fTemp206, 0.2f);
			iRec236[0] = 1103515245 * iRec236[1] + 30965;
			float fTemp208 = float(iRec236[0]);
			fVec14[0] = fTemp208;
			float fRec235 = 4.656613e-10f * (fTemp208 - fVec14[1]);
			float fTemp209 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp206));
			iRec237[0] = 1103515245 * iRec237[1] + 31165;
			iRec238[0] = 1103515245 * iRec238[1] + 31265;
			float fTemp210 = float(iRec238[0]);
			iRec239[0] = 1103515245 * iRec239[1] + 31565;
			float fTemp211 = fSlow626 * fRec155[0] * float(iRec239[0]) + 3.259629e-10f * fTemp210 * float(std::fabs(4.656613e-10f * float(iRec237[0])) < fTemp209) + fSlow613 * (fRec164[0] * fRec235 / fTemp207) + fTemp54 + fTemp204 * (fRec136[0] + (fTemp203 - fRec136[0]) * fTemp44);
			fVec15[0] = fTemp211;
			fRec125[0] = -(fConst46 * (fConst36 * fRec125[1] - fConst45 * (fConst41 * fTemp211 + fConst40 * fVec15[1])));
			fRec124[0] = -(fConst34 * (fConst33 * fRec124[1] - fConst32 * (fRec125[0] - fRec125[1])));
			float fTemp212 = std::fabs(fSlow276 * fRec125[0] + fSlow275 * fRec124[0]);
			float fTemp213 = ((fTemp212 > fRec123[1]) ? fSlow645 : fSlow642);
			fRec123[0] = fTemp212 * (1.0f - fTemp213) + fRec123[1] * fTemp213;
			float fTemp214 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec123[0]))) - fSlow187)));
			float fTemp215 = fRec125[0] * std::pow(1e+01f, 0.05f * (((fTemp214 > 0.0f) ? 2.0f * fTemp214 : 1.4005603f * fTemp214) - fTemp214));
			fVec16[0] = fTemp215;
			fRec122[0] = -(fConst49 * (fConst48 * fRec122[1] - fConst47 * (fTemp215 - fVec16[1])));
			fRec121[0] = fRec122[0] - fConst7 * (fConst5 * fRec121[2] + fConst3 * fRec121[1]);
			float fTemp216 = 2.0f * fRec121[1];
			iRec245[0] = 1103515245 * iRec245[1] + 14365;
			float fTemp217 = float(iRec245[0]);
			fVec17[0] = fTemp217;
			fRec244[0] = (4.656613e-10f * ((fTemp217 - fVec17[1]) / fTemp85) - fTemp88 * fRec244[1]) / fTemp87;
			float fTemp218 = fSlow723 * fRec246[1];
			float fTemp219 = fSlow753 * fRec247[1];
			iRec250[0] = 1103515245 * iRec250[1] + 26347;
			int iTemp220 = std::fabs(4.656613e-10f * float(iRec250[0])) < (fSlow768 * fTemp40);
			iRec252[0] = 1103515245 * iRec252[1] + 26547;
			fRec251[0] = ((iTemp220) ? 0.7f * std::fabs(4.656613e-10f * float(iRec252[0])) + 0.3f : fRec251[1]);
			fRec249[0] = std::max<float>(fConst64 * fRec249[1], fRec251[0] * float(iTemp220));
			fRec248[0] = fConst65 * fRec249[0] + fConst63 * fRec248[1];
			float fTemp221 = 1.0f - 0.35f * fRec248[0];
			float fTemp222 = 1.5f * fRec248[0] + 1.0f;
			iRec258[0] = 1103515245 * iRec258[1] + 24347;
			fRec257[0] = fConst70 * float(iRec258[0]) + fConst68 * fRec257[1];
			fRec256[0] = fConst69 * fRec257[0] + fConst68 * fRec256[1];
			float fTemp223 = fTemp40 * std::exp(fSlow18 * (fConst71 * fRec256[0] - fSlow438)) * (25.0f * fRec248[0] + 1.0f);
			iRec259[0] = 1103515245 * iRec259[1] + 18347;
			int iTemp224 = std::fabs(4.656613e-10f * float(iRec259[0])) < (fSlow770 * fTemp223);
			iRec261[0] = 1103515245 * iRec261[1] + 20347;
			fRec260[0] = ((iTemp224) ? 0.75f * std::fabs(4.656613e-10f * float(iRec261[0])) + 0.25f : fRec260[1]);
			fRec255[0] = std::max<float>(fSlow437 * fRec255[1], fRec260[0] * float(iTemp224));
			fRec254[0] = fConst72 * fRec255[0] + fConst66 * fRec254[1];
			float fTemp225 = fSlow771 * fTemp223;
			iRec264[0] = 1103515245 * iRec264[1] + 18565;
			int iTemp226 = std::fabs(4.656613e-10f * float(iRec264[0])) < fTemp225;
			iRec266[0] = 1103515245 * iRec266[1] + 20565;
			fRec265[0] = ((iTemp226) ? 0.75f * std::fabs(4.656613e-10f * float(iRec266[0])) + 0.25f : fRec265[1]);
			fRec263[0] = std::max<float>(fSlow437 * fRec263[1], fRec265[0] * float(iTemp226));
			fRec262[0] = fConst72 * fRec263[0] + fConst66 * fRec262[1];
			float fTemp227 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow785 * (fSlow311 / (fSlow784 * std::max<float>(fRec254[0], 0.7f * fRec262[0]) * fTemp222 + 1e-07f))))));
			float fTemp228 = 1.0f - fTemp227;
			iRec270[0] = 1103515245 * iRec270[1] + 23347;
			fRec269[0] = fConst78 * float(iRec270[0]) + fConst76 * fRec269[1];
			fRec268[0] = fConst77 * fRec269[0] + fConst76 * fRec268[1];
			float fTemp229 = std::min<float>(fConst75, fSlow799 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow798 * std::fabs(fSlow458 * fRec268[0] + 1.0f) * (6.0f * fRec248[0] + 1.0f))) / fSlow311));
			float fTemp230 = 0.875f * fTemp229;
			float fTemp231 = std::floor(fTemp230);
			float fTemp232 = fTemp231 + (1.0f - fTemp230);
			float fTemp233 = std::min<float>(0.8f, fSlow812 * fRec218[0]);
			float fTemp234 = 1.5707964f * fTemp233;
			float fTemp235 = VhsDsp_faustpower2_f(fTemp234) + 1.0f;
			float fTemp236 = std::atan(fTemp234);
			fRec283[0] = -(fConst34 * (fConst33 * fRec283[1] - fConst32 * (fTemp110 - fVec8[1])));
			float fTemp237 = std::fabs(fSlow276 * fTemp110 + fSlow275 * fRec283[0]);
			float fTemp238 = ((fTemp237 > fRec282[1]) ? fSlow284 : fSlow280);
			fRec282[0] = fTemp237 * (1.0f - fTemp238) + fRec282[1] * fTemp238;
			float fTemp239 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec282[0]))) - fSlow16);
			float fTemp240 = fTemp110 * std::pow(1e+01f, 0.05f * (((fTemp239 > 0.0f) ? 0.5f * fTemp239 : 0.714f * fTemp239) - fTemp239));
			fVec18[0] = fTemp240;
			fRec281[0] = -(fConst42 * (fConst40 * fRec281[1] - fConst39 * (fConst37 * fTemp240 + fConst36 * fVec18[1])));
			float fTemp241 = 0.63661975f * std::atan(1.5707964f * fRec281[0]);
			fRec280[0] = ((iTemp9) ? fTemp241 : fRec280[1]);
			float fTemp242 = fRec280[0] + fTemp69 * (fTemp241 - fRec280[0]);
			fRec279[0] = ((iTemp68) ? fTemp242 : fRec279[1]);
			iRec285[0] = 1103515245 * iRec285[1] + 30947;
			float fTemp243 = float(iRec285[0]);
			fVec19[0] = fTemp243;
			float fRec284 = 4.656613e-10f * (fTemp243 - fVec19[1]);
			iRec286[0] = 1103515245 * iRec286[1] + 31147;
			iRec287[0] = 1103515245 * iRec287[1] + 31247;
			float fTemp244 = float(iRec287[0]);
			iRec288[0] = 1103515245 * iRec288[1] + 31547;
			float fTemp245 = fSlow232 * fRec155[0] * float(iRec288[0]) + 3.259629e-10f * fTemp244 * float(std::fabs(4.656613e-10f * float(iRec286[0])) < fTemp60) + fSlow260 * (fRec164[0] * fRec284 / fTemp62) + fTemp54 + fTemp78 * (fRec279[0] + fTemp67 * (fTemp242 - fRec279[0]));
			fVec20[0] = fTemp245;
			fRec278[0] = -(fConst46 * (fConst36 * fRec278[1] - fConst45 * (fConst41 * fTemp245 + fConst40 * fVec20[1])));
			fRec277[0] = -(fConst34 * (fConst33 * fRec277[1] - fConst32 * (fRec278[0] - fRec278[1])));
			float fTemp246 = std::fabs(fSlow276 * fRec278[0] + fSlow275 * fRec277[0]);
			float fTemp247 = ((fTemp246 > fRec276[1]) ? fSlow303 : fSlow300);
			fRec276[0] = fTemp246 * (1.0f - fTemp247) + fRec276[1] * fTemp247;
			float fTemp248 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec276[0]))) - fSlow214)));
			float fTemp249 = fRec278[0] * std::pow(1e+01f, 0.05f * (((fTemp248 > 0.0f) ? 2.0f * fTemp248 : 1.4005603f * fTemp248) - fTemp248));
			fVec21[0] = fTemp249;
			fRec275[0] = -(fConst49 * (fConst48 * fRec275[1] - fConst47 * (fTemp249 - fVec21[1])));
			fRec274[0] = fRec275[0] - fConst7 * (fConst5 * fRec274[2] + fConst3 * fRec274[1]);
			float fTemp250 = 2.0f * fRec274[1];
			iRec294[0] = 1103515245 * iRec294[1] + 14347;
			float fTemp251 = float(iRec294[0]);
			fVec22[0] = fTemp251;
			fRec293[0] = (4.656613e-10f * ((fTemp251 - fVec22[1]) / fTemp85) - fTemp88 * fRec293[1]) / fTemp87;
			float fTemp252 = fSlow390 * fRec295[1];
			float fTemp253 = fSlow420 * fRec296[1];
			iRec300[0] = 1103515245 * iRec300[1] + 18547;
			int iTemp254 = std::fabs(4.656613e-10f * float(iRec300[0])) < fTemp97;
			iRec302[0] = 1103515245 * iRec302[1] + 20547;
			fRec301[0] = ((iTemp254) ? 0.75f * std::fabs(4.656613e-10f * float(iRec302[0])) + 0.25f : fRec301[1]);
			fRec299[0] = std::max<float>(fSlow437 * fRec299[1], fRec301[0] * float(iTemp254));
			fRec298[0] = fConst72 * fRec299[0] + fConst66 * fRec298[1];
			float fTemp255 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow457 * (fSlow311 / (fSlow456 * std::max<float>(fRec196[0], 0.7f * fRec298[0]) * fTemp94 + 1e-07f))))));
			float fTemp256 = 1.0f - fTemp255;
			float fTemp257 = fTemp107 * (fTemp108 - std::atan(1.5707964f * (fTemp105 + fSlow503 * fRec217[0] * ((iSlow490) ? fTemp110 : fTemp111))));
			float fTemp258 = fSlow504 * (fTemp257 / fRec217[0]);
			float fTemp259 = std::fabs(-fTemp258);
			float fTemp260 = ((fTemp259 > fRec306[1]) ? fConst80 : fSlow508);
			fRec306[0] = fTemp259 * (1.0f - fTemp260) + fRec306[1] * fTemp260;
			float fTemp261 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow537 * std::exp(-(fSlow523 * fRec306[0]))))));
			float fTemp262 = 1.0f - fTemp261;
			fRec307[0] = fTemp261 * fRec307[1] - fSlow504 * (fTemp257 * fTemp262 / fRec217[0]);
			fRec305[0] = fRec305[1] * fTemp261 + fRec307[0] * fTemp262;
			float fTemp263 = fRec305[0] + fTemp258;
			float fTemp264 = std::fabs(-fTemp263);
			float fTemp265 = ((fTemp264 > fRec304[1]) ? fConst81 : fSlow540);
			fRec304[0] = fTemp264 * (1.0f - fTemp265) + fRec304[1] * fTemp265;
			float fTemp266 = fTemp263 / (fSlow541 * fRec213[0] * fRec304[0] + 1.0f);
			float fTemp267 = fRec305[0] - fTemp266;
			fVec23[IOTA0 & 2047] = fTemp267;
			float fTemp268 = fRec305[0] + fTemp168 * fVec23[(IOTA0 - iTemp167) & 2047] + fTemp166 * fVec23[(IOTA0 - iTemp165) & 2047] + fTemp164 * fVec23[(IOTA0 - iTemp163) & 2047] + fTemp162 * fVec23[(IOTA0 - iTemp161) & 2047] + fTemp160 * fVec23[(IOTA0 - iTemp159) & 2047] + fTemp158 * fVec23[(IOTA0 - iTemp157) & 2047] + fTemp152 * fVec23[(IOTA0 - iTemp154) & 2047] + fTemp156 * fVec23[(IOTA0 - iTemp155) & 2047] + fTemp147 * fVec23[(IOTA0 - iTemp149) & 2047] + fTemp142 * fVec23[(IOTA0 - iTemp144) & 2047] + fTemp137 * fVec23[(IOTA0 - iTemp139) & 2047] + fTemp132 * fVec23[(IOTA0 - iTemp134) & 2047] + fTemp127 * fVec23[(IOTA0 - iTemp129) & 2047] + fTemp104 * fVec23[(IOTA0 - iTemp124) & 2047] - fTemp266;
			fVec24[IOTA0 & 8191] = fTemp268;
			fRec303[0] = fTemp255 * fRec303[1] + fTemp256 * (fTemp194 * (fTemp183 * (fTemp184 * (0.0052083335f * fTemp185 * fVec24[(IOTA0 - iTemp193) & 8191] - 0.020833334f * fTemp186 * fVec24[(IOTA0 - iTemp192) & 8191]) + 0.03125f * fTemp187 * fVec24[(IOTA0 - iTemp191) & 8191]) - 0.020833334f * fTemp188 * fVec24[(IOTA0 - iTemp190) & 8191]) + 0.0052083335f * fTemp189 * fVec24[(IOTA0 - iTemp181) & 8191]);
			fRec297[0] = fRec297[1] * fTemp255 + fRec303[0] * fTemp256;
			fRec296[0] = fTemp93 * fRec297[0] - (fSlow421 * fRec296[2] + fTemp253) / fSlow417;
			fRec295[0] = (fTemp253 + fRec296[0] * fSlow585 + fSlow419 * fRec296[2]) / fSlow417 - (fSlow391 * fRec295[2] + fTemp252) / fSlow387;
			fRec292[0] = (fTemp252 + fRec295[0] * fSlow586 + fSlow389 * fRec295[2]) / fSlow387 + fSlow361 * fRec184[0] * fRec293[0] - fConst58 * (fConst56 * fRec292[2] + fConst54 * fRec292[1]);
			fRec291[0] = fConst89 * (fRec292[2] + (fRec292[0] - 2.0f * fRec292[1])) - (fSlow346 * fRec291[2] + 2.0f * fSlow341 * fRec291[1]) / fSlow345;
			fRec290[0] = (fRec291[2] + fRec291[0] + 2.0f * fRec291[1]) / fSlow345 - (fSlow344 * fRec290[2] + 2.0f * fSlow341 * fRec290[1]) / fSlow343;
			fRec289[0] = (fRec290[2] + fRec290[0] + 2.0f * fRec290[1]) / fSlow343 - (fSlow342 * fRec289[2] + 2.0f * fSlow341 * fRec289[1]) / fSlow340;
			float fTemp269 = 2.0f * fRec289[1];
			float fTemp270 = ((iSlow201) ? fTemp109 : fSlow587 * ((fRec289[2] + fRec289[0] + fTemp269) / fSlow340) + fSlow310 * std::atan(fConst50 * (fRec274[2] + fRec274[0] + fTemp250)));
			float fTemp271 = ((iSlow174) ? 0.0f : fTemp270);
			fVec25[0] = fTemp271;
			float fTemp272 = 0.5f * (((iSlow490) ? 0.0f : fTemp197) + ((iSlow490) ? 0.0f : fTemp271));
			float fTemp273 = (std::atan(1.5707964f * (fSlow825 * fRec217[0] * ((iSlow490) ? fTemp197 : fTemp272) + fTemp233)) - fTemp236) * fTemp235;
			float fTemp274 = fSlow826 * (fTemp273 / fRec217[0]);
			float fTemp275 = std::fabs(fTemp274);
			float fTemp276 = ((fTemp275 > fRec273[1]) ? fConst80 : fSlow508);
			fRec273[0] = fTemp275 * (1.0f - fTemp276) + fRec273[1] * fTemp276;
			float fTemp277 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow853 * std::exp(-(fSlow840 * fRec273[0]))))));
			float fTemp278 = 1.0f - fTemp277;
			fRec308[0] = fTemp277 * fRec308[1] + fSlow826 * (fTemp273 * fTemp278 / fRec217[0]);
			fRec272[0] = fRec272[1] * fTemp277 + fRec308[0] * fTemp278;
			float fTemp279 = fTemp274 - fRec272[0];
			float fTemp280 = std::fabs(fTemp279);
			float fTemp281 = ((fTemp280 > fRec271[1]) ? fConst81 : fSlow540);
			fRec271[0] = fTemp280 * (1.0f - fTemp281) + fRec271[1] * fTemp281;
			float fTemp282 = fTemp279 / (fSlow854 * fRec213[0] * fRec271[0] + 1.0f);
			float fTemp283 = fRec272[0] + fTemp282;
			fVec26[IOTA0 & 2047] = fTemp283;
			int iTemp284 = int(fTemp230);
			int iTemp285 = std::min<int>(2049, std::max<int>(0, iTemp284));
			float fTemp286 = 0.75f * fTemp229;
			float fTemp287 = std::floor(fTemp286);
			float fTemp288 = fTemp287 + (1.0f - fTemp286);
			int iTemp289 = int(fTemp286);
			int iTemp290 = std::min<int>(2049, std::max<int>(0, iTemp289));
			float fTemp291 = 0.625f * fTemp229;
			float fTemp292 = std::floor(fTemp291);
			float fTemp293 = fTemp292 + (1.0f - fTemp291);
			int iTemp294 = int(fTemp291);
			int iTemp295 = std::min<int>(2049, std::max<int>(0, iTemp294));
			float fTemp296 = 0.5f * fTemp229;
			float fTemp297 = std::floor(fTemp296);
			float fTemp298 = fTemp297 + (1.0f - fTemp296);
			int iTemp299 = int(fTemp296);
			int iTemp300 = std::min<int>(2049, std::max<int>(0, iTemp299));
			float fTemp301 = 0.375f * fTemp229;
			float fTemp302 = std::floor(fTemp301);
			float fTemp303 = fTemp302 + (1.0f - fTemp301);
			int iTemp304 = int(fTemp301);
			int iTemp305 = std::min<int>(2049, std::max<int>(0, iTemp304));
			float fTemp306 = 0.25f * fTemp229;
			float fTemp307 = std::floor(fTemp306);
			float fTemp308 = fTemp307 + (1.0f - fTemp306);
			int iTemp309 = int(fTemp306);
			int iTemp310 = std::min<int>(2049, std::max<int>(0, iTemp309));
			float fTemp311 = 0.125f * fTemp229;
			float fTemp312 = std::floor(fTemp311);
			float fTemp313 = fTemp312 + (1.0f - fTemp311);
			int iTemp314 = int(fTemp311);
			int iTemp315 = std::min<int>(2049, std::max<int>(0, iTemp314));
			int iTemp316 = std::min<int>(2049, std::max<int>(0, iTemp314 + 1));
			float fTemp317 = fTemp311 - fTemp312;
			int iTemp318 = std::min<int>(2049, std::max<int>(0, iTemp309 + 1));
			float fTemp319 = fTemp306 - fTemp307;
			int iTemp320 = std::min<int>(2049, std::max<int>(0, iTemp304 + 1));
			float fTemp321 = fTemp301 - fTemp302;
			int iTemp322 = std::min<int>(2049, std::max<int>(0, iTemp299 + 1));
			float fTemp323 = fTemp296 - fTemp297;
			int iTemp324 = std::min<int>(2049, std::max<int>(0, iTemp294 + 1));
			float fTemp325 = fTemp291 - fTemp292;
			int iTemp326 = std::min<int>(2049, std::max<int>(0, iTemp289 + 1));
			float fTemp327 = fTemp286 - fTemp287;
			int iTemp328 = std::min<int>(2049, std::max<int>(0, iTemp284 + 1));
			float fTemp329 = fTemp230 - fTemp231;
			float fTemp330 = fRec272[0] + fTemp329 * fVec26[(IOTA0 - iTemp328) & 2047] + fTemp327 * fVec26[(IOTA0 - iTemp326) & 2047] + fTemp325 * fVec26[(IOTA0 - iTemp324) & 2047] + fTemp323 * fVec26[(IOTA0 - iTemp322) & 2047] + fTemp321 * fVec26[(IOTA0 - iTemp320) & 2047] + fTemp319 * fVec26[(IOTA0 - iTemp318) & 2047] + fTemp317 * fVec26[(IOTA0 - iTemp316) & 2047] + fTemp282 + fVec26[(IOTA0 - iTemp315) & 2047] * fTemp313 + fVec26[(IOTA0 - iTemp310) & 2047] * fTemp308 + fVec26[(IOTA0 - iTemp305) & 2047] * fTemp303 + fVec26[(IOTA0 - iTemp300) & 2047] * fTemp298 + fVec26[(IOTA0 - iTemp295) & 2047] * fTemp293 + fVec26[(IOTA0 - iTemp290) & 2047] * fTemp288 + fVec26[(IOTA0 - iTemp285) & 2047] * fTemp232;
			fVec27[IOTA0 & 8191] = fTemp330;
			iRec310[0] = 1103515245 * iRec310[1] + 26747;
			fRec309[0] = ((iTemp220) ? (((4.656613e-10f * float(iRec310[0])) > 0.0f) ? 1.0f : -1.0f) : fRec309[1]);
			iRec315[0] = 1103515245 * iRec315[1] + 16347;
			fRec314[0] = fConst84 * float(iRec315[0]) + fConst82 * fRec314[1];
			fRec313[0] = fConst83 * fRec314[0] + fConst82 * fRec313[1];
			fRec312[0] = fConst83 * fRec313[0] + fConst82 * fRec312[1];
			fRec311[0] = fConst83 * fRec312[0] + fConst82 * fRec311[1];
			float fTemp331 = ((iTemp6) ? 0.0f : fSlow868 + fRec316[1]);
			fRec316[0] = fTemp331 - std::floor(fTemp331);
			int iTemp332 = std::max<int>(0, std::min<int>(int(65536.0f * fRec316[0]), 65535));
			float fTemp333 = ((iTemp6) ? 0.0f : fSlow878 + fRec317[1]);
			fRec317[0] = fTemp333 - std::floor(fTemp333);
			int iTemp334 = std::max<int>(0, std::min<int>(int(65536.0f * fRec317[0]), 65535));
			float fTemp335 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow895 * fTemp40 * (8.0f * fRec248[0] + 1.0f)) * (fSlow882 * (fSlow881 * ftbl0VhsDspSIG0[iTemp334] + fSlow880 * ftbl1VhsDspSIG1[iTemp334]) + fSlow872 * (fSlow871 * ftbl0VhsDspSIG0[iTemp332] + fSlow870 * ftbl1VhsDspSIG1[iTemp332]) + 0.07957747f * ((fSlow862 * fTemp173 + fSlow861 * fTemp172) / fSlow36) + fConst85 * fRec311[0]) + 0.0058f + 0.0006802721f * fRec248[0] * fRec309[0])));
			float fTemp336 = fTemp335 + -1.499995f;
			int iTemp337 = int(fTemp336);
			int iTemp338 = std::min<int>(8192, std::max<int>(0, iTemp337 + 4));
			float fTemp339 = std::floor(fTemp336);
			float fTemp340 = fTemp335 + (-3.0f - fTemp339);
			float fTemp341 = fTemp335 + (-2.0f - fTemp339);
			float fTemp342 = fTemp335 + (-1.0f - fTemp339);
			float fTemp343 = fTemp335 - fTemp339;
			float fTemp344 = fTemp343 * fTemp342;
			float fTemp345 = fTemp344 * fTemp341;
			float fTemp346 = fTemp345 * fTemp340;
			int iTemp347 = std::min<int>(8192, std::max<int>(0, iTemp337 + 3));
			int iTemp348 = std::min<int>(8192, std::max<int>(0, iTemp337 + 2));
			int iTemp349 = std::min<int>(8192, std::max<int>(0, iTemp337 + 1));
			int iTemp350 = std::min<int>(8192, std::max<int>(0, iTemp337));
			float fTemp351 = fTemp335 + (-4.0f - fTemp339);
			fRec267[0] = fTemp227 * fRec267[1] + fTemp228 * (fTemp351 * (fTemp340 * (fTemp341 * (0.0052083335f * fVec27[(IOTA0 - iTemp350) & 8191] * fTemp342 - 0.020833334f * fTemp343 * fVec27[(IOTA0 - iTemp349) & 8191]) + 0.03125f * fTemp344 * fVec27[(IOTA0 - iTemp348) & 8191]) - 0.020833334f * fTemp345 * fVec27[(IOTA0 - iTemp347) & 8191]) + 0.0052083335f * fTemp346 * fVec27[(IOTA0 - iTemp338) & 8191]);
			fRec253[0] = fRec253[1] * fTemp227 + fRec267[0] * fTemp228;
			fRec247[0] = fRec253[0] * fTemp221 - (fRec247[2] * fSlow754 + fTemp219) / fSlow750;
			fRec246[0] = (fTemp219 + fRec247[0] * fSlow896 + fRec247[2] * fSlow752) / fSlow750 - (fRec246[2] * fSlow724 + fTemp218) / fSlow720;
			fRec243[0] = (fTemp218 + fRec246[0] * fSlow897 + fRec246[2] * fSlow722) / fSlow720 + fSlow694 * fRec184[0] * fRec244[0] - fConst58 * (fConst56 * fRec243[2] + fConst54 * fRec243[1]);
			fRec242[0] = fConst89 * (fRec243[2] + (fRec243[0] - 2.0f * fRec243[1])) - (fRec242[2] * fSlow681 + 2.0f * fRec242[1] * fSlow676) / fSlow680;
			fRec241[0] = (fRec242[2] + fRec242[0] + 2.0f * fRec242[1]) / fSlow680 - (fRec241[2] * fSlow679 + 2.0f * fSlow676 * fRec241[1]) / fSlow678;
			fRec240[0] = (fRec241[2] + fRec241[0] + 2.0f * fRec241[1]) / fSlow678 - (fRec240[2] * fSlow677 + 2.0f * fSlow676 * fRec240[1]) / fSlow675;
			float fTemp352 = 2.0f * fRec240[1];
			float fTemp353 = ((iSlow174) ? fTemp196 : fSlow898 * ((fRec240[2] + fRec240[0] + fTemp352) / fSlow675) + fSlow651 * std::atan(fConst50 * (fRec121[2] + fRec121[0] + fTemp216)));
			float fTemp354 = ((iSlow147) ? 0.0f : fTemp353);
			fVec28[0] = fTemp354;
			fRec120[0] = -(fConst34 * (fConst33 * fRec120[1] - fConst32 * (fTemp354 - fVec28[1])));
			float fTemp355 = std::fabs(fSlow276 * fTemp354 + fSlow275 * fRec120[0]);
			float fTemp356 = ((fTemp355 > fRec119[1]) ? fSlow284 : fSlow280);
			fRec119[0] = fTemp355 * (1.0f - fTemp356) + fRec119[1] * fTemp356;
			float fTemp357 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec119[0]))) - fSlow16);
			float fTemp358 = fTemp354 * std::pow(1e+01f, 0.05f * (((fTemp357 > 0.0f) ? 0.5f * fTemp357 : 0.714f * fTemp357) - fTemp357));
			fVec29[0] = fTemp358;
			fRec118[0] = -(fConst42 * (fConst40 * fRec118[1] - fConst39 * (fConst37 * fTemp358 + fConst36 * fVec29[1])));
			float fTemp359 = 0.63661975f * std::atan(1.5707964f * fRec118[0]);
			fRec117[0] = ((iTemp9) ? fTemp359 : fRec117[1]);
			float fTemp360 = fRec117[0] + fTemp69 * (fTemp359 - fRec117[0]);
			fRec116[0] = ((iTemp39) ? fTemp360 : fRec116[1]);
			fRec318[0] = fConst44 * float(iRec115[0] * (fRec114[0] > fConst43) * iTemp36) + fConst26 * fRec318[1];
			float fTemp361 = 1.0f - fRec318[0];
			iRec321[0] = 1103515245 * iRec321[1] + 31349;
			fRec320[0] = fConst29 * float(iRec321[0]) + fConst27 * fRec320[1];
			fRec319[0] = fConst28 * fRec320[0] + fConst27 * fRec319[1];
			float fTemp362 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow911 * fTemp34 * fTemp56 * (std::fabs(fConst30 * fRec319[0]) + 0.3f)));
			float fTemp363 = std::max<float>(fTemp362, 0.2f);
			iRec323[0] = 1103515245 * iRec323[1] + 30985;
			float fTemp364 = float(iRec323[0]);
			fVec30[0] = fTemp364;
			float fRec322 = 4.656613e-10f * (fTemp364 - fVec30[1]);
			float fTemp365 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp362));
			iRec324[0] = 1103515245 * iRec324[1] + 31185;
			iRec325[0] = 1103515245 * iRec325[1] + 31285;
			float fTemp366 = float(iRec325[0]);
			iRec326[0] = 1103515245 * iRec326[1] + 31585;
			float fTemp367 = fSlow937 * fRec155[0] * float(iRec326[0]) + 3.259629e-10f * fTemp366 * float(std::fabs(4.656613e-10f * float(iRec324[0])) < fTemp365) + fSlow924 * (fRec164[0] * fRec322 / fTemp363) + fTemp54 + fTemp361 * (fRec116[0] + (fTemp360 - fRec116[0]) * fTemp38);
			fVec31[0] = fTemp367;
			fRec105[0] = -(fConst46 * (fConst36 * fRec105[1] - fConst45 * (fConst41 * fTemp367 + fConst40 * fVec31[1])));
			fRec104[0] = -(fConst34 * (fConst33 * fRec104[1] - fConst32 * (fRec105[0] - fRec105[1])));
			float fTemp368 = std::fabs(fSlow276 * fRec105[0] + fSlow275 * fRec104[0]);
			float fTemp369 = ((fTemp368 > fRec103[1]) ? fSlow956 : fSlow953);
			fRec103[0] = fTemp368 * (1.0f - fTemp369) + fRec103[1] * fTemp369;
			float fTemp370 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec103[0]))) - fSlow160)));
			float fTemp371 = fRec105[0] * std::pow(1e+01f, 0.05f * (((fTemp370 > 0.0f) ? 2.0f * fTemp370 : 1.4005603f * fTemp370) - fTemp370));
			fVec32[0] = fTemp371;
			fRec102[0] = -(fConst49 * (fConst48 * fRec102[1] - fConst47 * (fTemp371 - fVec32[1])));
			fRec101[0] = fRec102[0] - fConst7 * (fConst5 * fRec101[2] + fConst3 * fRec101[1]);
			float fTemp372 = 2.0f * fRec101[1];
			iRec332[0] = 1103515245 * iRec332[1] + 14385;
			float fTemp373 = float(iRec332[0]);
			fVec33[0] = fTemp373;
			fRec331[0] = (4.656613e-10f * ((fTemp373 - fVec33[1]) / fTemp85) - fTemp88 * fRec331[1]) / fTemp87;
			float fTemp374 = fSlow1034 * fRec333[1];
			float fTemp375 = fSlow1064 * fRec334[1];
			iRec337[0] = 1103515245 * iRec337[1] + 26349;
			int iTemp376 = std::fabs(4.656613e-10f * float(iRec337[0])) < (fSlow1079 * fTemp34);
			iRec339[0] = 1103515245 * iRec339[1] + 26549;
			fRec338[0] = ((iTemp376) ? 0.7f * std::fabs(4.656613e-10f * float(iRec339[0])) + 0.3f : fRec338[1]);
			fRec336[0] = std::max<float>(fConst64 * fRec336[1], fRec338[0] * float(iTemp376));
			fRec335[0] = fConst65 * fRec336[0] + fConst63 * fRec335[1];
			float fTemp377 = 1.0f - 0.35f * fRec335[0];
			float fTemp378 = 1.5f * fRec335[0] + 1.0f;
			iRec345[0] = 1103515245 * iRec345[1] + 24349;
			fRec344[0] = fConst70 * float(iRec345[0]) + fConst68 * fRec344[1];
			fRec343[0] = fConst69 * fRec344[0] + fConst68 * fRec343[1];
			float fTemp379 = fTemp34 * std::exp(fSlow18 * (fConst71 * fRec343[0] - fSlow438)) * (25.0f * fRec335[0] + 1.0f);
			iRec346[0] = 1103515245 * iRec346[1] + 18349;
			int iTemp380 = std::fabs(4.656613e-10f * float(iRec346[0])) < (fSlow1081 * fTemp379);
			iRec348[0] = 1103515245 * iRec348[1] + 20349;
			fRec347[0] = ((iTemp380) ? 0.75f * std::fabs(4.656613e-10f * float(iRec348[0])) + 0.25f : fRec347[1]);
			fRec342[0] = std::max<float>(fSlow437 * fRec342[1], fRec347[0] * float(iTemp380));
			fRec341[0] = fConst72 * fRec342[0] + fConst66 * fRec341[1];
			float fTemp381 = fSlow1082 * fTemp379;
			iRec351[0] = 1103515245 * iRec351[1] + 18585;
			int iTemp382 = std::fabs(4.656613e-10f * float(iRec351[0])) < fTemp381;
			iRec353[0] = 1103515245 * iRec353[1] + 20585;
			fRec352[0] = ((iTemp382) ? 0.75f * std::fabs(4.656613e-10f * float(iRec353[0])) + 0.25f : fRec352[1]);
			fRec350[0] = std::max<float>(fSlow437 * fRec350[1], fRec352[0] * float(iTemp382));
			fRec349[0] = fConst72 * fRec350[0] + fConst66 * fRec349[1];
			float fTemp383 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1096 * (fSlow311 / (fSlow1095 * std::max<float>(fRec341[0], 0.7f * fRec349[0]) * fTemp378 + 1e-07f))))));
			float fTemp384 = 1.0f - fTemp383;
			iRec357[0] = 1103515245 * iRec357[1] + 23349;
			fRec356[0] = fConst78 * float(iRec357[0]) + fConst76 * fRec356[1];
			fRec355[0] = fConst77 * fRec356[0] + fConst76 * fRec355[1];
			float fTemp385 = std::min<float>(fConst75, fSlow1110 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow1109 * std::fabs(fSlow458 * fRec355[0] + 1.0f) * (6.0f * fRec335[0] + 1.0f))) / fSlow311));
			float fTemp386 = 0.875f * fTemp385;
			float fTemp387 = std::floor(fTemp386);
			float fTemp388 = fTemp387 + (1.0f - fTemp386);
			float fTemp389 = std::min<float>(0.8f, fSlow1123 * fRec218[0]);
			float fTemp390 = 1.5707964f * fTemp389;
			float fTemp391 = VhsDsp_faustpower2_f(fTemp390) + 1.0f;
			float fTemp392 = std::atan(fTemp390);
			fRec370[0] = -(fConst34 * (fConst33 * fRec370[1] - fConst32 * (fTemp271 - fVec25[1])));
			float fTemp393 = std::fabs(fSlow276 * fTemp271 + fSlow275 * fRec370[0]);
			float fTemp394 = ((fTemp393 > fRec369[1]) ? fSlow284 : fSlow280);
			fRec369[0] = fTemp393 * (1.0f - fTemp394) + fRec369[1] * fTemp394;
			float fTemp395 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec369[0]))) - fSlow16);
			float fTemp396 = fTemp271 * std::pow(1e+01f, 0.05f * (((fTemp395 > 0.0f) ? 0.5f * fTemp395 : 0.714f * fTemp395) - fTemp395));
			fVec34[0] = fTemp396;
			fRec368[0] = -(fConst42 * (fConst40 * fRec368[1] - fConst39 * (fConst37 * fTemp396 + fConst36 * fVec34[1])));
			float fTemp397 = 0.63661975f * std::atan(1.5707964f * fRec368[0]);
			fRec367[0] = ((iTemp9) ? fTemp397 : fRec367[1]);
			float fTemp398 = fRec367[0] + fTemp69 * (fTemp397 - fRec367[0]);
			fRec366[0] = ((iTemp45) ? fTemp398 : fRec366[1]);
			iRec372[0] = 1103515245 * iRec372[1] + 30967;
			float fTemp399 = float(iRec372[0]);
			fVec35[0] = fTemp399;
			float fRec371 = 4.656613e-10f * (fTemp399 - fVec35[1]);
			iRec373[0] = 1103515245 * iRec373[1] + 31167;
			iRec374[0] = 1103515245 * iRec374[1] + 31267;
			float fTemp400 = float(iRec374[0]);
			iRec375[0] = 1103515245 * iRec375[1] + 31567;
			float fTemp401 = fSlow626 * fRec155[0] * float(iRec375[0]) + 3.259629e-10f * fTemp400 * float(std::fabs(4.656613e-10f * float(iRec373[0])) < fTemp209) + fSlow613 * (fRec164[0] * fRec371 / fTemp207) + fTemp54 + fTemp204 * (fRec366[0] + fTemp44 * (fTemp398 - fRec366[0]));
			fVec36[0] = fTemp401;
			fRec365[0] = -(fConst46 * (fConst36 * fRec365[1] - fConst45 * (fConst41 * fTemp401 + fConst40 * fVec36[1])));
			fRec364[0] = -(fConst34 * (fConst33 * fRec364[1] - fConst32 * (fRec365[0] - fRec365[1])));
			float fTemp402 = std::fabs(fSlow276 * fRec365[0] + fSlow275 * fRec364[0]);
			float fTemp403 = ((fTemp402 > fRec363[1]) ? fSlow645 : fSlow642);
			fRec363[0] = fTemp402 * (1.0f - fTemp403) + fRec363[1] * fTemp403;
			float fTemp404 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec363[0]))) - fSlow187)));
			float fTemp405 = fRec365[0] * std::pow(1e+01f, 0.05f * (((fTemp404 > 0.0f) ? 2.0f * fTemp404 : 1.4005603f * fTemp404) - fTemp404));
			fVec37[0] = fTemp405;
			fRec362[0] = -(fConst49 * (fConst48 * fRec362[1] - fConst47 * (fTemp405 - fVec37[1])));
			fRec361[0] = fRec362[0] - fConst7 * (fConst5 * fRec361[2] + fConst3 * fRec361[1]);
			float fTemp406 = 2.0f * fRec361[1];
			iRec381[0] = 1103515245 * iRec381[1] + 14367;
			float fTemp407 = float(iRec381[0]);
			fVec38[0] = fTemp407;
			fRec380[0] = (4.656613e-10f * ((fTemp407 - fVec38[1]) / fTemp85) - fTemp88 * fRec380[1]) / fTemp87;
			float fTemp408 = fSlow723 * fRec382[1];
			float fTemp409 = fSlow753 * fRec383[1];
			iRec387[0] = 1103515245 * iRec387[1] + 18567;
			int iTemp410 = std::fabs(4.656613e-10f * float(iRec387[0])) < fTemp225;
			iRec389[0] = 1103515245 * iRec389[1] + 20567;
			fRec388[0] = ((iTemp410) ? 0.75f * std::fabs(4.656613e-10f * float(iRec389[0])) + 0.25f : fRec388[1]);
			fRec386[0] = std::max<float>(fSlow437 * fRec386[1], fRec388[0] * float(iTemp410));
			fRec385[0] = fConst72 * fRec386[0] + fConst66 * fRec385[1];
			float fTemp411 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow785 * (fSlow311 / (fSlow784 * std::max<float>(fRec254[0], 0.7f * fRec385[0]) * fTemp222 + 1e-07f))))));
			float fTemp412 = 1.0f - fTemp411;
			float fTemp413 = fTemp235 * (fTemp236 - std::atan(1.5707964f * (fTemp233 + fSlow825 * fRec217[0] * ((iSlow490) ? fTemp271 : fTemp272))));
			float fTemp414 = fSlow826 * (fTemp413 / fRec217[0]);
			float fTemp415 = std::fabs(-fTemp414);
			float fTemp416 = ((fTemp415 > fRec393[1]) ? fConst80 : fSlow508);
			fRec393[0] = fTemp415 * (1.0f - fTemp416) + fRec393[1] * fTemp416;
			float fTemp417 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow853 * std::exp(-(fSlow840 * fRec393[0]))))));
			float fTemp418 = 1.0f - fTemp417;
			fRec394[0] = fTemp417 * fRec394[1] - fSlow826 * (fTemp413 * fTemp418 / fRec217[0]);
			fRec392[0] = fRec392[1] * fTemp417 + fRec394[0] * fTemp418;
			float fTemp419 = fRec392[0] + fTemp414;
			float fTemp420 = std::fabs(-fTemp419);
			float fTemp421 = ((fTemp420 > fRec391[1]) ? fConst81 : fSlow540);
			fRec391[0] = fTemp420 * (1.0f - fTemp421) + fRec391[1] * fTemp421;
			float fTemp422 = fTemp419 / (fSlow854 * fRec213[0] * fRec391[0] + 1.0f);
			float fTemp423 = fRec392[0] - fTemp422;
			fVec39[IOTA0 & 2047] = fTemp423;
			float fTemp424 = fRec392[0] + fTemp329 * fVec39[(IOTA0 - iTemp328) & 2047] + fTemp327 * fVec39[(IOTA0 - iTemp326) & 2047] + fTemp325 * fVec39[(IOTA0 - iTemp324) & 2047] + fTemp323 * fVec39[(IOTA0 - iTemp322) & 2047] + fTemp321 * fVec39[(IOTA0 - iTemp320) & 2047] + fTemp319 * fVec39[(IOTA0 - iTemp318) & 2047] + fTemp313 * fVec39[(IOTA0 - iTemp315) & 2047] + fTemp317 * fVec39[(IOTA0 - iTemp316) & 2047] + fTemp308 * fVec39[(IOTA0 - iTemp310) & 2047] + fTemp303 * fVec39[(IOTA0 - iTemp305) & 2047] + fTemp298 * fVec39[(IOTA0 - iTemp300) & 2047] + fTemp293 * fVec39[(IOTA0 - iTemp295) & 2047] + fTemp288 * fVec39[(IOTA0 - iTemp290) & 2047] + fTemp232 * fVec39[(IOTA0 - iTemp285) & 2047] - fTemp422;
			fVec40[IOTA0 & 8191] = fTemp424;
			fRec390[0] = fTemp411 * fRec390[1] + fTemp412 * (fTemp351 * (fTemp340 * (fTemp341 * (0.0052083335f * fTemp342 * fVec40[(IOTA0 - iTemp350) & 8191] - 0.020833334f * fTemp343 * fVec40[(IOTA0 - iTemp349) & 8191]) + 0.03125f * fTemp344 * fVec40[(IOTA0 - iTemp348) & 8191]) - 0.020833334f * fTemp345 * fVec40[(IOTA0 - iTemp347) & 8191]) + 0.0052083335f * fTemp346 * fVec40[(IOTA0 - iTemp338) & 8191]);
			fRec384[0] = fRec384[1] * fTemp411 + fRec390[0] * fTemp412;
			fRec383[0] = fTemp221 * fRec384[0] - (fSlow754 * fRec383[2] + fTemp409) / fSlow750;
			fRec382[0] = (fTemp409 + fRec383[0] * fSlow896 + fSlow752 * fRec383[2]) / fSlow750 - (fSlow724 * fRec382[2] + fTemp408) / fSlow720;
			fRec379[0] = (fTemp408 + fRec382[0] * fSlow897 + fSlow722 * fRec382[2]) / fSlow720 + fSlow694 * fRec184[0] * fRec380[0] - fConst58 * (fConst56 * fRec379[2] + fConst54 * fRec379[1]);
			fRec378[0] = fConst89 * (fRec379[2] + (fRec379[0] - 2.0f * fRec379[1])) - (fSlow681 * fRec378[2] + 2.0f * fSlow676 * fRec378[1]) / fSlow680;
			fRec377[0] = (fRec378[2] + fRec378[0] + 2.0f * fRec378[1]) / fSlow680 - (fSlow679 * fRec377[2] + 2.0f * fSlow676 * fRec377[1]) / fSlow678;
			fRec376[0] = (fRec377[2] + fRec377[0] + 2.0f * fRec377[1]) / fSlow678 - (fSlow677 * fRec376[2] + 2.0f * fSlow676 * fRec376[1]) / fSlow675;
			float fTemp425 = 2.0f * fRec376[1];
			float fTemp426 = ((iSlow174) ? fTemp270 : fSlow898 * ((fRec376[2] + fRec376[0] + fTemp425) / fSlow675) + fSlow651 * std::atan(fConst50 * (fRec361[2] + fRec361[0] + fTemp406)));
			float fTemp427 = ((iSlow147) ? 0.0f : fTemp426);
			fVec41[0] = fTemp427;
			float fTemp428 = 0.5f * (((iSlow490) ? 0.0f : fTemp354) + ((iSlow490) ? 0.0f : fTemp427));
			float fTemp429 = (std::atan(1.5707964f * (fSlow1136 * fRec217[0] * ((iSlow490) ? fTemp354 : fTemp428) + fTemp389)) - fTemp392) * fTemp391;
			float fTemp430 = fSlow1137 * (fTemp429 / fRec217[0]);
			float fTemp431 = std::fabs(fTemp430);
			float fTemp432 = ((fTemp431 > fRec360[1]) ? fConst80 : fSlow508);
			fRec360[0] = fTemp431 * (1.0f - fTemp432) + fRec360[1] * fTemp432;
			float fTemp433 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1164 * std::exp(-(fSlow1151 * fRec360[0]))))));
			float fTemp434 = 1.0f - fTemp433;
			fRec395[0] = fTemp433 * fRec395[1] + fSlow1137 * (fTemp429 * fTemp434 / fRec217[0]);
			fRec359[0] = fRec359[1] * fTemp433 + fRec395[0] * fTemp434;
			float fTemp435 = fTemp430 - fRec359[0];
			float fTemp436 = std::fabs(fTemp435);
			float fTemp437 = ((fTemp436 > fRec358[1]) ? fConst81 : fSlow540);
			fRec358[0] = fTemp436 * (1.0f - fTemp437) + fRec358[1] * fTemp437;
			float fTemp438 = fTemp435 / (fSlow1165 * fRec213[0] * fRec358[0] + 1.0f);
			float fTemp439 = fRec359[0] + fTemp438;
			fVec42[IOTA0 & 2047] = fTemp439;
			int iTemp440 = int(fTemp386);
			int iTemp441 = std::min<int>(2049, std::max<int>(0, iTemp440));
			float fTemp442 = 0.75f * fTemp385;
			float fTemp443 = std::floor(fTemp442);
			float fTemp444 = fTemp443 + (1.0f - fTemp442);
			int iTemp445 = int(fTemp442);
			int iTemp446 = std::min<int>(2049, std::max<int>(0, iTemp445));
			float fTemp447 = 0.625f * fTemp385;
			float fTemp448 = std::floor(fTemp447);
			float fTemp449 = fTemp448 + (1.0f - fTemp447);
			int iTemp450 = int(fTemp447);
			int iTemp451 = std::min<int>(2049, std::max<int>(0, iTemp450));
			float fTemp452 = 0.5f * fTemp385;
			float fTemp453 = std::floor(fTemp452);
			float fTemp454 = fTemp453 + (1.0f - fTemp452);
			int iTemp455 = int(fTemp452);
			int iTemp456 = std::min<int>(2049, std::max<int>(0, iTemp455));
			float fTemp457 = 0.375f * fTemp385;
			float fTemp458 = std::floor(fTemp457);
			float fTemp459 = fTemp458 + (1.0f - fTemp457);
			int iTemp460 = int(fTemp457);
			int iTemp461 = std::min<int>(2049, std::max<int>(0, iTemp460));
			float fTemp462 = 0.25f * fTemp385;
			float fTemp463 = std::floor(fTemp462);
			float fTemp464 = fTemp463 + (1.0f - fTemp462);
			int iTemp465 = int(fTemp462);
			int iTemp466 = std::min<int>(2049, std::max<int>(0, iTemp465));
			float fTemp467 = 0.125f * fTemp385;
			float fTemp468 = std::floor(fTemp467);
			float fTemp469 = fTemp468 + (1.0f - fTemp467);
			int iTemp470 = int(fTemp467);
			int iTemp471 = std::min<int>(2049, std::max<int>(0, iTemp470));
			int iTemp472 = std::min<int>(2049, std::max<int>(0, iTemp470 + 1));
			float fTemp473 = fTemp467 - fTemp468;
			int iTemp474 = std::min<int>(2049, std::max<int>(0, iTemp465 + 1));
			float fTemp475 = fTemp462 - fTemp463;
			int iTemp476 = std::min<int>(2049, std::max<int>(0, iTemp460 + 1));
			float fTemp477 = fTemp457 - fTemp458;
			int iTemp478 = std::min<int>(2049, std::max<int>(0, iTemp455 + 1));
			float fTemp479 = fTemp452 - fTemp453;
			int iTemp480 = std::min<int>(2049, std::max<int>(0, iTemp450 + 1));
			float fTemp481 = fTemp447 - fTemp448;
			int iTemp482 = std::min<int>(2049, std::max<int>(0, iTemp445 + 1));
			float fTemp483 = fTemp442 - fTemp443;
			int iTemp484 = std::min<int>(2049, std::max<int>(0, iTemp440 + 1));
			float fTemp485 = fTemp386 - fTemp387;
			float fTemp486 = fRec359[0] + fTemp485 * fVec42[(IOTA0 - iTemp484) & 2047] + fTemp483 * fVec42[(IOTA0 - iTemp482) & 2047] + fTemp481 * fVec42[(IOTA0 - iTemp480) & 2047] + fTemp479 * fVec42[(IOTA0 - iTemp478) & 2047] + fTemp477 * fVec42[(IOTA0 - iTemp476) & 2047] + fTemp475 * fVec42[(IOTA0 - iTemp474) & 2047] + fTemp473 * fVec42[(IOTA0 - iTemp472) & 2047] + fTemp438 + fVec42[(IOTA0 - iTemp471) & 2047] * fTemp469 + fVec42[(IOTA0 - iTemp466) & 2047] * fTemp464 + fVec42[(IOTA0 - iTemp461) & 2047] * fTemp459 + fVec42[(IOTA0 - iTemp456) & 2047] * fTemp454 + fVec42[(IOTA0 - iTemp451) & 2047] * fTemp449 + fVec42[(IOTA0 - iTemp446) & 2047] * fTemp444 + fVec42[(IOTA0 - iTemp441) & 2047] * fTemp388;
			fVec43[IOTA0 & 8191] = fTemp486;
			iRec397[0] = 1103515245 * iRec397[1] + 26749;
			fRec396[0] = ((iTemp376) ? (((4.656613e-10f * float(iRec397[0])) > 0.0f) ? 1.0f : -1.0f) : fRec396[1]);
			iRec402[0] = 1103515245 * iRec402[1] + 16349;
			fRec401[0] = fConst84 * float(iRec402[0]) + fConst82 * fRec401[1];
			fRec400[0] = fConst83 * fRec401[0] + fConst82 * fRec400[1];
			fRec399[0] = fConst83 * fRec400[0] + fConst82 * fRec399[1];
			fRec398[0] = fConst83 * fRec399[0] + fConst82 * fRec398[1];
			float fTemp487 = ((iTemp6) ? 0.0f : fSlow1179 + fRec403[1]);
			fRec403[0] = fTemp487 - std::floor(fTemp487);
			int iTemp488 = std::max<int>(0, std::min<int>(int(65536.0f * fRec403[0]), 65535));
			float fTemp489 = ((iTemp6) ? 0.0f : fSlow1189 + fRec404[1]);
			fRec404[0] = fTemp489 - std::floor(fTemp489);
			int iTemp490 = std::max<int>(0, std::min<int>(int(65536.0f * fRec404[0]), 65535));
			float fTemp491 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow1206 * fTemp34 * (8.0f * fRec335[0] + 1.0f)) * (fSlow1193 * (fSlow1192 * ftbl0VhsDspSIG0[iTemp490] + fSlow1191 * ftbl1VhsDspSIG1[iTemp490]) + fSlow1183 * (fSlow1182 * ftbl0VhsDspSIG0[iTemp488] + fSlow1181 * ftbl1VhsDspSIG1[iTemp488]) + 0.07957747f * ((fSlow1173 * fTemp173 + fSlow1172 * fTemp172) / fSlow36) + fConst85 * fRec398[0]) + 0.0058f + 0.0006802721f * fRec335[0] * fRec396[0])));
			float fTemp492 = fTemp491 + -1.499995f;
			int iTemp493 = int(fTemp492);
			int iTemp494 = std::min<int>(8192, std::max<int>(0, iTemp493 + 4));
			float fTemp495 = std::floor(fTemp492);
			float fTemp496 = fTemp491 + (-3.0f - fTemp495);
			float fTemp497 = fTemp491 + (-2.0f - fTemp495);
			float fTemp498 = fTemp491 + (-1.0f - fTemp495);
			float fTemp499 = fTemp491 - fTemp495;
			float fTemp500 = fTemp499 * fTemp498;
			float fTemp501 = fTemp500 * fTemp497;
			float fTemp502 = fTemp501 * fTemp496;
			int iTemp503 = std::min<int>(8192, std::max<int>(0, iTemp493 + 3));
			int iTemp504 = std::min<int>(8192, std::max<int>(0, iTemp493 + 2));
			int iTemp505 = std::min<int>(8192, std::max<int>(0, iTemp493 + 1));
			int iTemp506 = std::min<int>(8192, std::max<int>(0, iTemp493));
			float fTemp507 = fTemp491 + (-4.0f - fTemp495);
			fRec354[0] = fTemp383 * fRec354[1] + fTemp384 * (fTemp507 * (fTemp496 * (fTemp497 * (0.0052083335f * fVec43[(IOTA0 - iTemp506) & 8191] * fTemp498 - 0.020833334f * fTemp499 * fVec43[(IOTA0 - iTemp505) & 8191]) + 0.03125f * fTemp500 * fVec43[(IOTA0 - iTemp504) & 8191]) - 0.020833334f * fTemp501 * fVec43[(IOTA0 - iTemp503) & 8191]) + 0.0052083335f * fTemp502 * fVec43[(IOTA0 - iTemp494) & 8191]);
			fRec340[0] = fRec340[1] * fTemp383 + fRec354[0] * fTemp384;
			fRec334[0] = fRec340[0] * fTemp377 - (fRec334[2] * fSlow1065 + fTemp375) / fSlow1061;
			fRec333[0] = (fTemp375 + fRec334[0] * fSlow1207 + fRec334[2] * fSlow1063) / fSlow1061 - (fRec333[2] * fSlow1035 + fTemp374) / fSlow1031;
			fRec330[0] = (fTemp374 + fRec333[0] * fSlow1208 + fRec333[2] * fSlow1033) / fSlow1031 + fSlow1005 * fRec184[0] * fRec331[0] - fConst58 * (fConst56 * fRec330[2] + fConst54 * fRec330[1]);
			fRec329[0] = fConst89 * (fRec330[2] + (fRec330[0] - 2.0f * fRec330[1])) - (fRec329[2] * fSlow992 + 2.0f * fRec329[1] * fSlow987) / fSlow991;
			fRec328[0] = (fRec329[2] + fRec329[0] + 2.0f * fRec329[1]) / fSlow991 - (fRec328[2] * fSlow990 + 2.0f * fSlow987 * fRec328[1]) / fSlow989;
			fRec327[0] = (fRec328[2] + fRec328[0] + 2.0f * fRec328[1]) / fSlow989 - (fRec327[2] * fSlow988 + 2.0f * fSlow987 * fRec327[1]) / fSlow986;
			float fTemp508 = 2.0f * fRec327[1];
			float fTemp509 = ((iSlow147) ? fTemp353 : fSlow1209 * ((fRec327[2] + fRec327[0] + fTemp508) / fSlow986) + fSlow962 * std::atan(fConst50 * (fRec101[2] + fRec101[0] + fTemp372)));
			float fTemp510 = ((iSlow120) ? 0.0f : fTemp509);
			fVec44[0] = fTemp510;
			fRec100[0] = -(fConst34 * (fConst33 * fRec100[1] - fConst32 * (fTemp510 - fVec44[1])));
			float fTemp511 = std::fabs(fSlow276 * fTemp510 + fSlow275 * fRec100[0]);
			float fTemp512 = ((fTemp511 > fRec99[1]) ? fSlow284 : fSlow280);
			fRec99[0] = fTemp511 * (1.0f - fTemp512) + fRec99[1] * fTemp512;
			float fTemp513 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec99[0]))) - fSlow16);
			float fTemp514 = fTemp510 * std::pow(1e+01f, 0.05f * (((fTemp513 > 0.0f) ? 0.5f * fTemp513 : 0.714f * fTemp513) - fTemp513));
			fVec45[0] = fTemp514;
			fRec98[0] = -(fConst42 * (fConst40 * fRec98[1] - fConst39 * (fConst37 * fTemp514 + fConst36 * fVec45[1])));
			float fTemp515 = 0.63661975f * std::atan(1.5707964f * fRec98[0]);
			fRec97[0] = ((iTemp9) ? fTemp515 : fRec97[1]);
			float fTemp516 = fRec97[0] + fTemp69 * (fTemp515 - fRec97[0]);
			fRec96[0] = ((iTemp33) ? fTemp516 : fRec96[1]);
			fRec405[0] = fConst44 * float(iRec95[0] * (fRec94[0] > fConst43) * iTemp30) + fConst26 * fRec405[1];
			float fTemp517 = 1.0f - fRec405[0];
			iRec408[0] = 1103515245 * iRec408[1] + 31351;
			fRec407[0] = fConst29 * float(iRec408[0]) + fConst27 * fRec407[1];
			fRec406[0] = fConst28 * fRec407[0] + fConst27 * fRec406[1];
			float fTemp518 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow1222 * fTemp28 * fTemp56 * (std::fabs(fConst30 * fRec406[0]) + 0.3f)));
			float fTemp519 = std::max<float>(fTemp518, 0.2f);
			iRec410[0] = 1103515245 * iRec410[1] + 31005;
			float fTemp520 = float(iRec410[0]);
			fVec46[0] = fTemp520;
			float fRec409 = 4.656613e-10f * (fTemp520 - fVec46[1]);
			float fTemp521 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp518));
			iRec411[0] = 1103515245 * iRec411[1] + 31205;
			iRec412[0] = 1103515245 * iRec412[1] + 31305;
			iRec413[0] = 1103515245 * iRec413[1] + 31605;
			float fTemp522 = fSlow1248 * fRec155[0] * float(iRec413[0]) + 3.259629e-10f * float(iRec412[0]) * float(std::fabs(4.656613e-10f * float(iRec411[0])) < fTemp521) + fSlow1235 * (fRec164[0] * fRec409 / fTemp519) + fTemp54 + fTemp517 * (fRec96[0] + (fTemp516 - fRec96[0]) * fTemp32);
			fVec47[0] = fTemp522;
			fRec85[0] = -(fConst46 * (fConst36 * fRec85[1] - fConst45 * (fConst41 * fTemp522 + fConst40 * fVec47[1])));
			fRec84[0] = -(fConst34 * (fConst33 * fRec84[1] - fConst32 * (fRec85[0] - fRec85[1])));
			float fTemp523 = std::fabs(fSlow276 * fRec85[0] + fSlow275 * fRec84[0]);
			float fTemp524 = ((fTemp523 > fRec83[1]) ? fSlow1267 : fSlow1264);
			fRec83[0] = fTemp523 * (1.0f - fTemp524) + fRec83[1] * fTemp524;
			float fTemp525 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec83[0]))) - fSlow133)));
			float fTemp526 = fRec85[0] * std::pow(1e+01f, 0.05f * (((fTemp525 > 0.0f) ? 2.0f * fTemp525 : 1.4005603f * fTemp525) - fTemp525));
			fVec48[0] = fTemp526;
			fRec82[0] = -(fConst49 * (fConst48 * fRec82[1] - fConst47 * (fTemp526 - fVec48[1])));
			fRec81[0] = fRec82[0] - fConst7 * (fConst5 * fRec81[2] + fConst3 * fRec81[1]);
			float fTemp527 = 2.0f * fRec81[1];
			iRec419[0] = 1103515245 * iRec419[1] + 14405;
			float fTemp528 = float(iRec419[0]);
			fVec49[0] = fTemp528;
			fRec418[0] = (4.656613e-10f * ((fTemp528 - fVec49[1]) / fTemp85) - fTemp88 * fRec418[1]) / fTemp87;
			float fTemp529 = fSlow1345 * fRec420[1];
			float fTemp530 = fSlow1375 * fRec421[1];
			iRec424[0] = 1103515245 * iRec424[1] + 26351;
			int iTemp531 = std::fabs(4.656613e-10f * float(iRec424[0])) < (fSlow1390 * fTemp28);
			iRec426[0] = 1103515245 * iRec426[1] + 26551;
			fRec425[0] = ((iTemp531) ? 0.7f * std::fabs(4.656613e-10f * float(iRec426[0])) + 0.3f : fRec425[1]);
			fRec423[0] = std::max<float>(fConst64 * fRec423[1], fRec425[0] * float(iTemp531));
			fRec422[0] = fConst65 * fRec423[0] + fConst63 * fRec422[1];
			float fTemp532 = 1.0f - 0.35f * fRec422[0];
			float fTemp533 = 1.5f * fRec422[0] + 1.0f;
			iRec432[0] = 1103515245 * iRec432[1] + 24351;
			fRec431[0] = fConst70 * float(iRec432[0]) + fConst68 * fRec431[1];
			fRec430[0] = fConst69 * fRec431[0] + fConst68 * fRec430[1];
			float fTemp534 = fTemp28 * std::exp(fSlow18 * (fConst71 * fRec430[0] - fSlow438)) * (25.0f * fRec422[0] + 1.0f);
			iRec433[0] = 1103515245 * iRec433[1] + 18351;
			int iTemp535 = std::fabs(4.656613e-10f * float(iRec433[0])) < (fSlow1392 * fTemp534);
			iRec435[0] = 1103515245 * iRec435[1] + 20351;
			fRec434[0] = ((iTemp535) ? 0.75f * std::fabs(4.656613e-10f * float(iRec435[0])) + 0.25f : fRec434[1]);
			fRec429[0] = std::max<float>(fSlow437 * fRec429[1], fRec434[0] * float(iTemp535));
			fRec428[0] = fConst72 * fRec429[0] + fConst66 * fRec428[1];
			float fTemp536 = fSlow1393 * fTemp534;
			iRec438[0] = 1103515245 * iRec438[1] + 18605;
			int iTemp537 = std::fabs(4.656613e-10f * float(iRec438[0])) < fTemp536;
			iRec440[0] = 1103515245 * iRec440[1] + 20605;
			fRec439[0] = ((iTemp537) ? 0.75f * std::fabs(4.656613e-10f * float(iRec440[0])) + 0.25f : fRec439[1]);
			fRec437[0] = std::max<float>(fSlow437 * fRec437[1], fRec439[0] * float(iTemp537));
			fRec436[0] = fConst72 * fRec437[0] + fConst66 * fRec436[1];
			float fTemp538 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1407 * (fSlow311 / (fSlow1406 * std::max<float>(fRec428[0], 0.7f * fRec436[0]) * fTemp533 + 1e-07f))))));
			float fTemp539 = 1.0f - fTemp538;
			iRec444[0] = 1103515245 * iRec444[1] + 23351;
			fRec443[0] = fConst78 * float(iRec444[0]) + fConst76 * fRec443[1];
			fRec442[0] = fConst77 * fRec443[0] + fConst76 * fRec442[1];
			float fTemp540 = std::min<float>(fConst75, fSlow1421 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow1420 * std::fabs(fSlow458 * fRec442[0] + 1.0f) * (6.0f * fRec422[0] + 1.0f))) / fSlow311));
			float fTemp541 = 0.875f * fTemp540;
			float fTemp542 = std::floor(fTemp541);
			float fTemp543 = fTemp542 + (1.0f - fTemp541);
			float fTemp544 = std::min<float>(0.8f, fSlow1434 * fRec218[0]);
			float fTemp545 = 1.5707964f * fTemp544;
			float fTemp546 = VhsDsp_faustpower2_f(fTemp545) + 1.0f;
			float fTemp547 = std::atan(fTemp545);
			fRec457[0] = -(fConst34 * (fConst33 * fRec457[1] - fConst32 * (fTemp427 - fVec41[1])));
			float fTemp548 = std::fabs(fSlow276 * fTemp427 + fSlow275 * fRec457[0]);
			float fTemp549 = ((fTemp548 > fRec456[1]) ? fSlow284 : fSlow280);
			fRec456[0] = fTemp548 * (1.0f - fTemp549) + fRec456[1] * fTemp549;
			float fTemp550 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec456[0]))) - fSlow16);
			float fTemp551 = fTemp427 * std::pow(1e+01f, 0.05f * (((fTemp550 > 0.0f) ? 0.5f * fTemp550 : 0.714f * fTemp550) - fTemp550));
			fVec50[0] = fTemp551;
			fRec455[0] = -(fConst42 * (fConst40 * fRec455[1] - fConst39 * (fConst37 * fTemp551 + fConst36 * fVec50[1])));
			float fTemp552 = 0.63661975f * std::atan(1.5707964f * fRec455[0]);
			fRec454[0] = ((iTemp9) ? fTemp552 : fRec454[1]);
			float fTemp553 = fRec454[0] + fTemp69 * (fTemp552 - fRec454[0]);
			fRec453[0] = ((iTemp39) ? fTemp553 : fRec453[1]);
			iRec459[0] = 1103515245 * iRec459[1] + 30987;
			float fTemp554 = float(iRec459[0]);
			fVec51[0] = fTemp554;
			float fRec458 = 4.656613e-10f * (fTemp554 - fVec51[1]);
			iRec460[0] = 1103515245 * iRec460[1] + 31187;
			iRec461[0] = 1103515245 * iRec461[1] + 31287;
			float fTemp555 = float(iRec461[0]);
			iRec462[0] = 1103515245 * iRec462[1] + 31587;
			float fTemp556 = fSlow937 * fRec155[0] * float(iRec462[0]) + 3.259629e-10f * fTemp555 * float(std::fabs(4.656613e-10f * float(iRec460[0])) < fTemp365) + fSlow924 * (fRec164[0] * fRec458 / fTemp363) + fTemp54 + fTemp361 * (fRec453[0] + fTemp38 * (fTemp553 - fRec453[0]));
			fVec52[0] = fTemp556;
			fRec452[0] = -(fConst46 * (fConst36 * fRec452[1] - fConst45 * (fConst41 * fTemp556 + fConst40 * fVec52[1])));
			fRec451[0] = -(fConst34 * (fConst33 * fRec451[1] - fConst32 * (fRec452[0] - fRec452[1])));
			float fTemp557 = std::fabs(fSlow276 * fRec452[0] + fSlow275 * fRec451[0]);
			float fTemp558 = ((fTemp557 > fRec450[1]) ? fSlow956 : fSlow953);
			fRec450[0] = fTemp557 * (1.0f - fTemp558) + fRec450[1] * fTemp558;
			float fTemp559 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec450[0]))) - fSlow160)));
			float fTemp560 = fRec452[0] * std::pow(1e+01f, 0.05f * (((fTemp559 > 0.0f) ? 2.0f * fTemp559 : 1.4005603f * fTemp559) - fTemp559));
			fVec53[0] = fTemp560;
			fRec449[0] = -(fConst49 * (fConst48 * fRec449[1] - fConst47 * (fTemp560 - fVec53[1])));
			fRec448[0] = fRec449[0] - fConst7 * (fConst5 * fRec448[2] + fConst3 * fRec448[1]);
			float fTemp561 = 2.0f * fRec448[1];
			iRec468[0] = 1103515245 * iRec468[1] + 14387;
			float fTemp562 = float(iRec468[0]);
			fVec54[0] = fTemp562;
			fRec467[0] = (4.656613e-10f * ((fTemp562 - fVec54[1]) / fTemp85) - fTemp88 * fRec467[1]) / fTemp87;
			float fTemp563 = fSlow1034 * fRec469[1];
			float fTemp564 = fSlow1064 * fRec470[1];
			iRec474[0] = 1103515245 * iRec474[1] + 18587;
			int iTemp565 = std::fabs(4.656613e-10f * float(iRec474[0])) < fTemp381;
			iRec476[0] = 1103515245 * iRec476[1] + 20587;
			fRec475[0] = ((iTemp565) ? 0.75f * std::fabs(4.656613e-10f * float(iRec476[0])) + 0.25f : fRec475[1]);
			fRec473[0] = std::max<float>(fSlow437 * fRec473[1], fRec475[0] * float(iTemp565));
			fRec472[0] = fConst72 * fRec473[0] + fConst66 * fRec472[1];
			float fTemp566 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1096 * (fSlow311 / (fSlow1095 * std::max<float>(fRec341[0], 0.7f * fRec472[0]) * fTemp378 + 1e-07f))))));
			float fTemp567 = 1.0f - fTemp566;
			float fTemp568 = fTemp391 * (fTemp392 - std::atan(1.5707964f * (fTemp389 + fSlow1136 * fRec217[0] * ((iSlow490) ? fTemp427 : fTemp428))));
			float fTemp569 = fSlow1137 * (fTemp568 / fRec217[0]);
			float fTemp570 = std::fabs(-fTemp569);
			float fTemp571 = ((fTemp570 > fRec480[1]) ? fConst80 : fSlow508);
			fRec480[0] = fTemp570 * (1.0f - fTemp571) + fRec480[1] * fTemp571;
			float fTemp572 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1164 * std::exp(-(fSlow1151 * fRec480[0]))))));
			float fTemp573 = 1.0f - fTemp572;
			fRec481[0] = fTemp572 * fRec481[1] - fSlow1137 * (fTemp568 * fTemp573 / fRec217[0]);
			fRec479[0] = fRec479[1] * fTemp572 + fRec481[0] * fTemp573;
			float fTemp574 = fRec479[0] + fTemp569;
			float fTemp575 = std::fabs(-fTemp574);
			float fTemp576 = ((fTemp575 > fRec478[1]) ? fConst81 : fSlow540);
			fRec478[0] = fTemp575 * (1.0f - fTemp576) + fRec478[1] * fTemp576;
			float fTemp577 = fTemp574 / (fSlow1165 * fRec213[0] * fRec478[0] + 1.0f);
			float fTemp578 = fRec479[0] - fTemp577;
			fVec55[IOTA0 & 2047] = fTemp578;
			float fTemp579 = fRec479[0] + fTemp485 * fVec55[(IOTA0 - iTemp484) & 2047] + fTemp444 * fVec55[(IOTA0 - iTemp446) & 2047] + fTemp481 * fVec55[(IOTA0 - iTemp480) & 2047] + fTemp454 * fVec55[(IOTA0 - iTemp456) & 2047] + fTemp477 * fVec55[(IOTA0 - iTemp476) & 2047] + fTemp475 * fVec55[(IOTA0 - iTemp474) & 2047] + fTemp469 * fVec55[(IOTA0 - iTemp471) & 2047] + fTemp473 * fVec55[(IOTA0 - iTemp472) & 2047] + fTemp464 * fVec55[(IOTA0 - iTemp466) & 2047] + fTemp459 * fVec55[(IOTA0 - iTemp461) & 2047] + fTemp479 * fVec55[(IOTA0 - iTemp478) & 2047] + fTemp449 * fVec55[(IOTA0 - iTemp451) & 2047] + fTemp483 * fVec55[(IOTA0 - iTemp482) & 2047] + fTemp388 * fVec55[(IOTA0 - iTemp441) & 2047] - fTemp577;
			fVec56[IOTA0 & 8191] = fTemp579;
			fRec477[0] = fTemp566 * fRec477[1] + fTemp567 * (fTemp507 * (fTemp496 * (fTemp497 * (0.0052083335f * fTemp498 * fVec56[(IOTA0 - iTemp506) & 8191] - 0.020833334f * fTemp499 * fVec56[(IOTA0 - iTemp505) & 8191]) + 0.03125f * fTemp500 * fVec56[(IOTA0 - iTemp504) & 8191]) - 0.020833334f * fTemp501 * fVec56[(IOTA0 - iTemp503) & 8191]) + 0.0052083335f * fTemp502 * fVec56[(IOTA0 - iTemp494) & 8191]);
			fRec471[0] = fRec471[1] * fTemp566 + fRec477[0] * fTemp567;
			fRec470[0] = fTemp377 * fRec471[0] - (fSlow1065 * fRec470[2] + fTemp564) / fSlow1061;
			fRec469[0] = (fTemp564 + fRec470[0] * fSlow1207 + fSlow1063 * fRec470[2]) / fSlow1061 - (fSlow1035 * fRec469[2] + fTemp563) / fSlow1031;
			fRec466[0] = (fTemp563 + fRec469[0] * fSlow1208 + fSlow1033 * fRec469[2]) / fSlow1031 + fSlow1005 * fRec184[0] * fRec467[0] - fConst58 * (fConst56 * fRec466[2] + fConst54 * fRec466[1]);
			fRec465[0] = fConst89 * (fRec466[2] + (fRec466[0] - 2.0f * fRec466[1])) - (fSlow992 * fRec465[2] + 2.0f * fSlow987 * fRec465[1]) / fSlow991;
			fRec464[0] = (fRec465[2] + fRec465[0] + 2.0f * fRec465[1]) / fSlow991 - (fSlow990 * fRec464[2] + 2.0f * fSlow987 * fRec464[1]) / fSlow989;
			fRec463[0] = (fRec464[2] + fRec464[0] + 2.0f * fRec464[1]) / fSlow989 - (fSlow988 * fRec463[2] + 2.0f * fSlow987 * fRec463[1]) / fSlow986;
			float fTemp580 = 2.0f * fRec463[1];
			float fTemp581 = ((iSlow147) ? fTemp426 : fSlow1209 * ((fRec463[2] + fRec463[0] + fTemp580) / fSlow986) + fSlow962 * std::atan(fConst50 * (fRec448[2] + fRec448[0] + fTemp561)));
			float fTemp582 = ((iSlow120) ? 0.0f : fTemp581);
			fVec57[0] = fTemp582;
			float fTemp583 = 0.5f * (((iSlow490) ? 0.0f : fTemp510) + ((iSlow490) ? 0.0f : fTemp582));
			float fTemp584 = (std::atan(1.5707964f * (fSlow1447 * fRec217[0] * ((iSlow490) ? fTemp510 : fTemp583) + fTemp544)) - fTemp547) * fTemp546;
			float fTemp585 = fSlow1448 * (fTemp584 / fRec217[0]);
			float fTemp586 = std::fabs(fTemp585);
			float fTemp587 = ((fTemp586 > fRec447[1]) ? fConst80 : fSlow508);
			fRec447[0] = fTemp586 * (1.0f - fTemp587) + fRec447[1] * fTemp587;
			float fTemp588 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1475 * std::exp(-(fSlow1462 * fRec447[0]))))));
			float fTemp589 = 1.0f - fTemp588;
			fRec482[0] = fTemp588 * fRec482[1] + fSlow1448 * (fTemp584 * fTemp589 / fRec217[0]);
			fRec446[0] = fRec446[1] * fTemp588 + fRec482[0] * fTemp589;
			float fTemp590 = fTemp585 - fRec446[0];
			float fTemp591 = std::fabs(fTemp590);
			float fTemp592 = ((fTemp591 > fRec445[1]) ? fConst81 : fSlow540);
			fRec445[0] = fTemp591 * (1.0f - fTemp592) + fRec445[1] * fTemp592;
			float fTemp593 = fTemp590 / (fSlow1476 * fRec213[0] * fRec445[0] + 1.0f);
			float fTemp594 = fRec446[0] + fTemp593;
			fVec58[IOTA0 & 2047] = fTemp594;
			int iTemp595 = int(fTemp541);
			int iTemp596 = std::min<int>(2049, std::max<int>(0, iTemp595));
			float fTemp597 = 0.75f * fTemp540;
			float fTemp598 = std::floor(fTemp597);
			float fTemp599 = fTemp598 + (1.0f - fTemp597);
			int iTemp600 = int(fTemp597);
			int iTemp601 = std::min<int>(2049, std::max<int>(0, iTemp600));
			float fTemp602 = 0.625f * fTemp540;
			float fTemp603 = std::floor(fTemp602);
			float fTemp604 = fTemp603 + (1.0f - fTemp602);
			int iTemp605 = int(fTemp602);
			int iTemp606 = std::min<int>(2049, std::max<int>(0, iTemp605));
			float fTemp607 = 0.5f * fTemp540;
			float fTemp608 = std::floor(fTemp607);
			float fTemp609 = fTemp608 + (1.0f - fTemp607);
			int iTemp610 = int(fTemp607);
			int iTemp611 = std::min<int>(2049, std::max<int>(0, iTemp610));
			float fTemp612 = 0.375f * fTemp540;
			float fTemp613 = std::floor(fTemp612);
			float fTemp614 = fTemp613 + (1.0f - fTemp612);
			int iTemp615 = int(fTemp612);
			int iTemp616 = std::min<int>(2049, std::max<int>(0, iTemp615));
			float fTemp617 = 0.25f * fTemp540;
			float fTemp618 = std::floor(fTemp617);
			float fTemp619 = fTemp618 + (1.0f - fTemp617);
			int iTemp620 = int(fTemp617);
			int iTemp621 = std::min<int>(2049, std::max<int>(0, iTemp620));
			float fTemp622 = 0.125f * fTemp540;
			float fTemp623 = std::floor(fTemp622);
			float fTemp624 = fTemp623 + (1.0f - fTemp622);
			int iTemp625 = int(fTemp622);
			int iTemp626 = std::min<int>(2049, std::max<int>(0, iTemp625));
			int iTemp627 = std::min<int>(2049, std::max<int>(0, iTemp625 + 1));
			float fTemp628 = fTemp622 - fTemp623;
			int iTemp629 = std::min<int>(2049, std::max<int>(0, iTemp620 + 1));
			float fTemp630 = fTemp617 - fTemp618;
			int iTemp631 = std::min<int>(2049, std::max<int>(0, iTemp615 + 1));
			float fTemp632 = fTemp612 - fTemp613;
			int iTemp633 = std::min<int>(2049, std::max<int>(0, iTemp610 + 1));
			float fTemp634 = fTemp607 - fTemp608;
			int iTemp635 = std::min<int>(2049, std::max<int>(0, iTemp605 + 1));
			float fTemp636 = fTemp602 - fTemp603;
			int iTemp637 = std::min<int>(2049, std::max<int>(0, iTemp600 + 1));
			float fTemp638 = fTemp597 - fTemp598;
			int iTemp639 = std::min<int>(2049, std::max<int>(0, iTemp595 + 1));
			float fTemp640 = fTemp541 - fTemp542;
			float fTemp641 = fRec446[0] + fTemp640 * fVec58[(IOTA0 - iTemp639) & 2047] + fTemp638 * fVec58[(IOTA0 - iTemp637) & 2047] + fTemp636 * fVec58[(IOTA0 - iTemp635) & 2047] + fTemp634 * fVec58[(IOTA0 - iTemp633) & 2047] + fTemp632 * fVec58[(IOTA0 - iTemp631) & 2047] + fTemp630 * fVec58[(IOTA0 - iTemp629) & 2047] + fTemp628 * fVec58[(IOTA0 - iTemp627) & 2047] + fTemp593 + fVec58[(IOTA0 - iTemp626) & 2047] * fTemp624 + fVec58[(IOTA0 - iTemp621) & 2047] * fTemp619 + fVec58[(IOTA0 - iTemp616) & 2047] * fTemp614 + fVec58[(IOTA0 - iTemp611) & 2047] * fTemp609 + fVec58[(IOTA0 - iTemp606) & 2047] * fTemp604 + fVec58[(IOTA0 - iTemp601) & 2047] * fTemp599 + fVec58[(IOTA0 - iTemp596) & 2047] * fTemp543;
			fVec59[IOTA0 & 8191] = fTemp641;
			iRec484[0] = 1103515245 * iRec484[1] + 26751;
			fRec483[0] = ((iTemp531) ? (((4.656613e-10f * float(iRec484[0])) > 0.0f) ? 1.0f : -1.0f) : fRec483[1]);
			iRec489[0] = 1103515245 * iRec489[1] + 16351;
			fRec488[0] = fConst84 * float(iRec489[0]) + fConst82 * fRec488[1];
			fRec487[0] = fConst83 * fRec488[0] + fConst82 * fRec487[1];
			fRec486[0] = fConst83 * fRec487[0] + fConst82 * fRec486[1];
			fRec485[0] = fConst83 * fRec486[0] + fConst82 * fRec485[1];
			float fTemp642 = ((iTemp6) ? 0.0f : fSlow1490 + fRec490[1]);
			fRec490[0] = fTemp642 - std::floor(fTemp642);
			int iTemp643 = std::max<int>(0, std::min<int>(int(65536.0f * fRec490[0]), 65535));
			float fTemp644 = ((iTemp6) ? 0.0f : fSlow1500 + fRec491[1]);
			fRec491[0] = fTemp644 - std::floor(fTemp644);
			int iTemp645 = std::max<int>(0, std::min<int>(int(65536.0f * fRec491[0]), 65535));
			float fTemp646 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow1517 * fTemp28 * (8.0f * fRec422[0] + 1.0f)) * (fSlow1504 * (fSlow1503 * ftbl0VhsDspSIG0[iTemp645] + fSlow1502 * ftbl1VhsDspSIG1[iTemp645]) + fSlow1494 * (fSlow1493 * ftbl0VhsDspSIG0[iTemp643] + fSlow1492 * ftbl1VhsDspSIG1[iTemp643]) + 0.07957747f * ((fSlow1484 * fTemp173 + fSlow1483 * fTemp172) / fSlow36) + fConst85 * fRec485[0]) + 0.0058f + 0.0006802721f * fRec422[0] * fRec483[0])));
			float fTemp647 = fTemp646 + -1.499995f;
			int iTemp648 = int(fTemp647);
			int iTemp649 = std::min<int>(8192, std::max<int>(0, iTemp648 + 4));
			float fTemp650 = std::floor(fTemp647);
			float fTemp651 = fTemp646 + (-3.0f - fTemp650);
			float fTemp652 = fTemp646 + (-2.0f - fTemp650);
			float fTemp653 = fTemp646 + (-1.0f - fTemp650);
			float fTemp654 = fTemp646 - fTemp650;
			float fTemp655 = fTemp654 * fTemp653;
			float fTemp656 = fTemp655 * fTemp652;
			float fTemp657 = fTemp656 * fTemp651;
			int iTemp658 = std::min<int>(8192, std::max<int>(0, iTemp648 + 3));
			int iTemp659 = std::min<int>(8192, std::max<int>(0, iTemp648 + 2));
			int iTemp660 = std::min<int>(8192, std::max<int>(0, iTemp648 + 1));
			int iTemp661 = std::min<int>(8192, std::max<int>(0, iTemp648));
			float fTemp662 = fTemp646 + (-4.0f - fTemp650);
			fRec441[0] = fTemp538 * fRec441[1] + fTemp539 * (fTemp662 * (fTemp651 * (fTemp652 * (0.0052083335f * fVec59[(IOTA0 - iTemp661) & 8191] * fTemp653 - 0.020833334f * fTemp654 * fVec59[(IOTA0 - iTemp660) & 8191]) + 0.03125f * fTemp655 * fVec59[(IOTA0 - iTemp659) & 8191]) - 0.020833334f * fTemp656 * fVec59[(IOTA0 - iTemp658) & 8191]) + 0.0052083335f * fTemp657 * fVec59[(IOTA0 - iTemp649) & 8191]);
			fRec427[0] = fRec427[1] * fTemp538 + fRec441[0] * fTemp539;
			fRec421[0] = fRec427[0] * fTemp532 - (fRec421[2] * fSlow1376 + fTemp530) / fSlow1372;
			fRec420[0] = (fTemp530 + fRec421[0] * fSlow1518 + fRec421[2] * fSlow1374) / fSlow1372 - (fRec420[2] * fSlow1346 + fTemp529) / fSlow1342;
			fRec417[0] = (fTemp529 + fRec420[0] * fSlow1519 + fRec420[2] * fSlow1344) / fSlow1342 + fSlow1316 * fRec184[0] * fRec418[0] - fConst58 * (fConst56 * fRec417[2] + fConst54 * fRec417[1]);
			fRec416[0] = fConst89 * (fRec417[2] + (fRec417[0] - 2.0f * fRec417[1])) - (fRec416[2] * fSlow1303 + 2.0f * fRec416[1] * fSlow1298) / fSlow1302;
			fRec415[0] = (fRec416[2] + fRec416[0] + 2.0f * fRec416[1]) / fSlow1302 - (fRec415[2] * fSlow1301 + 2.0f * fSlow1298 * fRec415[1]) / fSlow1300;
			fRec414[0] = (fRec415[2] + fRec415[0] + 2.0f * fRec415[1]) / fSlow1300 - (fRec414[2] * fSlow1299 + 2.0f * fSlow1298 * fRec414[1]) / fSlow1297;
			float fTemp663 = 2.0f * fRec414[1];
			float fTemp664 = ((iSlow120) ? fTemp509 : fSlow1520 * ((fRec414[2] + fRec414[0] + fTemp663) / fSlow1297) + fSlow1273 * std::atan(fConst50 * (fRec81[2] + fRec81[0] + fTemp527)));
			float fTemp665 = ((iSlow93) ? 0.0f : fTemp664);
			fVec60[0] = fTemp665;
			fRec80[0] = -(fConst34 * (fConst33 * fRec80[1] - fConst32 * (fTemp665 - fVec60[1])));
			float fTemp666 = std::fabs(fSlow276 * fTemp665 + fSlow275 * fRec80[0]);
			float fTemp667 = ((fTemp666 > fRec79[1]) ? fSlow284 : fSlow280);
			fRec79[0] = fTemp666 * (1.0f - fTemp667) + fRec79[1] * fTemp667;
			float fTemp668 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec79[0]))) - fSlow16);
			float fTemp669 = fTemp665 * std::pow(1e+01f, 0.05f * (((fTemp668 > 0.0f) ? 0.5f * fTemp668 : 0.714f * fTemp668) - fTemp668));
			fVec61[0] = fTemp669;
			fRec78[0] = -(fConst42 * (fConst40 * fRec78[1] - fConst39 * (fConst37 * fTemp669 + fConst36 * fVec61[1])));
			float fTemp670 = 0.63661975f * std::atan(1.5707964f * fRec78[0]);
			fRec77[0] = ((iTemp9) ? fTemp670 : fRec77[1]);
			float fTemp671 = fRec77[0] + fTemp69 * (fTemp670 - fRec77[0]);
			fRec76[0] = ((iTemp27) ? fTemp671 : fRec76[1]);
			fRec492[0] = fConst44 * float(iRec75[0] * (fRec74[0] > fConst43) * iTemp24) + fConst26 * fRec492[1];
			float fTemp672 = 1.0f - fRec492[0];
			iRec495[0] = 1103515245 * iRec495[1] + 31353;
			fRec494[0] = fConst29 * float(iRec495[0]) + fConst27 * fRec494[1];
			fRec493[0] = fConst28 * fRec494[0] + fConst27 * fRec493[1];
			float fTemp673 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow1533 * fTemp22 * fTemp56 * (std::fabs(fConst30 * fRec493[0]) + 0.3f)));
			float fTemp674 = std::max<float>(fTemp673, 0.2f);
			iRec497[0] = 1103515245 * iRec497[1] + 31025;
			float fTemp675 = float(iRec497[0]);
			fVec62[0] = fTemp675;
			float fRec496 = 4.656613e-10f * (fTemp675 - fVec62[1]);
			float fTemp676 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp673));
			iRec498[0] = 1103515245 * iRec498[1] + 31225;
			iRec499[0] = 1103515245 * iRec499[1] + 31325;
			iRec500[0] = 1103515245 * iRec500[1] + 31625;
			float fTemp677 = fSlow1559 * fRec155[0] * float(iRec500[0]) + 3.259629e-10f * float(iRec499[0]) * float(std::fabs(4.656613e-10f * float(iRec498[0])) < fTemp676) + fSlow1546 * (fRec164[0] * fRec496 / fTemp674) + fTemp54 + fTemp672 * (fRec76[0] + (fTemp671 - fRec76[0]) * fTemp26);
			fVec63[0] = fTemp677;
			fRec65[0] = -(fConst46 * (fConst36 * fRec65[1] - fConst45 * (fConst41 * fTemp677 + fConst40 * fVec63[1])));
			fRec64[0] = -(fConst34 * (fConst33 * fRec64[1] - fConst32 * (fRec65[0] - fRec65[1])));
			float fTemp678 = std::fabs(fSlow276 * fRec65[0] + fSlow275 * fRec64[0]);
			float fTemp679 = ((fTemp678 > fRec63[1]) ? fSlow1578 : fSlow1575);
			fRec63[0] = fTemp678 * (1.0f - fTemp679) + fRec63[1] * fTemp679;
			float fTemp680 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec63[0]))) - fSlow106)));
			float fTemp681 = fRec65[0] * std::pow(1e+01f, 0.05f * (((fTemp680 > 0.0f) ? 2.0f * fTemp680 : 1.4005603f * fTemp680) - fTemp680));
			fVec64[0] = fTemp681;
			fRec62[0] = -(fConst49 * (fConst48 * fRec62[1] - fConst47 * (fTemp681 - fVec64[1])));
			fRec61[0] = fRec62[0] - fConst7 * (fConst5 * fRec61[2] + fConst3 * fRec61[1]);
			float fTemp682 = 2.0f * fRec61[1];
			iRec506[0] = 1103515245 * iRec506[1] + 14425;
			float fTemp683 = float(iRec506[0]);
			fVec65[0] = fTemp683;
			fRec505[0] = (4.656613e-10f * ((fTemp683 - fVec65[1]) / fTemp85) - fTemp88 * fRec505[1]) / fTemp87;
			float fTemp684 = fSlow1656 * fRec507[1];
			float fTemp685 = fSlow1686 * fRec508[1];
			iRec511[0] = 1103515245 * iRec511[1] + 26353;
			int iTemp686 = std::fabs(4.656613e-10f * float(iRec511[0])) < (fSlow1701 * fTemp22);
			iRec513[0] = 1103515245 * iRec513[1] + 26553;
			fRec512[0] = ((iTemp686) ? 0.7f * std::fabs(4.656613e-10f * float(iRec513[0])) + 0.3f : fRec512[1]);
			fRec510[0] = std::max<float>(fConst64 * fRec510[1], fRec512[0] * float(iTemp686));
			fRec509[0] = fConst65 * fRec510[0] + fConst63 * fRec509[1];
			float fTemp687 = 1.0f - 0.35f * fRec509[0];
			float fTemp688 = 1.5f * fRec509[0] + 1.0f;
			iRec519[0] = 1103515245 * iRec519[1] + 24353;
			fRec518[0] = fConst70 * float(iRec519[0]) + fConst68 * fRec518[1];
			fRec517[0] = fConst69 * fRec518[0] + fConst68 * fRec517[1];
			float fTemp689 = fTemp22 * std::exp(fSlow18 * (fConst71 * fRec517[0] - fSlow438)) * (25.0f * fRec509[0] + 1.0f);
			iRec520[0] = 1103515245 * iRec520[1] + 18353;
			int iTemp690 = std::fabs(4.656613e-10f * float(iRec520[0])) < (fSlow1703 * fTemp689);
			iRec522[0] = 1103515245 * iRec522[1] + 20353;
			fRec521[0] = ((iTemp690) ? 0.75f * std::fabs(4.656613e-10f * float(iRec522[0])) + 0.25f : fRec521[1]);
			fRec516[0] = std::max<float>(fSlow437 * fRec516[1], fRec521[0] * float(iTemp690));
			fRec515[0] = fConst72 * fRec516[0] + fConst66 * fRec515[1];
			float fTemp691 = fSlow1704 * fTemp689;
			iRec525[0] = 1103515245 * iRec525[1] + 18625;
			int iTemp692 = std::fabs(4.656613e-10f * float(iRec525[0])) < fTemp691;
			iRec527[0] = 1103515245 * iRec527[1] + 20625;
			fRec526[0] = ((iTemp692) ? 0.75f * std::fabs(4.656613e-10f * float(iRec527[0])) + 0.25f : fRec526[1]);
			fRec524[0] = std::max<float>(fSlow437 * fRec524[1], fRec526[0] * float(iTemp692));
			fRec523[0] = fConst72 * fRec524[0] + fConst66 * fRec523[1];
			float fTemp693 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1718 * (fSlow311 / (fSlow1717 * std::max<float>(fRec515[0], 0.7f * fRec523[0]) * fTemp688 + 1e-07f))))));
			float fTemp694 = 1.0f - fTemp693;
			iRec531[0] = 1103515245 * iRec531[1] + 23353;
			fRec530[0] = fConst78 * float(iRec531[0]) + fConst76 * fRec530[1];
			fRec529[0] = fConst77 * fRec530[0] + fConst76 * fRec529[1];
			float fTemp695 = std::min<float>(fConst75, fSlow1732 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow1731 * std::fabs(fSlow458 * fRec529[0] + 1.0f) * (6.0f * fRec509[0] + 1.0f))) / fSlow311));
			float fTemp696 = 0.875f * fTemp695;
			float fTemp697 = std::floor(fTemp696);
			float fTemp698 = fTemp697 + (1.0f - fTemp696);
			float fTemp699 = std::min<float>(0.8f, fSlow1745 * fRec218[0]);
			float fTemp700 = 1.5707964f * fTemp699;
			float fTemp701 = VhsDsp_faustpower2_f(fTemp700) + 1.0f;
			float fTemp702 = std::atan(fTemp700);
			fRec544[0] = -(fConst34 * (fConst33 * fRec544[1] - fConst32 * (fTemp582 - fVec57[1])));
			float fTemp703 = std::fabs(fSlow276 * fTemp582 + fSlow275 * fRec544[0]);
			float fTemp704 = ((fTemp703 > fRec543[1]) ? fSlow284 : fSlow280);
			fRec543[0] = fTemp703 * (1.0f - fTemp704) + fRec543[1] * fTemp704;
			float fTemp705 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec543[0]))) - fSlow16);
			float fTemp706 = fTemp582 * std::pow(1e+01f, 0.05f * (((fTemp705 > 0.0f) ? 0.5f * fTemp705 : 0.714f * fTemp705) - fTemp705));
			fVec66[0] = fTemp706;
			fRec542[0] = -(fConst42 * (fConst40 * fRec542[1] - fConst39 * (fConst37 * fTemp706 + fConst36 * fVec66[1])));
			float fTemp707 = 0.63661975f * std::atan(1.5707964f * fRec542[0]);
			fRec541[0] = ((iTemp9) ? fTemp707 : fRec541[1]);
			float fTemp708 = fRec541[0] + fTemp69 * (fTemp707 - fRec541[0]);
			fRec540[0] = ((iTemp33) ? fTemp708 : fRec540[1]);
			iRec546[0] = 1103515245 * iRec546[1] + 31007;
			float fTemp709 = float(iRec546[0]);
			fVec67[0] = fTemp709;
			float fRec545 = 4.656613e-10f * (fTemp709 - fVec67[1]);
			iRec547[0] = 1103515245 * iRec547[1] + 31207;
			iRec548[0] = 1103515245 * iRec548[1] + 31307;
			iRec549[0] = 1103515245 * iRec549[1] + 31607;
			float fTemp710 = fSlow1248 * fRec155[0] * float(iRec549[0]) + 3.259629e-10f * float(iRec548[0]) * float(std::fabs(4.656613e-10f * float(iRec547[0])) < fTemp521) + fSlow1235 * (fRec164[0] * fRec545 / fTemp519) + fTemp54 + fTemp517 * (fRec540[0] + fTemp32 * (fTemp708 - fRec540[0]));
			fVec68[0] = fTemp710;
			fRec539[0] = -(fConst46 * (fConst36 * fRec539[1] - fConst45 * (fConst41 * fTemp710 + fConst40 * fVec68[1])));
			fRec538[0] = -(fConst34 * (fConst33 * fRec538[1] - fConst32 * (fRec539[0] - fRec539[1])));
			float fTemp711 = std::fabs(fSlow276 * fRec539[0] + fSlow275 * fRec538[0]);
			float fTemp712 = ((fTemp711 > fRec537[1]) ? fSlow1267 : fSlow1264);
			fRec537[0] = fTemp711 * (1.0f - fTemp712) + fRec537[1] * fTemp712;
			float fTemp713 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec537[0]))) - fSlow133)));
			float fTemp714 = fRec539[0] * std::pow(1e+01f, 0.05f * (((fTemp713 > 0.0f) ? 2.0f * fTemp713 : 1.4005603f * fTemp713) - fTemp713));
			fVec69[0] = fTemp714;
			fRec536[0] = -(fConst49 * (fConst48 * fRec536[1] - fConst47 * (fTemp714 - fVec69[1])));
			fRec535[0] = fRec536[0] - fConst7 * (fConst5 * fRec535[2] + fConst3 * fRec535[1]);
			float fTemp715 = 2.0f * fRec535[1];
			iRec555[0] = 1103515245 * iRec555[1] + 14407;
			float fTemp716 = float(iRec555[0]);
			fVec70[0] = fTemp716;
			fRec554[0] = (4.656613e-10f * ((fTemp716 - fVec70[1]) / fTemp85) - fTemp88 * fRec554[1]) / fTemp87;
			float fTemp717 = fSlow1345 * fRec556[1];
			float fTemp718 = fSlow1375 * fRec557[1];
			iRec561[0] = 1103515245 * iRec561[1] + 18607;
			int iTemp719 = std::fabs(4.656613e-10f * float(iRec561[0])) < fTemp536;
			iRec563[0] = 1103515245 * iRec563[1] + 20607;
			fRec562[0] = ((iTemp719) ? 0.75f * std::fabs(4.656613e-10f * float(iRec563[0])) + 0.25f : fRec562[1]);
			fRec560[0] = std::max<float>(fSlow437 * fRec560[1], fRec562[0] * float(iTemp719));
			fRec559[0] = fConst72 * fRec560[0] + fConst66 * fRec559[1];
			float fTemp720 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1407 * (fSlow311 / (fSlow1406 * std::max<float>(fRec428[0], 0.7f * fRec559[0]) * fTemp533 + 1e-07f))))));
			float fTemp721 = 1.0f - fTemp720;
			float fTemp722 = fTemp546 * (fTemp547 - std::atan(1.5707964f * (fTemp544 + fSlow1447 * fRec217[0] * ((iSlow490) ? fTemp582 : fTemp583))));
			float fTemp723 = fSlow1448 * (fTemp722 / fRec217[0]);
			float fTemp724 = std::fabs(-fTemp723);
			float fTemp725 = ((fTemp724 > fRec567[1]) ? fConst80 : fSlow508);
			fRec567[0] = fTemp724 * (1.0f - fTemp725) + fRec567[1] * fTemp725;
			float fTemp726 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1475 * std::exp(-(fSlow1462 * fRec567[0]))))));
			float fTemp727 = 1.0f - fTemp726;
			fRec568[0] = fTemp726 * fRec568[1] - fSlow1448 * (fTemp722 * fTemp727 / fRec217[0]);
			fRec566[0] = fRec566[1] * fTemp726 + fRec568[0] * fTemp727;
			float fTemp728 = fRec566[0] + fTemp723;
			float fTemp729 = std::fabs(-fTemp728);
			float fTemp730 = ((fTemp729 > fRec565[1]) ? fConst81 : fSlow540);
			fRec565[0] = fTemp729 * (1.0f - fTemp730) + fRec565[1] * fTemp730;
			float fTemp731 = fTemp728 / (fSlow1476 * fRec213[0] * fRec565[0] + 1.0f);
			float fTemp732 = fRec566[0] - fTemp731;
			fVec71[IOTA0 & 2047] = fTemp732;
			float fTemp733 = fRec566[0] + fTemp640 * fVec71[(IOTA0 - iTemp639) & 2047] + fTemp638 * fVec71[(IOTA0 - iTemp637) & 2047] + fTemp636 * fVec71[(IOTA0 - iTemp635) & 2047] + fTemp634 * fVec71[(IOTA0 - iTemp633) & 2047] + fTemp632 * fVec71[(IOTA0 - iTemp631) & 2047] + fTemp630 * fVec71[(IOTA0 - iTemp629) & 2047] + fTemp624 * fVec71[(IOTA0 - iTemp626) & 2047] + fTemp628 * fVec71[(IOTA0 - iTemp627) & 2047] + fTemp619 * fVec71[(IOTA0 - iTemp621) & 2047] + fTemp614 * fVec71[(IOTA0 - iTemp616) & 2047] + fTemp609 * fVec71[(IOTA0 - iTemp611) & 2047] + fTemp604 * fVec71[(IOTA0 - iTemp606) & 2047] + fTemp599 * fVec71[(IOTA0 - iTemp601) & 2047] + fTemp543 * fVec71[(IOTA0 - iTemp596) & 2047] - fTemp731;
			fVec72[IOTA0 & 8191] = fTemp733;
			fRec564[0] = fTemp720 * fRec564[1] + fTemp721 * (fTemp662 * (fTemp651 * (fTemp652 * (0.0052083335f * fTemp653 * fVec72[(IOTA0 - iTemp661) & 8191] - 0.020833334f * fTemp654 * fVec72[(IOTA0 - iTemp660) & 8191]) + 0.03125f * fTemp655 * fVec72[(IOTA0 - iTemp659) & 8191]) - 0.020833334f * fTemp656 * fVec72[(IOTA0 - iTemp658) & 8191]) + 0.0052083335f * fTemp657 * fVec72[(IOTA0 - iTemp649) & 8191]);
			fRec558[0] = fRec558[1] * fTemp720 + fRec564[0] * fTemp721;
			fRec557[0] = fTemp532 * fRec558[0] - (fSlow1376 * fRec557[2] + fTemp718) / fSlow1372;
			fRec556[0] = (fTemp718 + fRec557[0] * fSlow1518 + fSlow1374 * fRec557[2]) / fSlow1372 - (fSlow1346 * fRec556[2] + fTemp717) / fSlow1342;
			fRec553[0] = (fTemp717 + fRec556[0] * fSlow1519 + fSlow1344 * fRec556[2]) / fSlow1342 + fSlow1316 * fRec184[0] * fRec554[0] - fConst58 * (fConst56 * fRec553[2] + fConst54 * fRec553[1]);
			fRec552[0] = fConst89 * (fRec553[2] + (fRec553[0] - 2.0f * fRec553[1])) - (fSlow1303 * fRec552[2] + 2.0f * fSlow1298 * fRec552[1]) / fSlow1302;
			fRec551[0] = (fRec552[2] + fRec552[0] + 2.0f * fRec552[1]) / fSlow1302 - (fSlow1301 * fRec551[2] + 2.0f * fSlow1298 * fRec551[1]) / fSlow1300;
			fRec550[0] = (fRec551[2] + fRec551[0] + 2.0f * fRec551[1]) / fSlow1300 - (fSlow1299 * fRec550[2] + 2.0f * fSlow1298 * fRec550[1]) / fSlow1297;
			float fTemp734 = 2.0f * fRec550[1];
			float fTemp735 = ((iSlow120) ? fTemp581 : fSlow1520 * ((fRec550[2] + fRec550[0] + fTemp734) / fSlow1297) + fSlow1273 * std::atan(fConst50 * (fRec535[2] + fRec535[0] + fTemp715)));
			float fTemp736 = ((iSlow93) ? 0.0f : fTemp735);
			fVec73[0] = fTemp736;
			float fTemp737 = 0.5f * (((iSlow490) ? 0.0f : fTemp665) + ((iSlow490) ? 0.0f : fTemp736));
			float fTemp738 = (std::atan(1.5707964f * (fSlow1758 * fRec217[0] * ((iSlow490) ? fTemp665 : fTemp737) + fTemp699)) - fTemp702) * fTemp701;
			float fTemp739 = fSlow1759 * (fTemp738 / fRec217[0]);
			float fTemp740 = std::fabs(fTemp739);
			float fTemp741 = ((fTemp740 > fRec534[1]) ? fConst80 : fSlow508);
			fRec534[0] = fTemp740 * (1.0f - fTemp741) + fRec534[1] * fTemp741;
			float fTemp742 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1786 * std::exp(-(fSlow1773 * fRec534[0]))))));
			float fTemp743 = 1.0f - fTemp742;
			fRec569[0] = fTemp742 * fRec569[1] + fSlow1759 * (fTemp738 * fTemp743 / fRec217[0]);
			fRec533[0] = fRec533[1] * fTemp742 + fRec569[0] * fTemp743;
			float fTemp744 = fTemp739 - fRec533[0];
			float fTemp745 = std::fabs(fTemp744);
			float fTemp746 = ((fTemp745 > fRec532[1]) ? fConst81 : fSlow540);
			fRec532[0] = fTemp745 * (1.0f - fTemp746) + fRec532[1] * fTemp746;
			float fTemp747 = fTemp744 / (fSlow1787 * fRec213[0] * fRec532[0] + 1.0f);
			float fTemp748 = fRec533[0] + fTemp747;
			fVec74[IOTA0 & 2047] = fTemp748;
			int iTemp749 = int(fTemp696);
			int iTemp750 = std::min<int>(2049, std::max<int>(0, iTemp749));
			float fTemp751 = 0.75f * fTemp695;
			float fTemp752 = std::floor(fTemp751);
			float fTemp753 = fTemp752 + (1.0f - fTemp751);
			int iTemp754 = int(fTemp751);
			int iTemp755 = std::min<int>(2049, std::max<int>(0, iTemp754));
			float fTemp756 = 0.625f * fTemp695;
			float fTemp757 = std::floor(fTemp756);
			float fTemp758 = fTemp757 + (1.0f - fTemp756);
			int iTemp759 = int(fTemp756);
			int iTemp760 = std::min<int>(2049, std::max<int>(0, iTemp759));
			float fTemp761 = 0.5f * fTemp695;
			float fTemp762 = std::floor(fTemp761);
			float fTemp763 = fTemp762 + (1.0f - fTemp761);
			int iTemp764 = int(fTemp761);
			int iTemp765 = std::min<int>(2049, std::max<int>(0, iTemp764));
			float fTemp766 = 0.375f * fTemp695;
			float fTemp767 = std::floor(fTemp766);
			float fTemp768 = fTemp767 + (1.0f - fTemp766);
			int iTemp769 = int(fTemp766);
			int iTemp770 = std::min<int>(2049, std::max<int>(0, iTemp769));
			float fTemp771 = 0.25f * fTemp695;
			float fTemp772 = std::floor(fTemp771);
			float fTemp773 = fTemp772 + (1.0f - fTemp771);
			int iTemp774 = int(fTemp771);
			int iTemp775 = std::min<int>(2049, std::max<int>(0, iTemp774));
			float fTemp776 = 0.125f * fTemp695;
			float fTemp777 = std::floor(fTemp776);
			float fTemp778 = fTemp777 + (1.0f - fTemp776);
			int iTemp779 = int(fTemp776);
			int iTemp780 = std::min<int>(2049, std::max<int>(0, iTemp779));
			int iTemp781 = std::min<int>(2049, std::max<int>(0, iTemp779 + 1));
			float fTemp782 = fTemp776 - fTemp777;
			int iTemp783 = std::min<int>(2049, std::max<int>(0, iTemp774 + 1));
			float fTemp784 = fTemp771 - fTemp772;
			int iTemp785 = std::min<int>(2049, std::max<int>(0, iTemp769 + 1));
			float fTemp786 = fTemp766 - fTemp767;
			int iTemp787 = std::min<int>(2049, std::max<int>(0, iTemp764 + 1));
			float fTemp788 = fTemp761 - fTemp762;
			int iTemp789 = std::min<int>(2049, std::max<int>(0, iTemp759 + 1));
			float fTemp790 = fTemp756 - fTemp757;
			int iTemp791 = std::min<int>(2049, std::max<int>(0, iTemp754 + 1));
			float fTemp792 = fTemp751 - fTemp752;
			int iTemp793 = std::min<int>(2049, std::max<int>(0, iTemp749 + 1));
			float fTemp794 = fTemp696 - fTemp697;
			float fTemp795 = fRec533[0] + fTemp794 * fVec74[(IOTA0 - iTemp793) & 2047] + fTemp792 * fVec74[(IOTA0 - iTemp791) & 2047] + fTemp790 * fVec74[(IOTA0 - iTemp789) & 2047] + fTemp788 * fVec74[(IOTA0 - iTemp787) & 2047] + fTemp786 * fVec74[(IOTA0 - iTemp785) & 2047] + fTemp784 * fVec74[(IOTA0 - iTemp783) & 2047] + fTemp782 * fVec74[(IOTA0 - iTemp781) & 2047] + fTemp747 + fVec74[(IOTA0 - iTemp780) & 2047] * fTemp778 + fVec74[(IOTA0 - iTemp775) & 2047] * fTemp773 + fVec74[(IOTA0 - iTemp770) & 2047] * fTemp768 + fVec74[(IOTA0 - iTemp765) & 2047] * fTemp763 + fVec74[(IOTA0 - iTemp760) & 2047] * fTemp758 + fVec74[(IOTA0 - iTemp755) & 2047] * fTemp753 + fVec74[(IOTA0 - iTemp750) & 2047] * fTemp698;
			fVec75[IOTA0 & 8191] = fTemp795;
			iRec571[0] = 1103515245 * iRec571[1] + 26753;
			fRec570[0] = ((iTemp686) ? (((4.656613e-10f * float(iRec571[0])) > 0.0f) ? 1.0f : -1.0f) : fRec570[1]);
			iRec576[0] = 1103515245 * iRec576[1] + 16353;
			fRec575[0] = fConst84 * float(iRec576[0]) + fConst82 * fRec575[1];
			fRec574[0] = fConst83 * fRec575[0] + fConst82 * fRec574[1];
			fRec573[0] = fConst83 * fRec574[0] + fConst82 * fRec573[1];
			fRec572[0] = fConst83 * fRec573[0] + fConst82 * fRec572[1];
			float fTemp796 = ((iTemp6) ? 0.0f : fSlow1801 + fRec577[1]);
			fRec577[0] = fTemp796 - std::floor(fTemp796);
			int iTemp797 = std::max<int>(0, std::min<int>(int(65536.0f * fRec577[0]), 65535));
			float fTemp798 = ((iTemp6) ? 0.0f : fSlow1811 + fRec578[1]);
			fRec578[0] = fTemp798 - std::floor(fTemp798);
			int iTemp799 = std::max<int>(0, std::min<int>(int(65536.0f * fRec578[0]), 65535));
			float fTemp800 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow1828 * fTemp22 * (8.0f * fRec509[0] + 1.0f)) * (fSlow1815 * (fSlow1814 * ftbl0VhsDspSIG0[iTemp799] + fSlow1813 * ftbl1VhsDspSIG1[iTemp799]) + fSlow1805 * (fSlow1804 * ftbl0VhsDspSIG0[iTemp797] + fSlow1803 * ftbl1VhsDspSIG1[iTemp797]) + 0.07957747f * ((fSlow1795 * fTemp173 + fSlow1794 * fTemp172) / fSlow36) + fConst85 * fRec572[0]) + 0.0058f + 0.0006802721f * fRec509[0] * fRec570[0])));
			float fTemp801 = fTemp800 + -1.499995f;
			int iTemp802 = int(fTemp801);
			int iTemp803 = std::min<int>(8192, std::max<int>(0, iTemp802 + 4));
			float fTemp804 = std::floor(fTemp801);
			float fTemp805 = fTemp800 + (-3.0f - fTemp804);
			float fTemp806 = fTemp800 + (-2.0f - fTemp804);
			float fTemp807 = fTemp800 + (-1.0f - fTemp804);
			float fTemp808 = fTemp800 - fTemp804;
			float fTemp809 = fTemp808 * fTemp807;
			float fTemp810 = fTemp809 * fTemp806;
			float fTemp811 = fTemp810 * fTemp805;
			int iTemp812 = std::min<int>(8192, std::max<int>(0, iTemp802 + 3));
			int iTemp813 = std::min<int>(8192, std::max<int>(0, iTemp802 + 2));
			int iTemp814 = std::min<int>(8192, std::max<int>(0, iTemp802 + 1));
			int iTemp815 = std::min<int>(8192, std::max<int>(0, iTemp802));
			float fTemp816 = fTemp800 + (-4.0f - fTemp804);
			fRec528[0] = fTemp693 * fRec528[1] + fTemp694 * (fTemp816 * (fTemp805 * (fTemp806 * (0.0052083335f * fVec75[(IOTA0 - iTemp815) & 8191] * fTemp807 - 0.020833334f * fTemp808 * fVec75[(IOTA0 - iTemp814) & 8191]) + 0.03125f * fTemp809 * fVec75[(IOTA0 - iTemp813) & 8191]) - 0.020833334f * fTemp810 * fVec75[(IOTA0 - iTemp812) & 8191]) + 0.0052083335f * fTemp811 * fVec75[(IOTA0 - iTemp803) & 8191]);
			fRec514[0] = fRec514[1] * fTemp693 + fRec528[0] * fTemp694;
			fRec508[0] = fRec514[0] * fTemp687 - (fRec508[2] * fSlow1687 + fTemp685) / fSlow1683;
			fRec507[0] = (fTemp685 + fRec508[0] * fSlow1829 + fRec508[2] * fSlow1685) / fSlow1683 - (fRec507[2] * fSlow1657 + fTemp684) / fSlow1653;
			fRec504[0] = (fTemp684 + fRec507[0] * fSlow1830 + fRec507[2] * fSlow1655) / fSlow1653 + fSlow1627 * fRec184[0] * fRec505[0] - fConst58 * (fConst56 * fRec504[2] + fConst54 * fRec504[1]);
			fRec503[0] = fConst89 * (fRec504[2] + (fRec504[0] - 2.0f * fRec504[1])) - (fRec503[2] * fSlow1614 + 2.0f * fRec503[1] * fSlow1609) / fSlow1613;
			fRec502[0] = (fRec503[2] + fRec503[0] + 2.0f * fRec503[1]) / fSlow1613 - (fRec502[2] * fSlow1612 + 2.0f * fSlow1609 * fRec502[1]) / fSlow1611;
			fRec501[0] = (fRec502[2] + fRec502[0] + 2.0f * fRec502[1]) / fSlow1611 - (fRec501[2] * fSlow1610 + 2.0f * fSlow1609 * fRec501[1]) / fSlow1608;
			float fTemp817 = 2.0f * fRec501[1];
			float fTemp818 = ((iSlow93) ? fTemp664 : fSlow1831 * ((fRec501[2] + fRec501[0] + fTemp817) / fSlow1608) + fSlow1584 * std::atan(fConst50 * (fRec61[2] + fRec61[0] + fTemp682)));
			float fTemp819 = ((iSlow66) ? 0.0f : fTemp818);
			fVec76[0] = fTemp819;
			fRec60[0] = -(fConst34 * (fConst33 * fRec60[1] - fConst32 * (fTemp819 - fVec76[1])));
			float fTemp820 = std::fabs(fSlow276 * fTemp819 + fSlow275 * fRec60[0]);
			float fTemp821 = ((fTemp820 > fRec59[1]) ? fSlow284 : fSlow280);
			fRec59[0] = fTemp820 * (1.0f - fTemp821) + fRec59[1] * fTemp821;
			float fTemp822 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec59[0]))) - fSlow16);
			float fTemp823 = fTemp819 * std::pow(1e+01f, 0.05f * (((fTemp822 > 0.0f) ? 0.5f * fTemp822 : 0.714f * fTemp822) - fTemp822));
			fVec77[0] = fTemp823;
			fRec58[0] = -(fConst42 * (fConst40 * fRec58[1] - fConst39 * (fConst37 * fTemp823 + fConst36 * fVec77[1])));
			float fTemp824 = 0.63661975f * std::atan(1.5707964f * fRec58[0]);
			fRec57[0] = ((iTemp9) ? fTemp824 : fRec57[1]);
			float fTemp825 = fRec57[0] + fTemp69 * (fTemp824 - fRec57[0]);
			fRec56[0] = ((iTemp21) ? fTemp825 : fRec56[1]);
			fRec579[0] = fConst44 * float(iRec55[0] * (fRec54[0] > fConst43) * iTemp18) + fConst26 * fRec579[1];
			float fTemp826 = 1.0f - fRec579[0];
			iRec582[0] = 1103515245 * iRec582[1] + 31355;
			fRec581[0] = fConst29 * float(iRec582[0]) + fConst27 * fRec581[1];
			fRec580[0] = fConst28 * fRec581[0] + fConst27 * fRec580[1];
			float fTemp827 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow1844 * fTemp16 * fTemp56 * (std::fabs(fConst30 * fRec580[0]) + 0.3f)));
			float fTemp828 = std::max<float>(fTemp827, 0.2f);
			iRec584[0] = 1103515245 * iRec584[1] + 31045;
			float fTemp829 = float(iRec584[0]);
			fVec78[0] = fTemp829;
			float fRec583 = 4.656613e-10f * (fTemp829 - fVec78[1]);
			float fTemp830 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp827));
			iRec585[0] = 1103515245 * iRec585[1] + 31645;
			float fTemp831 = fSlow1870 * fRec155[0] * float(iRec585[0]) + 3.259629e-10f * fTemp57 * float(std::fabs(4.656613e-10f * fTemp61) < fTemp830) + fSlow1857 * (fRec164[0] * fRec583 / fTemp828) + fTemp54 + fTemp826 * (fRec56[0] + (fTemp825 - fRec56[0]) * fTemp20);
			fVec79[0] = fTemp831;
			fRec45[0] = -(fConst46 * (fConst36 * fRec45[1] - fConst45 * (fConst41 * fTemp831 + fConst40 * fVec79[1])));
			fRec44[0] = -(fConst34 * (fConst33 * fRec44[1] - fConst32 * (fRec45[0] - fRec45[1])));
			float fTemp832 = std::fabs(fSlow276 * fRec45[0] + fSlow275 * fRec44[0]);
			float fTemp833 = ((fTemp832 > fRec43[1]) ? fSlow1889 : fSlow1886);
			fRec43[0] = fTemp832 * (1.0f - fTemp833) + fRec43[1] * fTemp833;
			float fTemp834 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec43[0]))) - fSlow79)));
			float fTemp835 = fRec45[0] * std::pow(1e+01f, 0.05f * (((fTemp834 > 0.0f) ? 2.0f * fTemp834 : 1.4005603f * fTemp834) - fTemp834));
			fVec80[0] = fTemp835;
			fRec42[0] = -(fConst49 * (fConst48 * fRec42[1] - fConst47 * (fTemp835 - fVec80[1])));
			fRec41[0] = fRec42[0] - fConst7 * (fConst5 * fRec41[2] + fConst3 * fRec41[1]);
			float fTemp836 = 2.0f * fRec41[1];
			iRec591[0] = 1103515245 * iRec591[1] + 14445;
			float fTemp837 = float(iRec591[0]);
			fVec81[0] = fTemp837;
			fRec590[0] = (4.656613e-10f * ((fTemp837 - fVec81[1]) / fTemp85) - fTemp88 * fRec590[1]) / fTemp87;
			float fTemp838 = fSlow1967 * fRec592[1];
			float fTemp839 = fSlow1997 * fRec593[1];
			iRec596[0] = 1103515245 * iRec596[1] + 26355;
			int iTemp840 = std::fabs(4.656613e-10f * float(iRec596[0])) < (fSlow2012 * fTemp16);
			iRec598[0] = 1103515245 * iRec598[1] + 26555;
			fRec597[0] = ((iTemp840) ? 0.7f * std::fabs(4.656613e-10f * float(iRec598[0])) + 0.3f : fRec597[1]);
			fRec595[0] = std::max<float>(fConst64 * fRec595[1], fRec597[0] * float(iTemp840));
			fRec594[0] = fConst65 * fRec595[0] + fConst63 * fRec594[1];
			float fTemp841 = 1.0f - 0.35f * fRec594[0];
			float fTemp842 = 1.5f * fRec594[0] + 1.0f;
			iRec604[0] = 1103515245 * iRec604[1] + 24355;
			fRec603[0] = fConst70 * float(iRec604[0]) + fConst68 * fRec603[1];
			fRec602[0] = fConst69 * fRec603[0] + fConst68 * fRec602[1];
			float fTemp843 = fTemp16 * std::exp(fSlow18 * (fConst71 * fRec602[0] - fSlow438)) * (25.0f * fRec594[0] + 1.0f);
			iRec605[0] = 1103515245 * iRec605[1] + 18355;
			int iTemp844 = std::fabs(4.656613e-10f * float(iRec605[0])) < (fSlow2014 * fTemp843);
			iRec607[0] = 1103515245 * iRec607[1] + 20355;
			fRec606[0] = ((iTemp844) ? 0.75f * std::fabs(4.656613e-10f * float(iRec607[0])) + 0.25f : fRec606[1]);
			fRec601[0] = std::max<float>(fSlow437 * fRec601[1], fRec606[0] * float(iTemp844));
			fRec600[0] = fConst72 * fRec601[0] + fConst66 * fRec600[1];
			float fTemp845 = fSlow2015 * fTemp843;
			iRec610[0] = 1103515245 * iRec610[1] + 18645;
			int iTemp846 = std::fabs(4.656613e-10f * float(iRec610[0])) < fTemp845;
			iRec612[0] = 1103515245 * iRec612[1] + 20645;
			fRec611[0] = ((iTemp846) ? 0.75f * std::fabs(4.656613e-10f * float(iRec612[0])) + 0.25f : fRec611[1]);
			fRec609[0] = std::max<float>(fSlow437 * fRec609[1], fRec611[0] * float(iTemp846));
			fRec608[0] = fConst72 * fRec609[0] + fConst66 * fRec608[1];
			float fTemp847 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2029 * (fSlow311 / (fSlow2028 * std::max<float>(fRec600[0], 0.7f * fRec608[0]) * fTemp842 + 1e-07f))))));
			float fTemp848 = 1.0f - fTemp847;
			iRec616[0] = 1103515245 * iRec616[1] + 23355;
			fRec615[0] = fConst78 * float(iRec616[0]) + fConst76 * fRec615[1];
			fRec614[0] = fConst77 * fRec615[0] + fConst76 * fRec614[1];
			float fTemp849 = std::min<float>(fConst75, fSlow2043 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow2042 * std::fabs(fSlow458 * fRec614[0] + 1.0f) * (6.0f * fRec594[0] + 1.0f))) / fSlow311));
			float fTemp850 = 0.875f * fTemp849;
			float fTemp851 = std::floor(fTemp850);
			float fTemp852 = fTemp851 + (1.0f - fTemp850);
			float fTemp853 = std::min<float>(0.8f, fSlow2056 * fRec218[0]);
			float fTemp854 = 1.5707964f * fTemp853;
			float fTemp855 = VhsDsp_faustpower2_f(fTemp854) + 1.0f;
			float fTemp856 = std::atan(fTemp854);
			fRec629[0] = -(fConst34 * (fConst33 * fRec629[1] - fConst32 * (fTemp736 - fVec73[1])));
			float fTemp857 = std::fabs(fSlow276 * fTemp736 + fSlow275 * fRec629[0]);
			float fTemp858 = ((fTemp857 > fRec628[1]) ? fSlow284 : fSlow280);
			fRec628[0] = fTemp857 * (1.0f - fTemp858) + fRec628[1] * fTemp858;
			float fTemp859 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec628[0]))) - fSlow16);
			float fTemp860 = fTemp736 * std::pow(1e+01f, 0.05f * (((fTemp859 > 0.0f) ? 0.5f * fTemp859 : 0.714f * fTemp859) - fTemp859));
			fVec82[0] = fTemp860;
			fRec627[0] = -(fConst42 * (fConst40 * fRec627[1] - fConst39 * (fConst37 * fTemp860 + fConst36 * fVec82[1])));
			float fTemp861 = 0.63661975f * std::atan(1.5707964f * fRec627[0]);
			fRec626[0] = ((iTemp9) ? fTemp861 : fRec626[1]);
			float fTemp862 = fRec626[0] + fTemp69 * (fTemp861 - fRec626[0]);
			fRec625[0] = ((iTemp27) ? fTemp862 : fRec625[1]);
			iRec631[0] = 1103515245 * iRec631[1] + 31027;
			float fTemp863 = float(iRec631[0]);
			fVec83[0] = fTemp863;
			float fRec630 = 4.656613e-10f * (fTemp863 - fVec83[1]);
			iRec632[0] = 1103515245 * iRec632[1] + 31227;
			iRec633[0] = 1103515245 * iRec633[1] + 31327;
			iRec634[0] = 1103515245 * iRec634[1] + 31627;
			float fTemp864 = fSlow1559 * fRec155[0] * float(iRec634[0]) + 3.259629e-10f * float(iRec633[0]) * float(std::fabs(4.656613e-10f * float(iRec632[0])) < fTemp676) + fSlow1546 * (fRec164[0] * fRec630 / fTemp674) + fTemp54 + fTemp672 * (fRec625[0] + fTemp26 * (fTemp862 - fRec625[0]));
			fVec84[0] = fTemp864;
			fRec624[0] = -(fConst46 * (fConst36 * fRec624[1] - fConst45 * (fConst41 * fTemp864 + fConst40 * fVec84[1])));
			fRec623[0] = -(fConst34 * (fConst33 * fRec623[1] - fConst32 * (fRec624[0] - fRec624[1])));
			float fTemp865 = std::fabs(fSlow276 * fRec624[0] + fSlow275 * fRec623[0]);
			float fTemp866 = ((fTemp865 > fRec622[1]) ? fSlow1578 : fSlow1575);
			fRec622[0] = fTemp865 * (1.0f - fTemp866) + fRec622[1] * fTemp866;
			float fTemp867 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec622[0]))) - fSlow106)));
			float fTemp868 = fRec624[0] * std::pow(1e+01f, 0.05f * (((fTemp867 > 0.0f) ? 2.0f * fTemp867 : 1.4005603f * fTemp867) - fTemp867));
			fVec85[0] = fTemp868;
			fRec621[0] = -(fConst49 * (fConst48 * fRec621[1] - fConst47 * (fTemp868 - fVec85[1])));
			fRec620[0] = fRec621[0] - fConst7 * (fConst5 * fRec620[2] + fConst3 * fRec620[1]);
			float fTemp869 = 2.0f * fRec620[1];
			iRec640[0] = 1103515245 * iRec640[1] + 14427;
			float fTemp870 = float(iRec640[0]);
			fVec86[0] = fTemp870;
			fRec639[0] = (4.656613e-10f * ((fTemp870 - fVec86[1]) / fTemp85) - fTemp88 * fRec639[1]) / fTemp87;
			float fTemp871 = fSlow1656 * fRec641[1];
			float fTemp872 = fSlow1686 * fRec642[1];
			iRec646[0] = 1103515245 * iRec646[1] + 18627;
			int iTemp873 = std::fabs(4.656613e-10f * float(iRec646[0])) < fTemp691;
			iRec648[0] = 1103515245 * iRec648[1] + 20627;
			fRec647[0] = ((iTemp873) ? 0.75f * std::fabs(4.656613e-10f * float(iRec648[0])) + 0.25f : fRec647[1]);
			fRec645[0] = std::max<float>(fSlow437 * fRec645[1], fRec647[0] * float(iTemp873));
			fRec644[0] = fConst72 * fRec645[0] + fConst66 * fRec644[1];
			float fTemp874 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow1718 * (fSlow311 / (fSlow1717 * std::max<float>(fRec515[0], 0.7f * fRec644[0]) * fTemp688 + 1e-07f))))));
			float fTemp875 = 1.0f - fTemp874;
			float fTemp876 = fTemp701 * (fTemp702 - std::atan(1.5707964f * (fTemp699 + fSlow1758 * fRec217[0] * ((iSlow490) ? fTemp736 : fTemp737))));
			float fTemp877 = fSlow1759 * (fTemp876 / fRec217[0]);
			float fTemp878 = std::fabs(-fTemp877);
			float fTemp879 = ((fTemp878 > fRec652[1]) ? fConst80 : fSlow508);
			fRec652[0] = fTemp878 * (1.0f - fTemp879) + fRec652[1] * fTemp879;
			float fTemp880 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow1786 * std::exp(-(fSlow1773 * fRec652[0]))))));
			float fTemp881 = 1.0f - fTemp880;
			fRec653[0] = fTemp880 * fRec653[1] - fSlow1759 * (fTemp876 * fTemp881 / fRec217[0]);
			fRec651[0] = fRec651[1] * fTemp880 + fRec653[0] * fTemp881;
			float fTemp882 = fRec651[0] + fTemp877;
			float fTemp883 = std::fabs(-fTemp882);
			float fTemp884 = ((fTemp883 > fRec650[1]) ? fConst81 : fSlow540);
			fRec650[0] = fTemp883 * (1.0f - fTemp884) + fRec650[1] * fTemp884;
			float fTemp885 = fTemp882 / (fSlow1787 * fRec213[0] * fRec650[0] + 1.0f);
			float fTemp886 = fRec651[0] - fTemp885;
			fVec87[IOTA0 & 2047] = fTemp886;
			float fTemp887 = fRec651[0] + fTemp794 * fVec87[(IOTA0 - iTemp793) & 2047] + fTemp792 * fVec87[(IOTA0 - iTemp791) & 2047] + fTemp790 * fVec87[(IOTA0 - iTemp789) & 2047] + fTemp788 * fVec87[(IOTA0 - iTemp787) & 2047] + fTemp786 * fVec87[(IOTA0 - iTemp785) & 2047] + fTemp784 * fVec87[(IOTA0 - iTemp783) & 2047] + fTemp778 * fVec87[(IOTA0 - iTemp780) & 2047] + fTemp782 * fVec87[(IOTA0 - iTemp781) & 2047] + fTemp773 * fVec87[(IOTA0 - iTemp775) & 2047] + fTemp768 * fVec87[(IOTA0 - iTemp770) & 2047] + fTemp763 * fVec87[(IOTA0 - iTemp765) & 2047] + fTemp758 * fVec87[(IOTA0 - iTemp760) & 2047] + fTemp753 * fVec87[(IOTA0 - iTemp755) & 2047] + fTemp698 * fVec87[(IOTA0 - iTemp750) & 2047] - fTemp885;
			fVec88[IOTA0 & 8191] = fTemp887;
			fRec649[0] = fTemp874 * fRec649[1] + fTemp875 * (fTemp816 * (fTemp805 * (fTemp806 * (0.0052083335f * fTemp807 * fVec88[(IOTA0 - iTemp815) & 8191] - 0.020833334f * fTemp808 * fVec88[(IOTA0 - iTemp814) & 8191]) + 0.03125f * fTemp809 * fVec88[(IOTA0 - iTemp813) & 8191]) - 0.020833334f * fTemp810 * fVec88[(IOTA0 - iTemp812) & 8191]) + 0.0052083335f * fTemp811 * fVec88[(IOTA0 - iTemp803) & 8191]);
			fRec643[0] = fRec643[1] * fTemp874 + fRec649[0] * fTemp875;
			fRec642[0] = fTemp687 * fRec643[0] - (fSlow1687 * fRec642[2] + fTemp872) / fSlow1683;
			fRec641[0] = (fTemp872 + fRec642[0] * fSlow1829 + fSlow1685 * fRec642[2]) / fSlow1683 - (fSlow1657 * fRec641[2] + fTemp871) / fSlow1653;
			fRec638[0] = (fTemp871 + fRec641[0] * fSlow1830 + fSlow1655 * fRec641[2]) / fSlow1653 + fSlow1627 * fRec184[0] * fRec639[0] - fConst58 * (fConst56 * fRec638[2] + fConst54 * fRec638[1]);
			fRec637[0] = fConst89 * (fRec638[2] + (fRec638[0] - 2.0f * fRec638[1])) - (fSlow1614 * fRec637[2] + 2.0f * fSlow1609 * fRec637[1]) / fSlow1613;
			fRec636[0] = (fRec637[2] + fRec637[0] + 2.0f * fRec637[1]) / fSlow1613 - (fSlow1612 * fRec636[2] + 2.0f * fSlow1609 * fRec636[1]) / fSlow1611;
			fRec635[0] = (fRec636[2] + fRec636[0] + 2.0f * fRec636[1]) / fSlow1611 - (fSlow1610 * fRec635[2] + 2.0f * fSlow1609 * fRec635[1]) / fSlow1608;
			float fTemp888 = 2.0f * fRec635[1];
			float fTemp889 = ((iSlow93) ? fTemp735 : fSlow1831 * ((fRec635[2] + fRec635[0] + fTemp888) / fSlow1608) + fSlow1584 * std::atan(fConst50 * (fRec620[2] + fRec620[0] + fTemp869)));
			float fTemp890 = ((iSlow66) ? 0.0f : fTemp889);
			fVec89[0] = fTemp890;
			float fTemp891 = 0.5f * (((iSlow490) ? 0.0f : fTemp819) + ((iSlow490) ? 0.0f : fTemp890));
			float fTemp892 = (std::atan(1.5707964f * (fSlow2069 * fRec217[0] * ((iSlow490) ? fTemp819 : fTemp891) + fTemp853)) - fTemp856) * fTemp855;
			float fTemp893 = fSlow2070 * (fTemp892 / fRec217[0]);
			float fTemp894 = std::fabs(fTemp893);
			float fTemp895 = ((fTemp894 > fRec619[1]) ? fConst80 : fSlow508);
			fRec619[0] = fTemp894 * (1.0f - fTemp895) + fRec619[1] * fTemp895;
			float fTemp896 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2097 * std::exp(-(fSlow2084 * fRec619[0]))))));
			float fTemp897 = 1.0f - fTemp896;
			fRec654[0] = fTemp896 * fRec654[1] + fSlow2070 * (fTemp892 * fTemp897 / fRec217[0]);
			fRec618[0] = fRec618[1] * fTemp896 + fRec654[0] * fTemp897;
			float fTemp898 = fTemp893 - fRec618[0];
			float fTemp899 = std::fabs(fTemp898);
			float fTemp900 = ((fTemp899 > fRec617[1]) ? fConst81 : fSlow540);
			fRec617[0] = fTemp899 * (1.0f - fTemp900) + fRec617[1] * fTemp900;
			float fTemp901 = fTemp898 / (fSlow2098 * fRec213[0] * fRec617[0] + 1.0f);
			float fTemp902 = fRec618[0] + fTemp901;
			fVec90[IOTA0 & 2047] = fTemp902;
			int iTemp903 = int(fTemp850);
			int iTemp904 = std::min<int>(2049, std::max<int>(0, iTemp903));
			float fTemp905 = 0.75f * fTemp849;
			float fTemp906 = std::floor(fTemp905);
			float fTemp907 = fTemp906 + (1.0f - fTemp905);
			int iTemp908 = int(fTemp905);
			int iTemp909 = std::min<int>(2049, std::max<int>(0, iTemp908));
			float fTemp910 = 0.625f * fTemp849;
			float fTemp911 = std::floor(fTemp910);
			float fTemp912 = fTemp911 + (1.0f - fTemp910);
			int iTemp913 = int(fTemp910);
			int iTemp914 = std::min<int>(2049, std::max<int>(0, iTemp913));
			float fTemp915 = 0.5f * fTemp849;
			float fTemp916 = std::floor(fTemp915);
			float fTemp917 = fTemp916 + (1.0f - fTemp915);
			int iTemp918 = int(fTemp915);
			int iTemp919 = std::min<int>(2049, std::max<int>(0, iTemp918));
			float fTemp920 = 0.375f * fTemp849;
			float fTemp921 = std::floor(fTemp920);
			float fTemp922 = fTemp921 + (1.0f - fTemp920);
			int iTemp923 = int(fTemp920);
			int iTemp924 = std::min<int>(2049, std::max<int>(0, iTemp923));
			float fTemp925 = 0.25f * fTemp849;
			float fTemp926 = std::floor(fTemp925);
			float fTemp927 = fTemp926 + (1.0f - fTemp925);
			int iTemp928 = int(fTemp925);
			int iTemp929 = std::min<int>(2049, std::max<int>(0, iTemp928));
			float fTemp930 = 0.125f * fTemp849;
			float fTemp931 = std::floor(fTemp930);
			float fTemp932 = fTemp931 + (1.0f - fTemp930);
			int iTemp933 = int(fTemp930);
			int iTemp934 = std::min<int>(2049, std::max<int>(0, iTemp933));
			int iTemp935 = std::min<int>(2049, std::max<int>(0, iTemp933 + 1));
			float fTemp936 = fTemp930 - fTemp931;
			int iTemp937 = std::min<int>(2049, std::max<int>(0, iTemp928 + 1));
			float fTemp938 = fTemp925 - fTemp926;
			int iTemp939 = std::min<int>(2049, std::max<int>(0, iTemp923 + 1));
			float fTemp940 = fTemp920 - fTemp921;
			int iTemp941 = std::min<int>(2049, std::max<int>(0, iTemp918 + 1));
			float fTemp942 = fTemp915 - fTemp916;
			int iTemp943 = std::min<int>(2049, std::max<int>(0, iTemp913 + 1));
			float fTemp944 = fTemp910 - fTemp911;
			int iTemp945 = std::min<int>(2049, std::max<int>(0, iTemp908 + 1));
			float fTemp946 = fTemp905 - fTemp906;
			int iTemp947 = std::min<int>(2049, std::max<int>(0, iTemp903 + 1));
			float fTemp948 = fTemp850 - fTemp851;
			float fTemp949 = fRec618[0] + fTemp948 * fVec90[(IOTA0 - iTemp947) & 2047] + fTemp946 * fVec90[(IOTA0 - iTemp945) & 2047] + fTemp944 * fVec90[(IOTA0 - iTemp943) & 2047] + fTemp942 * fVec90[(IOTA0 - iTemp941) & 2047] + fTemp940 * fVec90[(IOTA0 - iTemp939) & 2047] + fTemp938 * fVec90[(IOTA0 - iTemp937) & 2047] + fTemp936 * fVec90[(IOTA0 - iTemp935) & 2047] + fTemp901 + fVec90[(IOTA0 - iTemp934) & 2047] * fTemp932 + fVec90[(IOTA0 - iTemp929) & 2047] * fTemp927 + fVec90[(IOTA0 - iTemp924) & 2047] * fTemp922 + fVec90[(IOTA0 - iTemp919) & 2047] * fTemp917 + fVec90[(IOTA0 - iTemp914) & 2047] * fTemp912 + fVec90[(IOTA0 - iTemp909) & 2047] * fTemp907 + fVec90[(IOTA0 - iTemp904) & 2047] * fTemp852;
			fVec91[IOTA0 & 8191] = fTemp949;
			iRec656[0] = 1103515245 * iRec656[1] + 26755;
			fRec655[0] = ((iTemp840) ? (((4.656613e-10f * float(iRec656[0])) > 0.0f) ? 1.0f : -1.0f) : fRec655[1]);
			iRec661[0] = 1103515245 * iRec661[1] + 16355;
			fRec660[0] = fConst84 * float(iRec661[0]) + fConst82 * fRec660[1];
			fRec659[0] = fConst83 * fRec660[0] + fConst82 * fRec659[1];
			fRec658[0] = fConst83 * fRec659[0] + fConst82 * fRec658[1];
			fRec657[0] = fConst83 * fRec658[0] + fConst82 * fRec657[1];
			float fTemp950 = ((iTemp6) ? 0.0f : fSlow2112 + fRec662[1]);
			fRec662[0] = fTemp950 - std::floor(fTemp950);
			int iTemp951 = std::max<int>(0, std::min<int>(int(65536.0f * fRec662[0]), 65535));
			float fTemp952 = ((iTemp6) ? 0.0f : fSlow2122 + fRec663[1]);
			fRec663[0] = fTemp952 - std::floor(fTemp952);
			int iTemp953 = std::max<int>(0, std::min<int>(int(65536.0f * fRec663[0]), 65535));
			float fTemp954 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow2139 * fTemp16 * (8.0f * fRec594[0] + 1.0f)) * (fSlow2126 * (fSlow2125 * ftbl0VhsDspSIG0[iTemp953] + fSlow2124 * ftbl1VhsDspSIG1[iTemp953]) + fSlow2116 * (fSlow2115 * ftbl0VhsDspSIG0[iTemp951] + fSlow2114 * ftbl1VhsDspSIG1[iTemp951]) + 0.07957747f * ((fSlow2106 * fTemp173 + fSlow2105 * fTemp172) / fSlow36) + fConst85 * fRec657[0]) + 0.0058f + 0.0006802721f * fRec594[0] * fRec655[0])));
			float fTemp955 = fTemp954 + -1.499995f;
			int iTemp956 = int(fTemp955);
			int iTemp957 = std::min<int>(8192, std::max<int>(0, iTemp956 + 4));
			float fTemp958 = std::floor(fTemp955);
			float fTemp959 = fTemp954 + (-3.0f - fTemp958);
			float fTemp960 = fTemp954 + (-2.0f - fTemp958);
			float fTemp961 = fTemp954 + (-1.0f - fTemp958);
			float fTemp962 = fTemp954 - fTemp958;
			float fTemp963 = fTemp962 * fTemp961;
			float fTemp964 = fTemp963 * fTemp960;
			float fTemp965 = fTemp964 * fTemp959;
			int iTemp966 = std::min<int>(8192, std::max<int>(0, iTemp956 + 3));
			int iTemp967 = std::min<int>(8192, std::max<int>(0, iTemp956 + 2));
			int iTemp968 = std::min<int>(8192, std::max<int>(0, iTemp956 + 1));
			int iTemp969 = std::min<int>(8192, std::max<int>(0, iTemp956));
			float fTemp970 = fTemp954 + (-4.0f - fTemp958);
			fRec613[0] = fTemp847 * fRec613[1] + fTemp848 * (fTemp970 * (fTemp959 * (fTemp960 * (0.0052083335f * fVec91[(IOTA0 - iTemp969) & 8191] * fTemp961 - 0.020833334f * fTemp962 * fVec91[(IOTA0 - iTemp968) & 8191]) + 0.03125f * fTemp963 * fVec91[(IOTA0 - iTemp967) & 8191]) - 0.020833334f * fTemp964 * fVec91[(IOTA0 - iTemp966) & 8191]) + 0.0052083335f * fTemp965 * fVec91[(IOTA0 - iTemp957) & 8191]);
			fRec599[0] = fRec599[1] * fTemp847 + fRec613[0] * fTemp848;
			fRec593[0] = fRec599[0] * fTemp841 - (fRec593[2] * fSlow1998 + fTemp839) / fSlow1994;
			fRec592[0] = (fTemp839 + fRec593[0] * fSlow2140 + fRec593[2] * fSlow1996) / fSlow1994 - (fRec592[2] * fSlow1968 + fTemp838) / fSlow1964;
			fRec589[0] = (fTemp838 + fRec592[0] * fSlow2141 + fRec592[2] * fSlow1966) / fSlow1964 + fSlow1938 * fRec184[0] * fRec590[0] - fConst58 * (fConst56 * fRec589[2] + fConst54 * fRec589[1]);
			fRec588[0] = fConst89 * (fRec589[2] + (fRec589[0] - 2.0f * fRec589[1])) - (fRec588[2] * fSlow1925 + 2.0f * fRec588[1] * fSlow1920) / fSlow1924;
			fRec587[0] = (fRec588[2] + fRec588[0] + 2.0f * fRec588[1]) / fSlow1924 - (fRec587[2] * fSlow1923 + 2.0f * fSlow1920 * fRec587[1]) / fSlow1922;
			fRec586[0] = (fRec587[2] + fRec587[0] + 2.0f * fRec587[1]) / fSlow1922 - (fRec586[2] * fSlow1921 + 2.0f * fSlow1920 * fRec586[1]) / fSlow1919;
			float fTemp971 = 2.0f * fRec586[1];
			float fTemp972 = ((iSlow66) ? fTemp818 : fSlow2142 * ((fRec586[2] + fRec586[0] + fTemp971) / fSlow1919) + fSlow1895 * std::atan(fConst50 * (fRec41[2] + fRec41[0] + fTemp836)));
			float fTemp973 = ((iSlow39) ? 0.0f : fTemp972);
			fVec92[0] = fTemp973;
			fRec40[0] = -(fConst34 * (fConst33 * fRec40[1] - fConst32 * (fTemp973 - fVec92[1])));
			float fTemp974 = std::fabs(fSlow276 * fTemp973 + fSlow275 * fRec40[0]);
			float fTemp975 = ((fTemp974 > fRec39[1]) ? fSlow284 : fSlow280);
			fRec39[0] = fTemp974 * (1.0f - fTemp975) + fRec39[1] * fTemp975;
			float fTemp976 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec39[0]))) - fSlow16);
			float fTemp977 = fTemp973 * std::pow(1e+01f, 0.05f * (((fTemp976 > 0.0f) ? 0.5f * fTemp976 : 0.714f * fTemp976) - fTemp976));
			fVec93[0] = fTemp977;
			fRec38[0] = -(fConst42 * (fConst40 * fRec38[1] - fConst39 * (fConst37 * fTemp977 + fConst36 * fVec93[1])));
			float fTemp978 = 0.63661975f * std::atan(1.5707964f * fRec38[0]);
			fRec37[0] = ((iTemp9) ? fTemp978 : fRec37[1]);
			float fTemp979 = fRec37[0] + fTemp69 * (fTemp978 - fRec37[0]);
			fRec36[0] = ((iTemp15) ? fTemp979 : fRec36[1]);
			fRec664[0] = fConst44 * float(iRec35[0] * (fRec34[0] > fConst43) * iTemp12) + fConst26 * fRec664[1];
			float fTemp980 = 1.0f - fRec664[0];
			iRec667[0] = 1103515245 * iRec667[1] + 31357;
			fRec666[0] = fConst29 * float(iRec667[0]) + fConst27 * fRec666[1];
			fRec665[0] = fConst28 * fRec666[0] + fConst27 * fRec665[1];
			float fTemp981 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow2155 * fTemp10 * fTemp56 * (std::fabs(fConst30 * fRec665[0]) + 0.3f)));
			float fTemp982 = std::max<float>(fTemp981, 0.2f);
			iRec669[0] = 1103515245 * iRec669[1] + 31065;
			float fTemp983 = float(iRec669[0]);
			fVec94[0] = fTemp983;
			float fRec668 = 4.656613e-10f * (fTemp983 - fVec94[1]);
			float fTemp984 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp981));
			iRec670[0] = 1103515245 * iRec670[1] + 31365;
			iRec671[0] = 1103515245 * iRec671[1] + 31665;
			float fTemp985 = fSlow2181 * fRec155[0] * float(iRec671[0]) + 3.259629e-10f * float(iRec670[0]) * float(std::fabs(4.656613e-10f * fTemp210) < fTemp984) + fSlow2168 * (fRec164[0] * fRec668 / fTemp982) + fTemp54 + fTemp980 * (fRec36[0] + (fTemp979 - fRec36[0]) * fTemp14);
			fVec95[0] = fTemp985;
			fRec25[0] = -(fConst46 * (fConst36 * fRec25[1] - fConst45 * (fConst41 * fTemp985 + fConst40 * fVec95[1])));
			fRec24[0] = -(fConst34 * (fConst33 * fRec24[1] - fConst32 * (fRec25[0] - fRec25[1])));
			float fTemp986 = std::fabs(fSlow276 * fRec25[0] + fSlow275 * fRec24[0]);
			float fTemp987 = ((fTemp986 > fRec23[1]) ? fSlow2200 : fSlow2197);
			fRec23[0] = fTemp986 * (1.0f - fTemp987) + fRec23[1] * fTemp987;
			float fTemp988 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec23[0]))) - fSlow52)));
			float fTemp989 = fRec25[0] * std::pow(1e+01f, 0.05f * (((fTemp988 > 0.0f) ? 2.0f * fTemp988 : 1.4005603f * fTemp988) - fTemp988));
			fVec96[0] = fTemp989;
			fRec22[0] = -(fConst49 * (fConst48 * fRec22[1] - fConst47 * (fTemp989 - fVec96[1])));
			fRec21[0] = fRec22[0] - fConst7 * (fConst5 * fRec21[2] + fConst3 * fRec21[1]);
			float fTemp990 = 2.0f * fRec21[1];
			iRec677[0] = 1103515245 * iRec677[1] + 14465;
			float fTemp991 = float(iRec677[0]);
			fVec97[0] = fTemp991;
			fRec676[0] = (4.656613e-10f * ((fTemp991 - fVec97[1]) / fTemp85) - fTemp88 * fRec676[1]) / fTemp87;
			float fTemp992 = fSlow2278 * fRec678[1];
			float fTemp993 = fSlow2308 * fRec679[1];
			iRec682[0] = 1103515245 * iRec682[1] + 26357;
			int iTemp994 = std::fabs(4.656613e-10f * float(iRec682[0])) < (fSlow2323 * fTemp10);
			iRec684[0] = 1103515245 * iRec684[1] + 26557;
			fRec683[0] = ((iTemp994) ? 0.7f * std::fabs(4.656613e-10f * float(iRec684[0])) + 0.3f : fRec683[1]);
			fRec681[0] = std::max<float>(fConst64 * fRec681[1], fRec683[0] * float(iTemp994));
			fRec680[0] = fConst65 * fRec681[0] + fConst63 * fRec680[1];
			float fTemp995 = 1.0f - 0.35f * fRec680[0];
			float fTemp996 = 1.5f * fRec680[0] + 1.0f;
			iRec690[0] = 1103515245 * iRec690[1] + 24357;
			fRec689[0] = fConst70 * float(iRec690[0]) + fConst68 * fRec689[1];
			fRec688[0] = fConst69 * fRec689[0] + fConst68 * fRec688[1];
			float fTemp997 = fTemp10 * std::exp(fSlow18 * (fConst71 * fRec688[0] - fSlow438)) * (25.0f * fRec680[0] + 1.0f);
			iRec691[0] = 1103515245 * iRec691[1] + 18357;
			int iTemp998 = std::fabs(4.656613e-10f * float(iRec691[0])) < (fSlow2325 * fTemp997);
			iRec693[0] = 1103515245 * iRec693[1] + 20357;
			fRec692[0] = ((iTemp998) ? 0.75f * std::fabs(4.656613e-10f * float(iRec693[0])) + 0.25f : fRec692[1]);
			fRec687[0] = std::max<float>(fSlow437 * fRec687[1], fRec692[0] * float(iTemp998));
			fRec686[0] = fConst72 * fRec687[0] + fConst66 * fRec686[1];
			float fTemp999 = fSlow2326 * fTemp997;
			iRec696[0] = 1103515245 * iRec696[1] + 18665;
			int iTemp1000 = std::fabs(4.656613e-10f * float(iRec696[0])) < fTemp999;
			iRec698[0] = 1103515245 * iRec698[1] + 20665;
			fRec697[0] = ((iTemp1000) ? 0.75f * std::fabs(4.656613e-10f * float(iRec698[0])) + 0.25f : fRec697[1]);
			fRec695[0] = std::max<float>(fSlow437 * fRec695[1], fRec697[0] * float(iTemp1000));
			fRec694[0] = fConst72 * fRec695[0] + fConst66 * fRec694[1];
			float fTemp1001 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2340 * (fSlow311 / (fSlow2339 * std::max<float>(fRec686[0], 0.7f * fRec694[0]) * fTemp996 + 1e-07f))))));
			float fTemp1002 = 1.0f - fTemp1001;
			iRec702[0] = 1103515245 * iRec702[1] + 23357;
			fRec701[0] = fConst78 * float(iRec702[0]) + fConst76 * fRec701[1];
			fRec700[0] = fConst77 * fRec701[0] + fConst76 * fRec700[1];
			float fTemp1003 = std::min<float>(fConst75, fSlow2354 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow2353 * std::fabs(fSlow458 * fRec700[0] + 1.0f) * (6.0f * fRec680[0] + 1.0f))) / fSlow311));
			float fTemp1004 = 0.875f * fTemp1003;
			float fTemp1005 = std::floor(fTemp1004);
			float fTemp1006 = fTemp1005 + (1.0f - fTemp1004);
			float fTemp1007 = std::min<float>(0.8f, fSlow2367 * fRec218[0]);
			float fTemp1008 = 1.5707964f * fTemp1007;
			float fTemp1009 = VhsDsp_faustpower2_f(fTemp1008) + 1.0f;
			float fTemp1010 = std::atan(fTemp1008);
			fRec715[0] = -(fConst34 * (fConst33 * fRec715[1] - fConst32 * (fTemp890 - fVec89[1])));
			float fTemp1011 = std::fabs(fSlow276 * fTemp890 + fSlow275 * fRec715[0]);
			float fTemp1012 = ((fTemp1011 > fRec714[1]) ? fSlow284 : fSlow280);
			fRec714[0] = fTemp1011 * (1.0f - fTemp1012) + fRec714[1] * fTemp1012;
			float fTemp1013 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec714[0]))) - fSlow16);
			float fTemp1014 = fTemp890 * std::pow(1e+01f, 0.05f * (((fTemp1013 > 0.0f) ? 0.5f * fTemp1013 : 0.714f * fTemp1013) - fTemp1013));
			fVec98[0] = fTemp1014;
			fRec713[0] = -(fConst42 * (fConst40 * fRec713[1] - fConst39 * (fConst37 * fTemp1014 + fConst36 * fVec98[1])));
			float fTemp1015 = 0.63661975f * std::atan(1.5707964f * fRec713[0]);
			fRec712[0] = ((iTemp9) ? fTemp1015 : fRec712[1]);
			float fTemp1016 = fRec712[0] + fTemp69 * (fTemp1015 - fRec712[0]);
			fRec711[0] = ((iTemp21) ? fTemp1016 : fRec711[1]);
			iRec717[0] = 1103515245 * iRec717[1] + 31047;
			float fTemp1017 = float(iRec717[0]);
			fVec99[0] = fTemp1017;
			float fRec716 = 4.656613e-10f * (fTemp1017 - fVec99[1]);
			iRec718[0] = 1103515245 * iRec718[1] + 31647;
			float fTemp1018 = fSlow1870 * fRec155[0] * float(iRec718[0]) + 3.259629e-10f * fTemp205 * float(std::fabs(4.656613e-10f * fTemp244) < fTemp830) + fSlow1857 * (fRec164[0] * fRec716 / fTemp828) + fTemp54 + fTemp826 * (fRec711[0] + fTemp20 * (fTemp1016 - fRec711[0]));
			fVec100[0] = fTemp1018;
			fRec710[0] = -(fConst46 * (fConst36 * fRec710[1] - fConst45 * (fConst41 * fTemp1018 + fConst40 * fVec100[1])));
			fRec709[0] = -(fConst34 * (fConst33 * fRec709[1] - fConst32 * (fRec710[0] - fRec710[1])));
			float fTemp1019 = std::fabs(fSlow276 * fRec710[0] + fSlow275 * fRec709[0]);
			float fTemp1020 = ((fTemp1019 > fRec708[1]) ? fSlow1889 : fSlow1886);
			fRec708[0] = fTemp1019 * (1.0f - fTemp1020) + fRec708[1] * fTemp1020;
			float fTemp1021 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec708[0]))) - fSlow79)));
			float fTemp1022 = fRec710[0] * std::pow(1e+01f, 0.05f * (((fTemp1021 > 0.0f) ? 2.0f * fTemp1021 : 1.4005603f * fTemp1021) - fTemp1021));
			fVec101[0] = fTemp1022;
			fRec707[0] = -(fConst49 * (fConst48 * fRec707[1] - fConst47 * (fTemp1022 - fVec101[1])));
			fRec706[0] = fRec707[0] - fConst7 * (fConst5 * fRec706[2] + fConst3 * fRec706[1]);
			float fTemp1023 = 2.0f * fRec706[1];
			iRec724[0] = 1103515245 * iRec724[1] + 14447;
			float fTemp1024 = float(iRec724[0]);
			fVec102[0] = fTemp1024;
			fRec723[0] = (4.656613e-10f * ((fTemp1024 - fVec102[1]) / fTemp85) - fTemp88 * fRec723[1]) / fTemp87;
			float fTemp1025 = fSlow1967 * fRec725[1];
			float fTemp1026 = fSlow1997 * fRec726[1];
			iRec730[0] = 1103515245 * iRec730[1] + 18647;
			int iTemp1027 = std::fabs(4.656613e-10f * float(iRec730[0])) < fTemp845;
			iRec732[0] = 1103515245 * iRec732[1] + 20647;
			fRec731[0] = ((iTemp1027) ? 0.75f * std::fabs(4.656613e-10f * float(iRec732[0])) + 0.25f : fRec731[1]);
			fRec729[0] = std::max<float>(fSlow437 * fRec729[1], fRec731[0] * float(iTemp1027));
			fRec728[0] = fConst72 * fRec729[0] + fConst66 * fRec728[1];
			float fTemp1028 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2029 * (fSlow311 / (fSlow2028 * std::max<float>(fRec600[0], 0.7f * fRec728[0]) * fTemp842 + 1e-07f))))));
			float fTemp1029 = 1.0f - fTemp1028;
			float fTemp1030 = fTemp855 * (fTemp856 - std::atan(1.5707964f * (fTemp853 + fSlow2069 * fRec217[0] * ((iSlow490) ? fTemp890 : fTemp891))));
			float fTemp1031 = fSlow2070 * (fTemp1030 / fRec217[0]);
			float fTemp1032 = std::fabs(-fTemp1031);
			float fTemp1033 = ((fTemp1032 > fRec736[1]) ? fConst80 : fSlow508);
			fRec736[0] = fTemp1032 * (1.0f - fTemp1033) + fRec736[1] * fTemp1033;
			float fTemp1034 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2097 * std::exp(-(fSlow2084 * fRec736[0]))))));
			float fTemp1035 = 1.0f - fTemp1034;
			fRec737[0] = fTemp1034 * fRec737[1] - fSlow2070 * (fTemp1030 * fTemp1035 / fRec217[0]);
			fRec735[0] = fRec735[1] * fTemp1034 + fRec737[0] * fTemp1035;
			float fTemp1036 = fRec735[0] + fTemp1031;
			float fTemp1037 = std::fabs(-fTemp1036);
			float fTemp1038 = ((fTemp1037 > fRec734[1]) ? fConst81 : fSlow540);
			fRec734[0] = fTemp1037 * (1.0f - fTemp1038) + fRec734[1] * fTemp1038;
			float fTemp1039 = fTemp1036 / (fSlow2098 * fRec213[0] * fRec734[0] + 1.0f);
			float fTemp1040 = fRec735[0] - fTemp1039;
			fVec103[IOTA0 & 2047] = fTemp1040;
			float fTemp1041 = fRec735[0] + fTemp948 * fVec103[(IOTA0 - iTemp947) & 2047] + fTemp946 * fVec103[(IOTA0 - iTemp945) & 2047] + fTemp944 * fVec103[(IOTA0 - iTemp943) & 2047] + fTemp942 * fVec103[(IOTA0 - iTemp941) & 2047] + fTemp940 * fVec103[(IOTA0 - iTemp939) & 2047] + fTemp938 * fVec103[(IOTA0 - iTemp937) & 2047] + fTemp932 * fVec103[(IOTA0 - iTemp934) & 2047] + fTemp936 * fVec103[(IOTA0 - iTemp935) & 2047] + fTemp927 * fVec103[(IOTA0 - iTemp929) & 2047] + fTemp922 * fVec103[(IOTA0 - iTemp924) & 2047] + fTemp917 * fVec103[(IOTA0 - iTemp919) & 2047] + fTemp912 * fVec103[(IOTA0 - iTemp914) & 2047] + fTemp907 * fVec103[(IOTA0 - iTemp909) & 2047] + fTemp852 * fVec103[(IOTA0 - iTemp904) & 2047] - fTemp1039;
			fVec104[IOTA0 & 8191] = fTemp1041;
			fRec733[0] = fTemp1028 * fRec733[1] + fTemp1029 * (fTemp970 * (fTemp959 * (fTemp960 * (0.0052083335f * fTemp961 * fVec104[(IOTA0 - iTemp969) & 8191] - 0.020833334f * fTemp962 * fVec104[(IOTA0 - iTemp968) & 8191]) + 0.03125f * fTemp963 * fVec104[(IOTA0 - iTemp967) & 8191]) - 0.020833334f * fTemp964 * fVec104[(IOTA0 - iTemp966) & 8191]) + 0.0052083335f * fTemp965 * fVec104[(IOTA0 - iTemp957) & 8191]);
			fRec727[0] = fRec727[1] * fTemp1028 + fRec733[0] * fTemp1029;
			fRec726[0] = fTemp841 * fRec727[0] - (fSlow1998 * fRec726[2] + fTemp1026) / fSlow1994;
			fRec725[0] = (fTemp1026 + fRec726[0] * fSlow2140 + fSlow1996 * fRec726[2]) / fSlow1994 - (fSlow1968 * fRec725[2] + fTemp1025) / fSlow1964;
			fRec722[0] = (fTemp1025 + fRec725[0] * fSlow2141 + fSlow1966 * fRec725[2]) / fSlow1964 + fSlow1938 * fRec184[0] * fRec723[0] - fConst58 * (fConst56 * fRec722[2] + fConst54 * fRec722[1]);
			fRec721[0] = fConst89 * (fRec722[2] + (fRec722[0] - 2.0f * fRec722[1])) - (fSlow1925 * fRec721[2] + 2.0f * fSlow1920 * fRec721[1]) / fSlow1924;
			fRec720[0] = (fRec721[2] + fRec721[0] + 2.0f * fRec721[1]) / fSlow1924 - (fSlow1923 * fRec720[2] + 2.0f * fSlow1920 * fRec720[1]) / fSlow1922;
			fRec719[0] = (fRec720[2] + fRec720[0] + 2.0f * fRec720[1]) / fSlow1922 - (fSlow1921 * fRec719[2] + 2.0f * fSlow1920 * fRec719[1]) / fSlow1919;
			float fTemp1042 = 2.0f * fRec719[1];
			float fTemp1043 = ((iSlow66) ? fTemp889 : fSlow2142 * ((fRec719[2] + fRec719[0] + fTemp1042) / fSlow1919) + fSlow1895 * std::atan(fConst50 * (fRec706[2] + fRec706[0] + fTemp1023)));
			float fTemp1044 = ((iSlow39) ? 0.0f : fTemp1043);
			fVec105[0] = fTemp1044;
			float fTemp1045 = 0.5f * (((iSlow490) ? 0.0f : fTemp973) + ((iSlow490) ? 0.0f : fTemp1044));
			float fTemp1046 = (std::atan(1.5707964f * (fSlow2380 * fRec217[0] * ((iSlow490) ? fTemp973 : fTemp1045) + fTemp1007)) - fTemp1010) * fTemp1009;
			float fTemp1047 = fSlow2381 * (fTemp1046 / fRec217[0]);
			float fTemp1048 = std::fabs(fTemp1047);
			float fTemp1049 = ((fTemp1048 > fRec705[1]) ? fConst80 : fSlow508);
			fRec705[0] = fTemp1048 * (1.0f - fTemp1049) + fRec705[1] * fTemp1049;
			float fTemp1050 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2408 * std::exp(-(fSlow2395 * fRec705[0]))))));
			float fTemp1051 = 1.0f - fTemp1050;
			fRec738[0] = fTemp1050 * fRec738[1] + fSlow2381 * (fTemp1046 * fTemp1051 / fRec217[0]);
			fRec704[0] = fRec704[1] * fTemp1050 + fRec738[0] * fTemp1051;
			float fTemp1052 = fTemp1047 - fRec704[0];
			float fTemp1053 = std::fabs(fTemp1052);
			float fTemp1054 = ((fTemp1053 > fRec703[1]) ? fConst81 : fSlow540);
			fRec703[0] = fTemp1053 * (1.0f - fTemp1054) + fRec703[1] * fTemp1054;
			float fTemp1055 = fTemp1052 / (fSlow2409 * fRec213[0] * fRec703[0] + 1.0f);
			float fTemp1056 = fRec704[0] + fTemp1055;
			fVec106[IOTA0 & 2047] = fTemp1056;
			int iTemp1057 = int(fTemp1004);
			int iTemp1058 = std::min<int>(2049, std::max<int>(0, iTemp1057));
			float fTemp1059 = 0.75f * fTemp1003;
			float fTemp1060 = std::floor(fTemp1059);
			float fTemp1061 = fTemp1060 + (1.0f - fTemp1059);
			int iTemp1062 = int(fTemp1059);
			int iTemp1063 = std::min<int>(2049, std::max<int>(0, iTemp1062));
			float fTemp1064 = 0.625f * fTemp1003;
			float fTemp1065 = std::floor(fTemp1064);
			float fTemp1066 = fTemp1065 + (1.0f - fTemp1064);
			int iTemp1067 = int(fTemp1064);
			int iTemp1068 = std::min<int>(2049, std::max<int>(0, iTemp1067));
			float fTemp1069 = 0.5f * fTemp1003;
			float fTemp1070 = std::floor(fTemp1069);
			float fTemp1071 = fTemp1070 + (1.0f - fTemp1069);
			int iTemp1072 = int(fTemp1069);
			int iTemp1073 = std::min<int>(2049, std::max<int>(0, iTemp1072));
			float fTemp1074 = 0.375f * fTemp1003;
			float fTemp1075 = std::floor(fTemp1074);
			float fTemp1076 = fTemp1075 + (1.0f - fTemp1074);
			int iTemp1077 = int(fTemp1074);
			int iTemp1078 = std::min<int>(2049, std::max<int>(0, iTemp1077));
			float fTemp1079 = 0.25f * fTemp1003;
			float fTemp1080 = std::floor(fTemp1079);
			float fTemp1081 = fTemp1080 + (1.0f - fTemp1079);
			int iTemp1082 = int(fTemp1079);
			int iTemp1083 = std::min<int>(2049, std::max<int>(0, iTemp1082));
			float fTemp1084 = 0.125f * fTemp1003;
			float fTemp1085 = std::floor(fTemp1084);
			float fTemp1086 = fTemp1085 + (1.0f - fTemp1084);
			int iTemp1087 = int(fTemp1084);
			int iTemp1088 = std::min<int>(2049, std::max<int>(0, iTemp1087));
			int iTemp1089 = std::min<int>(2049, std::max<int>(0, iTemp1087 + 1));
			float fTemp1090 = fTemp1084 - fTemp1085;
			int iTemp1091 = std::min<int>(2049, std::max<int>(0, iTemp1082 + 1));
			float fTemp1092 = fTemp1079 - fTemp1080;
			int iTemp1093 = std::min<int>(2049, std::max<int>(0, iTemp1077 + 1));
			float fTemp1094 = fTemp1074 - fTemp1075;
			int iTemp1095 = std::min<int>(2049, std::max<int>(0, iTemp1072 + 1));
			float fTemp1096 = fTemp1069 - fTemp1070;
			int iTemp1097 = std::min<int>(2049, std::max<int>(0, iTemp1067 + 1));
			float fTemp1098 = fTemp1064 - fTemp1065;
			int iTemp1099 = std::min<int>(2049, std::max<int>(0, iTemp1062 + 1));
			float fTemp1100 = fTemp1059 - fTemp1060;
			int iTemp1101 = std::min<int>(2049, std::max<int>(0, iTemp1057 + 1));
			float fTemp1102 = fTemp1004 - fTemp1005;
			float fTemp1103 = fRec704[0] + fTemp1102 * fVec106[(IOTA0 - iTemp1101) & 2047] + fTemp1100 * fVec106[(IOTA0 - iTemp1099) & 2047] + fTemp1098 * fVec106[(IOTA0 - iTemp1097) & 2047] + fTemp1096 * fVec106[(IOTA0 - iTemp1095) & 2047] + fTemp1094 * fVec106[(IOTA0 - iTemp1093) & 2047] + fTemp1092 * fVec106[(IOTA0 - iTemp1091) & 2047] + fTemp1090 * fVec106[(IOTA0 - iTemp1089) & 2047] + fTemp1055 + fVec106[(IOTA0 - iTemp1088) & 2047] * fTemp1086 + fVec106[(IOTA0 - iTemp1083) & 2047] * fTemp1081 + fVec106[(IOTA0 - iTemp1078) & 2047] * fTemp1076 + fVec106[(IOTA0 - iTemp1073) & 2047] * fTemp1071 + fVec106[(IOTA0 - iTemp1068) & 2047] * fTemp1066 + fVec106[(IOTA0 - iTemp1063) & 2047] * fTemp1061 + fVec106[(IOTA0 - iTemp1058) & 2047] * fTemp1006;
			fVec107[IOTA0 & 8191] = fTemp1103;
			iRec740[0] = 1103515245 * iRec740[1] + 26757;
			fRec739[0] = ((iTemp994) ? (((4.656613e-10f * float(iRec740[0])) > 0.0f) ? 1.0f : -1.0f) : fRec739[1]);
			iRec745[0] = 1103515245 * iRec745[1] + 16357;
			fRec744[0] = fConst84 * float(iRec745[0]) + fConst82 * fRec744[1];
			fRec743[0] = fConst83 * fRec744[0] + fConst82 * fRec743[1];
			fRec742[0] = fConst83 * fRec743[0] + fConst82 * fRec742[1];
			fRec741[0] = fConst83 * fRec742[0] + fConst82 * fRec741[1];
			float fTemp1104 = ((iTemp6) ? 0.0f : fSlow2423 + fRec746[1]);
			fRec746[0] = fTemp1104 - std::floor(fTemp1104);
			int iTemp1105 = std::max<int>(0, std::min<int>(int(65536.0f * fRec746[0]), 65535));
			float fTemp1106 = ((iTemp6) ? 0.0f : fSlow2433 + fRec747[1]);
			fRec747[0] = fTemp1106 - std::floor(fTemp1106);
			int iTemp1107 = std::max<int>(0, std::min<int>(int(65536.0f * fRec747[0]), 65535));
			float fTemp1108 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow2450 * fTemp10 * (8.0f * fRec680[0] + 1.0f)) * (fSlow2437 * (fSlow2436 * ftbl0VhsDspSIG0[iTemp1107] + fSlow2435 * ftbl1VhsDspSIG1[iTemp1107]) + fSlow2427 * (fSlow2426 * ftbl0VhsDspSIG0[iTemp1105] + fSlow2425 * ftbl1VhsDspSIG1[iTemp1105]) + 0.07957747f * ((fSlow2417 * fTemp173 + fSlow2416 * fTemp172) / fSlow36) + fConst85 * fRec741[0]) + 0.0058f + 0.0006802721f * fRec680[0] * fRec739[0])));
			float fTemp1109 = fTemp1108 + -1.499995f;
			int iTemp1110 = int(fTemp1109);
			int iTemp1111 = std::min<int>(8192, std::max<int>(0, iTemp1110 + 4));
			float fTemp1112 = std::floor(fTemp1109);
			float fTemp1113 = fTemp1108 + (-3.0f - fTemp1112);
			float fTemp1114 = fTemp1108 + (-2.0f - fTemp1112);
			float fTemp1115 = fTemp1108 + (-1.0f - fTemp1112);
			float fTemp1116 = fTemp1108 - fTemp1112;
			float fTemp1117 = fTemp1116 * fTemp1115;
			float fTemp1118 = fTemp1117 * fTemp1114;
			float fTemp1119 = fTemp1118 * fTemp1113;
			int iTemp1120 = std::min<int>(8192, std::max<int>(0, iTemp1110 + 3));
			int iTemp1121 = std::min<int>(8192, std::max<int>(0, iTemp1110 + 2));
			int iTemp1122 = std::min<int>(8192, std::max<int>(0, iTemp1110 + 1));
			int iTemp1123 = std::min<int>(8192, std::max<int>(0, iTemp1110));
			float fTemp1124 = fTemp1108 + (-4.0f - fTemp1112);
			fRec699[0] = fTemp1001 * fRec699[1] + fTemp1002 * (fTemp1124 * (fTemp1113 * (fTemp1114 * (0.0052083335f * fVec107[(IOTA0 - iTemp1123) & 8191] * fTemp1115 - 0.020833334f * fTemp1116 * fVec107[(IOTA0 - iTemp1122) & 8191]) + 0.03125f * fTemp1117 * fVec107[(IOTA0 - iTemp1121) & 8191]) - 0.020833334f * fTemp1118 * fVec107[(IOTA0 - iTemp1120) & 8191]) + 0.0052083335f * fTemp1119 * fVec107[(IOTA0 - iTemp1111) & 8191]);
			fRec685[0] = fRec685[1] * fTemp1001 + fRec699[0] * fTemp1002;
			fRec679[0] = fRec685[0] * fTemp995 - (fRec679[2] * fSlow2309 + fTemp993) / fSlow2305;
			fRec678[0] = (fTemp993 + fRec679[0] * fSlow2451 + fRec679[2] * fSlow2307) / fSlow2305 - (fRec678[2] * fSlow2279 + fTemp992) / fSlow2275;
			fRec675[0] = (fTemp992 + fRec678[0] * fSlow2452 + fRec678[2] * fSlow2277) / fSlow2275 + fSlow2249 * fRec184[0] * fRec676[0] - fConst58 * (fConst56 * fRec675[2] + fConst54 * fRec675[1]);
			fRec674[0] = fConst89 * (fRec675[2] + (fRec675[0] - 2.0f * fRec675[1])) - (fRec674[2] * fSlow2236 + 2.0f * fRec674[1] * fSlow2231) / fSlow2235;
			fRec673[0] = (fRec674[2] + fRec674[0] + 2.0f * fRec674[1]) / fSlow2235 - (fRec673[2] * fSlow2234 + 2.0f * fSlow2231 * fRec673[1]) / fSlow2233;
			fRec672[0] = (fRec673[2] + fRec673[0] + 2.0f * fRec673[1]) / fSlow2233 - (fRec672[2] * fSlow2232 + 2.0f * fSlow2231 * fRec672[1]) / fSlow2230;
			float fTemp1125 = 2.0f * fRec672[1];
			float fTemp1126 = ((iSlow39) ? fTemp972 : fSlow2453 * ((fRec672[2] + fRec672[0] + fTemp1125) / fSlow2230) + fSlow2206 * std::atan(fConst50 * (fRec21[2] + fRec21[0] + fTemp990)));
			float fTemp1127 = ((iSlow1) ? 0.0f : fTemp1126);
			fVec108[0] = fTemp1127;
			fRec20[0] = -(fConst34 * (fConst33 * fRec20[1] - fConst32 * (fTemp1127 - fVec108[1])));
			float fTemp1128 = std::fabs(fSlow276 * fTemp1127 + fSlow275 * fRec20[0]);
			float fTemp1129 = ((fTemp1128 > fRec19[1]) ? fSlow284 : fSlow280);
			fRec19[0] = fTemp1128 * (1.0f - fTemp1129) + fRec19[1] * fTemp1129;
			float fTemp1130 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec19[0]))) - fSlow16);
			float fTemp1131 = fTemp1127 * std::pow(1e+01f, 0.05f * (((fTemp1130 > 0.0f) ? 0.5f * fTemp1130 : 0.714f * fTemp1130) - fTemp1130));
			fVec109[0] = fTemp1131;
			fRec18[0] = -(fConst42 * (fConst40 * fRec18[1] - fConst39 * (fConst37 * fTemp1131 + fConst36 * fVec109[1])));
			float fTemp1132 = 0.63661975f * std::atan(1.5707964f * fRec18[0]);
			fRec16[0] = ((iTemp9) ? fTemp1132 : fRec16[1]);
			float fTemp1133 = fRec16[0] + fTemp69 * (fTemp1132 - fRec16[0]);
			fRec15[0] = ((iTemp5) ? fTemp1133 : fRec15[1]);
			fRec748[0] = fConst44 * float(iRec14[0] * (fRec13[0] > fConst43) * iTemp2) + fConst26 * fRec748[1];
			float fTemp1134 = 1.0f - fRec748[0];
			iRec751[0] = 1103515245 * iRec751[1] + 31359;
			fRec750[0] = fConst29 * float(iRec751[0]) + fConst27 * fRec750[1];
			fRec749[0] = fConst28 * fRec750[0] + fConst27 * fRec749[1];
			float fTemp1135 = std::max<float>(0.05f, std::min<float>(1.0f, 1.0f - fSlow2466 * fTemp0 * fTemp56 * (std::fabs(fConst30 * fRec749[0]) + 0.3f)));
			float fTemp1136 = std::max<float>(fTemp1135, 0.2f);
			iRec753[0] = 1103515245 * iRec753[1] + 31085;
			float fTemp1137 = float(iRec753[0]);
			fVec110[0] = fTemp1137;
			float fRec752 = 4.656613e-10f * (fTemp1137 - fVec110[1]);
			float fTemp1138 = fConst31 * VhsDsp_faustpower2_f(2.857143f * std::max<float>(0.0f, 0.35f - fTemp1135));
			iRec754[0] = 1103515245 * iRec754[1] + 31385;
			iRec755[0] = 1103515245 * iRec755[1] + 31685;
			float fTemp1139 = fSlow2492 * fRec155[0] * float(iRec755[0]) + 3.259629e-10f * float(iRec754[0]) * float(std::fabs(4.656613e-10f * fTemp366) < fTemp1138) + fSlow2479 * (fRec164[0] * fRec752 / fTemp1136) + fTemp54 + fTemp1134 * (fRec15[0] + (fTemp1133 - fRec15[0]) * fTemp4);
			fVec111[0] = fTemp1139;
			fRec4[0] = -(fConst46 * (fConst36 * fRec4[1] - fConst45 * (fConst41 * fTemp1139 + fConst40 * fVec111[1])));
			fRec3[0] = -(fConst34 * (fConst33 * fRec3[1] - fConst32 * (fRec4[0] - fRec4[1])));
			float fTemp1140 = std::fabs(fSlow276 * fRec4[0] + fSlow275 * fRec3[0]);
			float fTemp1141 = ((fTemp1140 > fRec2[1]) ? fSlow2511 : fSlow2508);
			fRec2[0] = fTemp1140 * (1.0f - fTemp1141) + fRec2[1] * fTemp1141;
			float fTemp1142 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec2[0]))) - fSlow17)));
			float fTemp1143 = fRec4[0] * std::pow(1e+01f, 0.05f * (((fTemp1142 > 0.0f) ? 2.0f * fTemp1142 : 1.4005603f * fTemp1142) - fTemp1142));
			fVec112[0] = fTemp1143;
			fRec1[0] = -(fConst49 * (fConst48 * fRec1[1] - fConst47 * (fTemp1143 - fVec112[1])));
			fRec0[0] = fRec1[0] - fConst7 * (fConst5 * fRec0[2] + fConst3 * fRec0[1]);
			float fTemp1144 = 2.0f * fRec0[1];
			iRec761[0] = 1103515245 * iRec761[1] + 14485;
			float fTemp1145 = float(iRec761[0]);
			fVec113[0] = fTemp1145;
			fRec760[0] = (4.656613e-10f * ((fTemp1145 - fVec113[1]) / fTemp85) - fTemp88 * fRec760[1]) / fTemp87;
			float fTemp1146 = fSlow2591 * fRec762[1];
			float fTemp1147 = fSlow2621 * fRec763[1];
			iRec766[0] = 1103515245 * iRec766[1] + 26359;
			int iTemp1148 = std::fabs(4.656613e-10f * float(iRec766[0])) < (fSlow2636 * fTemp0);
			iRec768[0] = 1103515245 * iRec768[1] + 26559;
			fRec767[0] = ((iTemp1148) ? 0.7f * std::fabs(4.656613e-10f * float(iRec768[0])) + 0.3f : fRec767[1]);
			fRec765[0] = std::max<float>(fConst64 * fRec765[1], fRec767[0] * float(iTemp1148));
			fRec764[0] = fConst65 * fRec765[0] + fConst63 * fRec764[1];
			float fTemp1149 = 1.0f - 0.35f * fRec764[0];
			float fTemp1150 = 1.5f * fRec764[0] + 1.0f;
			iRec774[0] = 1103515245 * iRec774[1] + 24359;
			fRec773[0] = fConst70 * float(iRec774[0]) + fConst68 * fRec773[1];
			fRec772[0] = fConst69 * fRec773[0] + fConst68 * fRec772[1];
			float fTemp1151 = fTemp0 * std::exp(fSlow18 * (fConst71 * fRec772[0] - fSlow438)) * (25.0f * fRec764[0] + 1.0f);
			iRec775[0] = 1103515245 * iRec775[1] + 18359;
			int iTemp1152 = std::fabs(4.656613e-10f * float(iRec775[0])) < (fSlow2638 * fTemp1151);
			iRec777[0] = 1103515245 * iRec777[1] + 20359;
			fRec776[0] = ((iTemp1152) ? 0.75f * std::fabs(4.656613e-10f * float(iRec777[0])) + 0.25f : fRec776[1]);
			fRec771[0] = std::max<float>(fSlow437 * fRec771[1], fRec776[0] * float(iTemp1152));
			fRec770[0] = fConst72 * fRec771[0] + fConst66 * fRec770[1];
			float fTemp1153 = fSlow2639 * fTemp1151;
			iRec780[0] = 1103515245 * iRec780[1] + 18685;
			int iTemp1154 = std::fabs(4.656613e-10f * float(iRec780[0])) < fTemp1153;
			iRec782[0] = 1103515245 * iRec782[1] + 20685;
			fRec781[0] = ((iTemp1154) ? 0.75f * std::fabs(4.656613e-10f * float(iRec782[0])) + 0.25f : fRec781[1]);
			fRec779[0] = std::max<float>(fSlow437 * fRec779[1], fRec781[0] * float(iTemp1154));
			fRec778[0] = fConst72 * fRec779[0] + fConst66 * fRec778[1];
			float fTemp1155 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2653 * (fSlow311 / (fSlow2652 * std::max<float>(fRec770[0], 0.7f * fRec778[0]) * fTemp1150 + 1e-07f))))));
			float fTemp1156 = 1.0f - fTemp1155;
			iRec786[0] = 1103515245 * iRec786[1] + 23359;
			fRec785[0] = fConst78 * float(iRec786[0]) + fConst76 * fRec785[1];
			fRec784[0] = fConst77 * fRec785[0] + fConst76 * fRec784[1];
			float fTemp1157 = std::min<float>(fConst75, fSlow2667 * (std::tan(0.017453292f * std::min<float>(6.0f, fSlow2666 * std::fabs(fSlow458 * fRec784[0] + 1.0f) * (6.0f * fRec764[0] + 1.0f))) / fSlow311));
			float fTemp1158 = 0.875f * fTemp1157;
			float fTemp1159 = std::floor(fTemp1158);
			float fTemp1160 = fTemp1159 + (1.0f - fTemp1158);
			float fTemp1161 = std::min<float>(0.8f, fSlow2680 * fRec218[0]);
			float fTemp1162 = 1.5707964f * fTemp1161;
			float fTemp1163 = VhsDsp_faustpower2_f(fTemp1162) + 1.0f;
			float fTemp1164 = std::atan(fTemp1162);
			fRec799[0] = -(fConst34 * (fConst33 * fRec799[1] - fConst32 * (fTemp1044 - fVec105[1])));
			float fTemp1165 = std::fabs(fSlow276 * fTemp1044 + fSlow275 * fRec799[0]);
			float fTemp1166 = ((fTemp1165 > fRec798[1]) ? fSlow284 : fSlow280);
			fRec798[0] = fTemp1165 * (1.0f - fTemp1166) + fRec798[1] * fTemp1166;
			float fTemp1167 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec798[0]))) - fSlow16);
			float fTemp1168 = fTemp1044 * std::pow(1e+01f, 0.05f * (((fTemp1167 > 0.0f) ? 0.5f * fTemp1167 : 0.714f * fTemp1167) - fTemp1167));
			fVec114[0] = fTemp1168;
			fRec797[0] = -(fConst42 * (fConst40 * fRec797[1] - fConst39 * (fConst37 * fTemp1168 + fConst36 * fVec114[1])));
			float fTemp1169 = 0.63661975f * std::atan(1.5707964f * fRec797[0]);
			fRec796[0] = ((iTemp9) ? fTemp1169 : fRec796[1]);
			float fTemp1170 = fRec796[0] + fTemp69 * (fTemp1169 - fRec796[0]);
			fRec795[0] = ((iTemp15) ? fTemp1170 : fRec795[1]);
			iRec801[0] = 1103515245 * iRec801[1] + 31067;
			float fTemp1171 = float(iRec801[0]);
			fVec115[0] = fTemp1171;
			float fRec800 = 4.656613e-10f * (fTemp1171 - fVec115[1]);
			iRec802[0] = 1103515245 * iRec802[1] + 31367;
			iRec803[0] = 1103515245 * iRec803[1] + 31667;
			float fTemp1172 = fSlow2181 * fRec155[0] * float(iRec803[0]) + 3.259629e-10f * float(iRec802[0]) * float(std::fabs(4.656613e-10f * fTemp400) < fTemp984) + fSlow2168 * (fRec164[0] * fRec800 / fTemp982) + fTemp54 + fTemp980 * (fRec795[0] + fTemp14 * (fTemp1170 - fRec795[0]));
			fVec116[0] = fTemp1172;
			fRec794[0] = -(fConst46 * (fConst36 * fRec794[1] - fConst45 * (fConst41 * fTemp1172 + fConst40 * fVec116[1])));
			fRec793[0] = -(fConst34 * (fConst33 * fRec793[1] - fConst32 * (fRec794[0] - fRec794[1])));
			float fTemp1173 = std::fabs(fSlow276 * fRec794[0] + fSlow275 * fRec793[0]);
			float fTemp1174 = ((fTemp1173 > fRec792[1]) ? fSlow2200 : fSlow2197);
			fRec792[0] = fTemp1173 * (1.0f - fTemp1174) + fRec792[1] * fTemp1174;
			float fTemp1175 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec792[0]))) - fSlow52)));
			float fTemp1176 = fRec794[0] * std::pow(1e+01f, 0.05f * (((fTemp1175 > 0.0f) ? 2.0f * fTemp1175 : 1.4005603f * fTemp1175) - fTemp1175));
			fVec117[0] = fTemp1176;
			fRec791[0] = -(fConst49 * (fConst48 * fRec791[1] - fConst47 * (fTemp1176 - fVec117[1])));
			fRec790[0] = fRec791[0] - fConst7 * (fConst5 * fRec790[2] + fConst3 * fRec790[1]);
			float fTemp1177 = 2.0f * fRec790[1];
			iRec809[0] = 1103515245 * iRec809[1] + 14467;
			float fTemp1178 = float(iRec809[0]);
			fVec118[0] = fTemp1178;
			fRec808[0] = (4.656613e-10f * ((fTemp1178 - fVec118[1]) / fTemp85) - fTemp88 * fRec808[1]) / fTemp87;
			float fTemp1179 = fSlow2278 * fRec810[1];
			float fTemp1180 = fSlow2308 * fRec811[1];
			iRec815[0] = 1103515245 * iRec815[1] + 18667;
			int iTemp1181 = std::fabs(4.656613e-10f * float(iRec815[0])) < fTemp999;
			iRec817[0] = 1103515245 * iRec817[1] + 20667;
			fRec816[0] = ((iTemp1181) ? 0.75f * std::fabs(4.656613e-10f * float(iRec817[0])) + 0.25f : fRec816[1]);
			fRec814[0] = std::max<float>(fSlow437 * fRec814[1], fRec816[0] * float(iTemp1181));
			fRec813[0] = fConst72 * fRec814[0] + fConst66 * fRec813[1];
			float fTemp1182 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2340 * (fSlow311 / (fSlow2339 * std::max<float>(fRec686[0], 0.7f * fRec813[0]) * fTemp996 + 1e-07f))))));
			float fTemp1183 = 1.0f - fTemp1182;
			float fTemp1184 = fTemp1009 * (fTemp1010 - std::atan(1.5707964f * (fTemp1007 + fSlow2380 * fRec217[0] * ((iSlow490) ? fTemp1044 : fTemp1045))));
			float fTemp1185 = fSlow2381 * (fTemp1184 / fRec217[0]);
			float fTemp1186 = std::fabs(-fTemp1185);
			float fTemp1187 = ((fTemp1186 > fRec821[1]) ? fConst80 : fSlow508);
			fRec821[0] = fTemp1186 * (1.0f - fTemp1187) + fRec821[1] * fTemp1187;
			float fTemp1188 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2408 * std::exp(-(fSlow2395 * fRec821[0]))))));
			float fTemp1189 = 1.0f - fTemp1188;
			fRec822[0] = fTemp1188 * fRec822[1] - fSlow2381 * (fTemp1184 * fTemp1189 / fRec217[0]);
			fRec820[0] = fRec820[1] * fTemp1188 + fRec822[0] * fTemp1189;
			float fTemp1190 = fRec820[0] + fTemp1185;
			float fTemp1191 = std::fabs(-fTemp1190);
			float fTemp1192 = ((fTemp1191 > fRec819[1]) ? fConst81 : fSlow540);
			fRec819[0] = fTemp1191 * (1.0f - fTemp1192) + fRec819[1] * fTemp1192;
			float fTemp1193 = fTemp1190 / (fSlow2409 * fRec213[0] * fRec819[0] + 1.0f);
			float fTemp1194 = fRec820[0] - fTemp1193;
			fVec119[IOTA0 & 2047] = fTemp1194;
			float fTemp1195 = fRec820[0] + fTemp1102 * fVec119[(IOTA0 - iTemp1101) & 2047] + fTemp1100 * fVec119[(IOTA0 - iTemp1099) & 2047] + fTemp1098 * fVec119[(IOTA0 - iTemp1097) & 2047] + fTemp1096 * fVec119[(IOTA0 - iTemp1095) & 2047] + fTemp1094 * fVec119[(IOTA0 - iTemp1093) & 2047] + fTemp1092 * fVec119[(IOTA0 - iTemp1091) & 2047] + fTemp1086 * fVec119[(IOTA0 - iTemp1088) & 2047] + fTemp1090 * fVec119[(IOTA0 - iTemp1089) & 2047] + fTemp1081 * fVec119[(IOTA0 - iTemp1083) & 2047] + fTemp1076 * fVec119[(IOTA0 - iTemp1078) & 2047] + fTemp1071 * fVec119[(IOTA0 - iTemp1073) & 2047] + fTemp1066 * fVec119[(IOTA0 - iTemp1068) & 2047] + fTemp1061 * fVec119[(IOTA0 - iTemp1063) & 2047] + fTemp1006 * fVec119[(IOTA0 - iTemp1058) & 2047] - fTemp1193;
			fVec120[IOTA0 & 8191] = fTemp1195;
			fRec818[0] = fTemp1182 * fRec818[1] + fTemp1183 * (fTemp1124 * (fTemp1113 * (fTemp1114 * (0.0052083335f * fTemp1115 * fVec120[(IOTA0 - iTemp1123) & 8191] - 0.020833334f * fTemp1116 * fVec120[(IOTA0 - iTemp1122) & 8191]) + 0.03125f * fTemp1117 * fVec120[(IOTA0 - iTemp1121) & 8191]) - 0.020833334f * fTemp1118 * fVec120[(IOTA0 - iTemp1120) & 8191]) + 0.0052083335f * fTemp1119 * fVec120[(IOTA0 - iTemp1111) & 8191]);
			fRec812[0] = fRec812[1] * fTemp1182 + fRec818[0] * fTemp1183;
			fRec811[0] = fTemp995 * fRec812[0] - (fSlow2309 * fRec811[2] + fTemp1180) / fSlow2305;
			fRec810[0] = (fTemp1180 + fRec811[0] * fSlow2451 + fSlow2307 * fRec811[2]) / fSlow2305 - (fSlow2279 * fRec810[2] + fTemp1179) / fSlow2275;
			fRec807[0] = (fTemp1179 + fRec810[0] * fSlow2452 + fSlow2277 * fRec810[2]) / fSlow2275 + fSlow2249 * fRec184[0] * fRec808[0] - fConst58 * (fConst56 * fRec807[2] + fConst54 * fRec807[1]);
			fRec806[0] = fConst89 * (fRec807[2] + (fRec807[0] - 2.0f * fRec807[1])) - (fSlow2236 * fRec806[2] + 2.0f * fSlow2231 * fRec806[1]) / fSlow2235;
			fRec805[0] = (fRec806[2] + fRec806[0] + 2.0f * fRec806[1]) / fSlow2235 - (fSlow2234 * fRec805[2] + 2.0f * fSlow2231 * fRec805[1]) / fSlow2233;
			fRec804[0] = (fRec805[2] + fRec805[0] + 2.0f * fRec805[1]) / fSlow2233 - (fSlow2232 * fRec804[2] + 2.0f * fSlow2231 * fRec804[1]) / fSlow2230;
			float fTemp1196 = 2.0f * fRec804[1];
			float fTemp1197 = ((iSlow39) ? fTemp1043 : fSlow2453 * ((fRec804[2] + fRec804[0] + fTemp1196) / fSlow2230) + fSlow2206 * std::atan(fConst50 * (fRec790[2] + fRec790[0] + fTemp1177)));
			float fTemp1198 = ((iSlow1) ? 0.0f : fTemp1197);
			fVec121[0] = fTemp1198;
			float fTemp1199 = 0.5f * (((iSlow490) ? 0.0f : fTemp1127) + ((iSlow490) ? 0.0f : fTemp1198));
			float fTemp1200 = (std::atan(1.5707964f * (fSlow2693 * fRec217[0] * ((iSlow490) ? fTemp1127 : fTemp1199) + fTemp1161)) - fTemp1164) * fTemp1163;
			float fTemp1201 = fSlow2694 * (fTemp1200 / fRec217[0]);
			float fTemp1202 = std::fabs(fTemp1201);
			float fTemp1203 = ((fTemp1202 > fRec789[1]) ? fConst80 : fSlow508);
			fRec789[0] = fTemp1202 * (1.0f - fTemp1203) + fRec789[1] * fTemp1203;
			float fTemp1204 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2721 * std::exp(-(fSlow2708 * fRec789[0]))))));
			float fTemp1205 = 1.0f - fTemp1204;
			fRec823[0] = fTemp1204 * fRec823[1] + fSlow2694 * (fTemp1200 * fTemp1205 / fRec217[0]);
			fRec788[0] = fRec788[1] * fTemp1204 + fRec823[0] * fTemp1205;
			float fTemp1206 = fTemp1201 - fRec788[0];
			float fTemp1207 = std::fabs(fTemp1206);
			float fTemp1208 = ((fTemp1207 > fRec787[1]) ? fConst81 : fSlow540);
			fRec787[0] = fTemp1207 * (1.0f - fTemp1208) + fRec787[1] * fTemp1208;
			float fTemp1209 = fTemp1206 / (fSlow2722 * fRec213[0] * fRec787[0] + 1.0f);
			float fTemp1210 = fRec788[0] + fTemp1209;
			fVec122[IOTA0 & 2047] = fTemp1210;
			int iTemp1211 = int(fTemp1158);
			int iTemp1212 = std::min<int>(2049, std::max<int>(0, iTemp1211));
			float fTemp1213 = 0.75f * fTemp1157;
			float fTemp1214 = std::floor(fTemp1213);
			float fTemp1215 = fTemp1214 + (1.0f - fTemp1213);
			int iTemp1216 = int(fTemp1213);
			int iTemp1217 = std::min<int>(2049, std::max<int>(0, iTemp1216));
			float fTemp1218 = 0.625f * fTemp1157;
			float fTemp1219 = std::floor(fTemp1218);
			float fTemp1220 = fTemp1219 + (1.0f - fTemp1218);
			int iTemp1221 = int(fTemp1218);
			int iTemp1222 = std::min<int>(2049, std::max<int>(0, iTemp1221));
			float fTemp1223 = 0.5f * fTemp1157;
			float fTemp1224 = std::floor(fTemp1223);
			float fTemp1225 = fTemp1224 + (1.0f - fTemp1223);
			int iTemp1226 = int(fTemp1223);
			int iTemp1227 = std::min<int>(2049, std::max<int>(0, iTemp1226));
			float fTemp1228 = 0.375f * fTemp1157;
			float fTemp1229 = std::floor(fTemp1228);
			float fTemp1230 = fTemp1229 + (1.0f - fTemp1228);
			int iTemp1231 = int(fTemp1228);
			int iTemp1232 = std::min<int>(2049, std::max<int>(0, iTemp1231));
			float fTemp1233 = 0.25f * fTemp1157;
			float fTemp1234 = std::floor(fTemp1233);
			float fTemp1235 = fTemp1234 + (1.0f - fTemp1233);
			int iTemp1236 = int(fTemp1233);
			int iTemp1237 = std::min<int>(2049, std::max<int>(0, iTemp1236));
			float fTemp1238 = 0.125f * fTemp1157;
			float fTemp1239 = std::floor(fTemp1238);
			float fTemp1240 = fTemp1239 + (1.0f - fTemp1238);
			int iTemp1241 = int(fTemp1238);
			int iTemp1242 = std::min<int>(2049, std::max<int>(0, iTemp1241));
			int iTemp1243 = std::min<int>(2049, std::max<int>(0, iTemp1241 + 1));
			float fTemp1244 = fTemp1238 - fTemp1239;
			int iTemp1245 = std::min<int>(2049, std::max<int>(0, iTemp1236 + 1));
			float fTemp1246 = fTemp1233 - fTemp1234;
			int iTemp1247 = std::min<int>(2049, std::max<int>(0, iTemp1231 + 1));
			float fTemp1248 = fTemp1228 - fTemp1229;
			int iTemp1249 = std::min<int>(2049, std::max<int>(0, iTemp1226 + 1));
			float fTemp1250 = fTemp1223 - fTemp1224;
			int iTemp1251 = std::min<int>(2049, std::max<int>(0, iTemp1221 + 1));
			float fTemp1252 = fTemp1218 - fTemp1219;
			int iTemp1253 = std::min<int>(2049, std::max<int>(0, iTemp1216 + 1));
			float fTemp1254 = fTemp1213 - fTemp1214;
			int iTemp1255 = std::min<int>(2049, std::max<int>(0, iTemp1211 + 1));
			float fTemp1256 = fTemp1158 - fTemp1159;
			float fTemp1257 = fRec788[0] + fTemp1256 * fVec122[(IOTA0 - iTemp1255) & 2047] + fTemp1254 * fVec122[(IOTA0 - iTemp1253) & 2047] + fTemp1252 * fVec122[(IOTA0 - iTemp1251) & 2047] + fTemp1250 * fVec122[(IOTA0 - iTemp1249) & 2047] + fTemp1248 * fVec122[(IOTA0 - iTemp1247) & 2047] + fTemp1246 * fVec122[(IOTA0 - iTemp1245) & 2047] + fTemp1244 * fVec122[(IOTA0 - iTemp1243) & 2047] + fTemp1209 + fVec122[(IOTA0 - iTemp1242) & 2047] * fTemp1240 + fVec122[(IOTA0 - iTemp1237) & 2047] * fTemp1235 + fVec122[(IOTA0 - iTemp1232) & 2047] * fTemp1230 + fVec122[(IOTA0 - iTemp1227) & 2047] * fTemp1225 + fVec122[(IOTA0 - iTemp1222) & 2047] * fTemp1220 + fVec122[(IOTA0 - iTemp1217) & 2047] * fTemp1215 + fVec122[(IOTA0 - iTemp1212) & 2047] * fTemp1160;
			fVec123[IOTA0 & 8191] = fTemp1257;
			iRec825[0] = 1103515245 * iRec825[1] + 26759;
			fRec824[0] = ((iTemp1148) ? (((4.656613e-10f * float(iRec825[0])) > 0.0f) ? 1.0f : -1.0f) : fRec824[1]);
			iRec830[0] = 1103515245 * iRec830[1] + 16359;
			fRec829[0] = fConst84 * float(iRec830[0]) + fConst82 * fRec829[1];
			fRec828[0] = fConst83 * fRec829[0] + fConst82 * fRec828[1];
			fRec827[0] = fConst83 * fRec828[0] + fConst82 * fRec827[1];
			fRec826[0] = fConst83 * fRec827[0] + fConst82 * fRec826[1];
			float fTemp1258 = ((iTemp6) ? 0.0f : fSlow2736 + fRec831[1]);
			fRec831[0] = fTemp1258 - std::floor(fTemp1258);
			int iTemp1259 = std::max<int>(0, std::min<int>(int(65536.0f * fRec831[0]), 65535));
			float fTemp1260 = ((iTemp6) ? 0.0f : fSlow2746 + fRec832[1]);
			fRec832[0] = fTemp1260 - std::floor(fTemp1260);
			int iTemp1261 = std::max<int>(0, std::min<int>(int(65536.0f * fRec832[0]), 65535));
			float fTemp1262 = std::min<float>(8e+03f, std::max<float>(8.0f, fConst0 * (std::min<float>(0.02f, fSlow2763 * fTemp0 * (8.0f * fRec764[0] + 1.0f)) * (fSlow2750 * (fSlow2749 * ftbl0VhsDspSIG0[iTemp1261] + fSlow2748 * ftbl1VhsDspSIG1[iTemp1261]) + fSlow2740 * (fSlow2739 * ftbl0VhsDspSIG0[iTemp1259] + fSlow2738 * ftbl1VhsDspSIG1[iTemp1259]) + 0.07957747f * ((fSlow2730 * fTemp173 + fSlow2729 * fTemp172) / fSlow36) + fConst85 * fRec826[0]) + 0.0058f + 0.0006802721f * fRec764[0] * fRec824[0])));
			float fTemp1263 = fTemp1262 + -1.499995f;
			int iTemp1264 = int(fTemp1263);
			int iTemp1265 = std::min<int>(8192, std::max<int>(0, iTemp1264 + 4));
			float fTemp1266 = std::floor(fTemp1263);
			float fTemp1267 = fTemp1262 + (-3.0f - fTemp1266);
			float fTemp1268 = fTemp1262 + (-2.0f - fTemp1266);
			float fTemp1269 = fTemp1262 + (-1.0f - fTemp1266);
			float fTemp1270 = fTemp1262 - fTemp1266;
			float fTemp1271 = fTemp1270 * fTemp1269;
			float fTemp1272 = fTemp1271 * fTemp1268;
			float fTemp1273 = fTemp1272 * fTemp1267;
			int iTemp1274 = std::min<int>(8192, std::max<int>(0, iTemp1264 + 3));
			int iTemp1275 = std::min<int>(8192, std::max<int>(0, iTemp1264 + 2));
			int iTemp1276 = std::min<int>(8192, std::max<int>(0, iTemp1264 + 1));
			int iTemp1277 = std::min<int>(8192, std::max<int>(0, iTemp1264));
			float fTemp1278 = fTemp1262 + (-4.0f - fTemp1266);
			fRec783[0] = fTemp1155 * fRec783[1] + fTemp1156 * (fTemp1278 * (fTemp1267 * (fTemp1268 * (0.0052083335f * fVec123[(IOTA0 - iTemp1277) & 8191] * fTemp1269 - 0.020833334f * fTemp1270 * fVec123[(IOTA0 - iTemp1276) & 8191]) + 0.03125f * fTemp1271 * fVec123[(IOTA0 - iTemp1275) & 8191]) - 0.020833334f * fTemp1272 * fVec123[(IOTA0 - iTemp1274) & 8191]) + 0.0052083335f * fTemp1273 * fVec123[(IOTA0 - iTemp1265) & 8191]);
			fRec769[0] = fRec769[1] * fTemp1155 + fRec783[0] * fTemp1156;
			fRec763[0] = fRec769[0] * fTemp1149 - (fRec763[2] * fSlow2622 + fTemp1147) / fSlow2618;
			fRec762[0] = (fTemp1147 + fRec763[0] * fSlow2764 + fRec763[2] * fSlow2620) / fSlow2618 - (fRec762[2] * fSlow2592 + fTemp1146) / fSlow2588;
			fRec759[0] = (fTemp1146 + fRec762[0] * fSlow2765 + fRec762[2] * fSlow2590) / fSlow2588 + fSlow2562 * fRec184[0] * fRec760[0] - fConst58 * (fConst56 * fRec759[2] + fConst54 * fRec759[1]);
			fRec758[0] = fConst89 * (fRec759[2] + (fRec759[0] - 2.0f * fRec759[1])) - (fRec758[2] * fSlow2549 + 2.0f * fRec758[1] * fSlow2544) / fSlow2548;
			fRec757[0] = (fRec758[2] + fRec758[0] + 2.0f * fRec758[1]) / fSlow2548 - (fRec757[2] * fSlow2547 + 2.0f * fSlow2544 * fRec757[1]) / fSlow2546;
			fRec756[0] = (fRec757[2] + fRec757[0] + 2.0f * fRec757[1]) / fSlow2546 - (fRec756[2] * fSlow2545 + 2.0f * fSlow2544 * fRec756[1]) / fSlow2543;
			float fTemp1279 = 2.0f * fRec756[1];
			float fTemp1280 = ((iSlow1) ? ((iSlow39) ? ((iSlow66) ? ((iSlow93) ? ((iSlow120) ? ((iSlow147) ? ((iSlow174) ? ((iSlow201) ? fTemp70 : fSlow587 * ((fRec180[0] + fRec180[2] + fTemp195) / fSlow2780) + fSlow310 * std::atan(fConst50 * (fRec141[0] + fRec141[2] + fTemp84))) : fSlow898 * ((fRec240[0] + fRec240[2] + fTemp352) / fSlow2778) + fSlow651 * std::atan(fConst50 * (fRec121[0] + fRec121[2] + fTemp216))) : fSlow1209 * ((fRec327[0] + fRec327[2] + fTemp508) / fSlow2776) + fSlow962 * std::atan(fConst50 * (fRec101[0] + fRec101[2] + fTemp372))) : fSlow1520 * ((fRec414[0] + fRec414[2] + fTemp663) / fSlow2774) + fSlow1273 * std::atan(fConst50 * (fRec81[0] + fRec81[2] + fTemp527))) : fSlow1831 * ((fRec501[0] + fRec501[2] + fTemp817) / fSlow2772) + fSlow1584 * std::atan(fConst50 * (fRec61[0] + fRec61[2] + fTemp682))) : fSlow2142 * ((fRec586[0] + fRec586[2] + fTemp971) / fSlow2770) + fSlow1895 * std::atan(fConst50 * (fRec41[0] + fRec41[2] + fTemp836))) : fSlow2453 * ((fRec672[0] + fRec672[2] + fTemp1125) / fSlow2768) + fSlow2206 * std::atan(fConst50 * (fRec21[0] + fRec21[2] + fTemp990))) : fSlow2766 * ((fRec756[0] + fRec756[2] + fTemp1279) / fSlow2540) + fSlow2517 * std::atan(fConst50 * (fRec0[0] + fRec0[2] + fTemp1144)));
			fRec833[0] = fSlow2781 + fConst23 * fRec833[1];
			float fTemp1281 = std::tan(fConst51 * fRec833[0]);
			float fTemp1282 = 1.0f / fTemp1281;
			float fTemp1283 = (fTemp1282 + 1.4142135f) / fTemp1281 + 1.0f;
			fRec835[0] = fTemp55 + fConst90 * fRec835[1];
			fRec834[0] = 4.656613e-10f * fRec835[0] * fTemp46 - (fRec834[2] * ((fTemp1282 + -1.4142135f) / fTemp1281 + 1.0f) + 2.0f * fRec834[1] * (1.0f - 1.0f / VhsDsp_faustpower2_f(fTemp1281))) / fTemp1283;
			fRec836[0] = fSlow2782 + fConst23 * fRec836[1];
			float fTemp1284 = fRec836[0] * (fRec834[0] + fRec834[2] + 2.0f * fRec834[1]) / fTemp1283;
			fRec846[0] = -(fConst34 * (fConst33 * fRec846[1] - fConst32 * (fTemp1198 - fVec121[1])));
			float fTemp1285 = std::fabs(fSlow276 * fTemp1198 + fSlow275 * fRec846[0]);
			float fTemp1286 = ((fTemp1285 > fRec845[1]) ? fSlow284 : fSlow280);
			fRec845[0] = fTemp1285 * (1.0f - fTemp1286) + fRec845[1] * fTemp1286;
			float fTemp1287 = std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec845[0]))) - fSlow16);
			float fTemp1288 = fTemp1198 * std::pow(1e+01f, 0.05f * (((fTemp1287 > 0.0f) ? 0.5f * fTemp1287 : 0.714f * fTemp1287) - fTemp1287));
			fVec124[0] = fTemp1288;
			fRec844[0] = -(fConst42 * (fConst40 * fRec844[1] - fConst39 * (fConst37 * fTemp1288 + fConst36 * fVec124[1])));
			float fTemp1289 = 0.63661975f * std::atan(1.5707964f * fRec844[0]);
			fRec843[0] = ((iTemp9) ? fTemp1289 : fRec843[1]);
			float fTemp1290 = fRec843[0] + fTemp69 * (fTemp1289 - fRec843[0]);
			fRec842[0] = ((iTemp5) ? fTemp1290 : fRec842[1]);
			iRec848[0] = 1103515245 * iRec848[1] + 31087;
			float fTemp1291 = float(iRec848[0]);
			fVec125[0] = fTemp1291;
			float fRec847 = 4.656613e-10f * (fTemp1291 - fVec125[1]);
			iRec849[0] = 1103515245 * iRec849[1] + 31387;
			iRec850[0] = 1103515245 * iRec850[1] + 31687;
			float fTemp1292 = fSlow2492 * fRec155[0] * float(iRec850[0]) + 3.259629e-10f * float(iRec849[0]) * float(std::fabs(4.656613e-10f * fTemp555) < fTemp1138) + fSlow2479 * (fRec164[0] * fRec847 / fTemp1136) + fTemp54 + fTemp1134 * (fRec842[0] + fTemp4 * (fTemp1290 - fRec842[0]));
			fVec126[0] = fTemp1292;
			fRec841[0] = -(fConst46 * (fConst36 * fRec841[1] - fConst45 * (fConst41 * fTemp1292 + fConst40 * fVec126[1])));
			fRec840[0] = -(fConst34 * (fConst33 * fRec840[1] - fConst32 * (fRec841[0] - fRec841[1])));
			float fTemp1293 = std::fabs(fSlow276 * fRec841[0] + fSlow275 * fRec840[0]);
			float fTemp1294 = ((fTemp1293 > fRec839[1]) ? fSlow2511 : fSlow2508);
			fRec839[0] = fTemp1293 * (1.0f - fTemp1294) + fRec839[1] * fTemp1294;
			float fTemp1295 = std::min<float>(25.0f, std::max<float>(-5e+01f, std::max<float>(-7e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(1e-06f, fRec839[0]))) - fSlow17)));
			float fTemp1296 = fRec841[0] * std::pow(1e+01f, 0.05f * (((fTemp1295 > 0.0f) ? 2.0f * fTemp1295 : 1.4005603f * fTemp1295) - fTemp1295));
			fVec127[0] = fTemp1296;
			fRec838[0] = -(fConst49 * (fConst48 * fRec838[1] - fConst47 * (fTemp1296 - fVec127[1])));
			fRec837[0] = fRec838[0] - fConst7 * (fConst5 * fRec837[2] + fConst3 * fRec837[1]);
			float fTemp1297 = 2.0f * fRec837[1];
			iRec856[0] = 1103515245 * iRec856[1] + 14487;
			float fTemp1298 = float(iRec856[0]);
			fVec128[0] = fTemp1298;
			fRec855[0] = (4.656613e-10f * ((fTemp1298 - fVec128[1]) / fTemp85) - fTemp88 * fRec855[1]) / fTemp87;
			float fTemp1299 = fSlow2591 * fRec857[1];
			float fTemp1300 = fSlow2621 * fRec858[1];
			iRec862[0] = 1103515245 * iRec862[1] + 18687;
			int iTemp1301 = std::fabs(4.656613e-10f * float(iRec862[0])) < fTemp1153;
			iRec864[0] = 1103515245 * iRec864[1] + 20687;
			fRec863[0] = ((iTemp1301) ? 0.75f * std::fabs(4.656613e-10f * float(iRec864[0])) + 0.25f : fRec863[1]);
			fRec861[0] = std::max<float>(fSlow437 * fRec861[1], fRec863[0] * float(iTemp1301));
			fRec860[0] = fConst72 * fRec861[0] + fConst66 * fRec860[1];
			float fTemp1302 = std::exp(-(fConst74 * std::min<float>(2e+05f, std::max<float>(2e+02f, fSlow2653 * (fSlow311 / (fSlow2652 * std::max<float>(fRec770[0], 0.7f * fRec860[0]) * fTemp1150 + 1e-07f))))));
			float fTemp1303 = 1.0f - fTemp1302;
			float fTemp1304 = fTemp1163 * (fTemp1164 - std::atan(1.5707964f * (fTemp1161 + fSlow2693 * fRec217[0] * ((iSlow490) ? fTemp1198 : fTemp1199))));
			float fTemp1305 = fSlow2694 * (fTemp1304 / fRec217[0]);
			float fTemp1306 = std::fabs(-fTemp1305);
			float fTemp1307 = ((fTemp1306 > fRec868[1]) ? fConst80 : fSlow508);
			fRec868[0] = fTemp1306 * (1.0f - fTemp1307) + fRec868[1] * fTemp1307;
			float fTemp1308 = std::exp(-(fConst74 * std::min<float>(fConst1, std::max<float>(3e+02f, fSlow2721 * std::exp(-(fSlow2708 * fRec868[0]))))));
			float fTemp1309 = 1.0f - fTemp1308;
			fRec869[0] = fTemp1308 * fRec869[1] - fSlow2694 * (fTemp1304 * fTemp1309 / fRec217[0]);
			fRec867[0] = fRec867[1] * fTemp1308 + fRec869[0] * fTemp1309;
			float fTemp1310 = fRec867[0] + fTemp1305;
			float fTemp1311 = std::fabs(-fTemp1310);
			float fTemp1312 = ((fTemp1311 > fRec866[1]) ? fConst81 : fSlow540);
			fRec866[0] = fTemp1311 * (1.0f - fTemp1312) + fRec866[1] * fTemp1312;
			float fTemp1313 = fTemp1310 / (fSlow2722 * fRec213[0] * fRec866[0] + 1.0f);
			float fTemp1314 = fRec867[0] - fTemp1313;
			fVec129[IOTA0 & 2047] = fTemp1314;
			float fTemp1315 = fRec867[0] + fTemp1256 * fVec129[(IOTA0 - iTemp1255) & 2047] + fTemp1254 * fVec129[(IOTA0 - iTemp1253) & 2047] + fTemp1252 * fVec129[(IOTA0 - iTemp1251) & 2047] + fTemp1250 * fVec129[(IOTA0 - iTemp1249) & 2047] + fTemp1248 * fVec129[(IOTA0 - iTemp1247) & 2047] + fTemp1246 * fVec129[(IOTA0 - iTemp1245) & 2047] + fTemp1240 * fVec129[(IOTA0 - iTemp1242) & 2047] + fTemp1244 * fVec129[(IOTA0 - iTemp1243) & 2047] + fTemp1235 * fVec129[(IOTA0 - iTemp1237) & 2047] + fTemp1230 * fVec129[(IOTA0 - iTemp1232) & 2047] + fTemp1225 * fVec129[(IOTA0 - iTemp1227) & 2047] + fTemp1220 * fVec129[(IOTA0 - iTemp1222) & 2047] + fTemp1215 * fVec129[(IOTA0 - iTemp1217) & 2047] + fTemp1160 * fVec129[(IOTA0 - iTemp1212) & 2047] - fTemp1313;
			fVec130[IOTA0 & 8191] = fTemp1315;
			fRec865[0] = fTemp1302 * fRec865[1] + fTemp1303 * (fTemp1278 * (fTemp1267 * (fTemp1268 * (0.0052083335f * fTemp1269 * fVec130[(IOTA0 - iTemp1277) & 8191] - 0.020833334f * fTemp1270 * fVec130[(IOTA0 - iTemp1276) & 8191]) + 0.03125f * fTemp1271 * fVec130[(IOTA0 - iTemp1275) & 8191]) - 0.020833334f * fTemp1272 * fVec130[(IOTA0 - iTemp1274) & 8191]) + 0.0052083335f * fTemp1273 * fVec130[(IOTA0 - iTemp1265) & 8191]);
			fRec859[0] = fRec859[1] * fTemp1302 + fRec865[0] * fTemp1303;
			fRec858[0] = fTemp1149 * fRec859[0] - (fSlow2622 * fRec858[2] + fTemp1300) / fSlow2618;
			fRec857[0] = (fTemp1300 + fRec858[0] * fSlow2764 + fSlow2620 * fRec858[2]) / fSlow2618 - (fSlow2592 * fRec857[2] + fTemp1299) / fSlow2588;
			fRec854[0] = (fTemp1299 + fRec857[0] * fSlow2765 + fSlow2590 * fRec857[2]) / fSlow2588 + fSlow2562 * fRec184[0] * fRec855[0] - fConst58 * (fConst56 * fRec854[2] + fConst54 * fRec854[1]);
			fRec853[0] = fConst89 * (fRec854[2] + (fRec854[0] - 2.0f * fRec854[1])) - (fSlow2549 * fRec853[2] + 2.0f * fSlow2544 * fRec853[1]) / fSlow2548;
			fRec852[0] = (fRec853[2] + fRec853[0] + 2.0f * fRec853[1]) / fSlow2548 - (fSlow2547 * fRec852[2] + 2.0f * fSlow2544 * fRec852[1]) / fSlow2546;
			fRec851[0] = (fRec852[2] + fRec852[0] + 2.0f * fRec852[1]) / fSlow2546 - (fSlow2545 * fRec851[2] + 2.0f * fSlow2544 * fRec851[1]) / fSlow2543;
			float fTemp1316 = 2.0f * fRec851[1];
			float fTemp1317 = ((iSlow1) ? ((iSlow39) ? ((iSlow66) ? ((iSlow93) ? ((iSlow120) ? ((iSlow147) ? ((iSlow174) ? ((iSlow201) ? fTemp109 : fSlow587 * ((fRec289[0] + fRec289[2] + fTemp269) / fSlow2780) + fSlow310 * std::atan(fConst50 * (fRec274[0] + fRec274[2] + fTemp250))) : fSlow898 * ((fRec376[0] + fRec376[2] + fTemp425) / fSlow2778) + fSlow651 * std::atan(fConst50 * (fRec361[0] + fRec361[2] + fTemp406))) : fSlow1209 * ((fRec463[0] + fRec463[2] + fTemp580) / fSlow2776) + fSlow962 * std::atan(fConst50 * (fRec448[0] + fRec448[2] + fTemp561))) : fSlow1520 * ((fRec550[0] + fRec550[2] + fTemp734) / fSlow2774) + fSlow1273 * std::atan(fConst50 * (fRec535[0] + fRec535[2] + fTemp715))) : fSlow1831 * ((fRec635[0] + fRec635[2] + fTemp888) / fSlow2772) + fSlow1584 * std::atan(fConst50 * (fRec620[0] + fRec620[2] + fTemp869))) : fSlow2142 * ((fRec719[0] + fRec719[2] + fTemp1042) / fSlow2770) + fSlow1895 * std::atan(fConst50 * (fRec706[0] + fRec706[2] + fTemp1023))) : fSlow2453 * ((fRec804[0] + fRec804[2] + fTemp1196) / fSlow2768) + fSlow2206 * std::atan(fConst50 * (fRec790[0] + fRec790[2] + fTemp1177))) : fSlow2766 * ((fRec851[0] + fRec851[2] + fTemp1316) / fSlow2540) + fSlow2517 * std::atan(fConst50 * (fRec837[0] + fRec837[2] + fTemp1297)));
			fRec870[0] = fSlow2783 + fConst23 * fRec870[1];
			fRec871[0] = fSlow2784 + fConst23 * fRec871[1];
			fRec872[0] = fSlow2785 + fConst23 * fRec872[1];
			float fTemp1318 = std::fabs(0.5f * (((iSlow1) ? fTemp1126 : fSlow2766 * ((fRec756[2] + fRec756[0] + fTemp1279) / fSlow2543) + fSlow2517 * std::atan(fConst50 * (fRec0[2] + fRec0[0] + fTemp1144))) + ((iSlow1) ? fTemp1197 : fSlow2766 * ((fRec851[2] + fRec851[0] + fTemp1316) / fSlow2543) + fSlow2517 * std::atan(fConst50 * (fRec837[2] + fRec837[0] + fTemp1297)))));
			float fTemp1319 = ((fTemp1318 > fRec873[1]) ? fConst92 : fConst91);
			fRec873[0] = fTemp1318 * (1.0f - fTemp1319) + fRec873[1] * fTemp1319;
			fRec874[0] = fSlow2786 + fConst23 * fRec874[1];
			float fTemp1320 = (fTemp53 + 0.35f * fTemp51 * float((2.0f * std::min<float>(fConst1, fTemp48 * (fConst24 * fRec148[0] * (fRec146[0] + fRec146[2] + fTemp47) + 1.0f))) < fConst1)) * (fRec874[0] * (4.0f * fRec873[0] * fRec872[0] + 1.0f) * (0.6f * fRec871[0] * ftbl0VhsDspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec17[0]), 65535))] + 1.0f) + 0.5f * fRec870[0] * (fTemp1280 + fTemp1317));
			fRec875[0] = fSlow2787 + fConst23 * fRec875[1];
			output0[i0] = FAUSTFLOAT(fRec875[0] * (fTemp1320 + fTemp1284 + fTemp1280));
			output1[i0] = FAUSTFLOAT(fRec875[0] * (fTemp1320 + fTemp1284 + fTemp1317));
			iVec0[1] = iVec0[0];
			iRec8[1] = iRec8[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			iRec9[1] = iRec9[0];
			iRec10[1] = iRec10[0];
			iRec11[1] = iRec11[0];
			iRec12[1] = iRec12[0];
			fRec5[1] = fRec5[0];
			fRec13[1] = fRec13[0];
			iRec14[1] = iRec14[0];
			fRec17[1] = fRec17[0];
			iRec29[1] = iRec29[0];
			fRec28[1] = fRec28[0];
			fRec27[1] = fRec27[0];
			iRec30[1] = iRec30[0];
			iRec31[1] = iRec31[0];
			iRec32[1] = iRec32[0];
			iRec33[1] = iRec33[0];
			fRec26[1] = fRec26[0];
			fRec34[1] = fRec34[0];
			iRec35[1] = iRec35[0];
			iRec49[1] = iRec49[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			iRec50[1] = iRec50[0];
			iRec51[1] = iRec51[0];
			iRec52[1] = iRec52[0];
			iRec53[1] = iRec53[0];
			fRec46[1] = fRec46[0];
			fRec54[1] = fRec54[0];
			iRec55[1] = iRec55[0];
			iRec69[1] = iRec69[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			iRec70[1] = iRec70[0];
			iRec71[1] = iRec71[0];
			iRec72[1] = iRec72[0];
			iRec73[1] = iRec73[0];
			fRec66[1] = fRec66[0];
			fRec74[1] = fRec74[0];
			iRec75[1] = iRec75[0];
			iRec89[1] = iRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			iRec90[1] = iRec90[0];
			iRec91[1] = iRec91[0];
			iRec92[1] = iRec92[0];
			iRec93[1] = iRec93[0];
			fRec86[1] = fRec86[0];
			fRec94[1] = fRec94[0];
			iRec95[1] = iRec95[0];
			iRec109[1] = iRec109[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			iRec110[1] = iRec110[0];
			iRec111[1] = iRec111[0];
			iRec112[1] = iRec112[0];
			iRec113[1] = iRec113[0];
			fRec106[1] = fRec106[0];
			fRec114[1] = fRec114[0];
			iRec115[1] = iRec115[0];
			iRec129[1] = iRec129[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			iRec130[1] = iRec130[0];
			iRec131[1] = iRec131[0];
			iRec132[1] = iRec132[0];
			iRec133[1] = iRec133[0];
			fRec126[1] = fRec126[0];
			fRec134[1] = fRec134[0];
			iRec135[1] = iRec135[0];
			iRec147[1] = iRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec151[1] = fRec151[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			iRec154[1] = iRec154[0];
			fRec155[1] = fRec155[0];
			iRec158[1] = iRec158[0];
			fRec157[1] = fRec157[0];
			fRec156[1] = fRec156[0];
			iRec161[1] = iRec161[0];
			fRec160[1] = fRec160[0];
			fRec159[1] = fRec159[0];
			iRec162[1] = iRec162[0];
			iRec163[1] = iRec163[0];
			fRec164[1] = fRec164[0];
			iRec166[1] = iRec166[0];
			fVec2[1] = fVec2[0];
			iRec168[1] = iRec168[0];
			iRec169[1] = iRec169[0];
			iRec170[1] = iRec170[0];
			iRec171[1] = iRec171[0];
			fRec167[1] = fRec167[0];
			fRec172[1] = fRec172[0];
			iRec173[1] = iRec173[0];
			fVec3[1] = fVec3[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fVec4[1] = fVec4[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fRec179[1] = fRec179[0];
			fVec5[1] = fVec5[0];
			fRec145[1] = fRec145[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fVec6[1] = fVec6[0];
			fRec142[1] = fRec142[0];
			fRec141[2] = fRec141[1];
			fRec141[1] = fRec141[0];
			fRec184[1] = fRec184[0];
			fRec186[1] = fRec186[0];
			iRec187[1] = iRec187[0];
			fVec7[1] = fVec7[0];
			fRec185[1] = fRec185[0];
			iRec192[1] = iRec192[0];
			iRec194[1] = iRec194[0];
			fRec193[1] = fRec193[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			iRec200[1] = iRec200[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			iRec201[1] = iRec201[0];
			iRec203[1] = iRec203[0];
			fRec202[1] = fRec202[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			iRec206[1] = iRec206[0];
			iRec208[1] = iRec208[0];
			fRec207[1] = fRec207[0];
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			iRec212[1] = iRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec213[1] = fRec213[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fVec8[1] = fVec8[0];
			fRec216[1] = fRec216[0];
			fRec219[1] = fRec219[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			IOTA0 = IOTA0 + 1;
			iRec221[1] = iRec221[0];
			fRec220[1] = fRec220[0];
			iRec226[1] = iRec226[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fRec209[1] = fRec209[0];
			fRec195[1] = fRec195[0];
			fRec189[2] = fRec189[1];
			fRec189[1] = fRec189[0];
			fRec188[2] = fRec188[1];
			fRec188[1] = fRec188[0];
			fRec183[2] = fRec183[1];
			fRec183[1] = fRec183[0];
			fRec182[2] = fRec182[1];
			fRec182[1] = fRec182[0];
			fRec181[2] = fRec181[1];
			fRec181[1] = fRec181[0];
			fRec180[2] = fRec180[1];
			fRec180[1] = fRec180[0];
			fVec12[1] = fVec12[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			fVec13[1] = fVec13[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			fRec231[1] = fRec231[0];
			iRec234[1] = iRec234[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			iRec236[1] = iRec236[0];
			fVec14[1] = fVec14[0];
			iRec237[1] = iRec237[0];
			iRec238[1] = iRec238[0];
			iRec239[1] = iRec239[0];
			fVec15[1] = fVec15[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fVec16[1] = fVec16[0];
			fRec122[1] = fRec122[0];
			fRec121[2] = fRec121[1];
			fRec121[1] = fRec121[0];
			iRec245[1] = iRec245[0];
			fVec17[1] = fVec17[0];
			fRec244[1] = fRec244[0];
			iRec250[1] = iRec250[0];
			iRec252[1] = iRec252[0];
			fRec251[1] = fRec251[0];
			fRec249[1] = fRec249[0];
			fRec248[1] = fRec248[0];
			iRec258[1] = iRec258[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			iRec259[1] = iRec259[0];
			iRec261[1] = iRec261[0];
			fRec260[1] = fRec260[0];
			fRec255[1] = fRec255[0];
			fRec254[1] = fRec254[0];
			iRec264[1] = iRec264[0];
			iRec266[1] = iRec266[0];
			fRec265[1] = fRec265[0];
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			iRec270[1] = iRec270[0];
			fRec269[1] = fRec269[0];
			fRec268[1] = fRec268[0];
			fRec283[1] = fRec283[0];
			fRec282[1] = fRec282[0];
			fVec18[1] = fVec18[0];
			fRec281[1] = fRec281[0];
			fRec280[1] = fRec280[0];
			fRec279[1] = fRec279[0];
			iRec285[1] = iRec285[0];
			fVec19[1] = fVec19[0];
			iRec286[1] = iRec286[0];
			iRec287[1] = iRec287[0];
			iRec288[1] = iRec288[0];
			fVec20[1] = fVec20[0];
			fRec278[1] = fRec278[0];
			fRec277[1] = fRec277[0];
			fRec276[1] = fRec276[0];
			fVec21[1] = fVec21[0];
			fRec275[1] = fRec275[0];
			fRec274[2] = fRec274[1];
			fRec274[1] = fRec274[0];
			iRec294[1] = iRec294[0];
			fVec22[1] = fVec22[0];
			fRec293[1] = fRec293[0];
			iRec300[1] = iRec300[0];
			iRec302[1] = iRec302[0];
			fRec301[1] = fRec301[0];
			fRec299[1] = fRec299[0];
			fRec298[1] = fRec298[0];
			fRec306[1] = fRec306[0];
			fRec307[1] = fRec307[0];
			fRec305[1] = fRec305[0];
			fRec304[1] = fRec304[0];
			fRec303[1] = fRec303[0];
			fRec297[1] = fRec297[0];
			fRec296[2] = fRec296[1];
			fRec296[1] = fRec296[0];
			fRec295[2] = fRec295[1];
			fRec295[1] = fRec295[0];
			fRec292[2] = fRec292[1];
			fRec292[1] = fRec292[0];
			fRec291[2] = fRec291[1];
			fRec291[1] = fRec291[0];
			fRec290[2] = fRec290[1];
			fRec290[1] = fRec290[0];
			fRec289[2] = fRec289[1];
			fRec289[1] = fRec289[0];
			fVec25[1] = fVec25[0];
			fRec273[1] = fRec273[0];
			fRec308[1] = fRec308[0];
			fRec272[1] = fRec272[0];
			fRec271[1] = fRec271[0];
			iRec310[1] = iRec310[0];
			fRec309[1] = fRec309[0];
			iRec315[1] = iRec315[0];
			fRec314[1] = fRec314[0];
			fRec313[1] = fRec313[0];
			fRec312[1] = fRec312[0];
			fRec311[1] = fRec311[0];
			fRec316[1] = fRec316[0];
			fRec317[1] = fRec317[0];
			fRec267[1] = fRec267[0];
			fRec253[1] = fRec253[0];
			fRec247[2] = fRec247[1];
			fRec247[1] = fRec247[0];
			fRec246[2] = fRec246[1];
			fRec246[1] = fRec246[0];
			fRec243[2] = fRec243[1];
			fRec243[1] = fRec243[0];
			fRec242[2] = fRec242[1];
			fRec242[1] = fRec242[0];
			fRec241[2] = fRec241[1];
			fRec241[1] = fRec241[0];
			fRec240[2] = fRec240[1];
			fRec240[1] = fRec240[0];
			fVec28[1] = fVec28[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fVec29[1] = fVec29[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec318[1] = fRec318[0];
			iRec321[1] = iRec321[0];
			fRec320[1] = fRec320[0];
			fRec319[1] = fRec319[0];
			iRec323[1] = iRec323[0];
			fVec30[1] = fVec30[0];
			iRec324[1] = iRec324[0];
			iRec325[1] = iRec325[0];
			iRec326[1] = iRec326[0];
			fVec31[1] = fVec31[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec32[1] = fVec32[0];
			fRec102[1] = fRec102[0];
			fRec101[2] = fRec101[1];
			fRec101[1] = fRec101[0];
			iRec332[1] = iRec332[0];
			fVec33[1] = fVec33[0];
			fRec331[1] = fRec331[0];
			iRec337[1] = iRec337[0];
			iRec339[1] = iRec339[0];
			fRec338[1] = fRec338[0];
			fRec336[1] = fRec336[0];
			fRec335[1] = fRec335[0];
			iRec345[1] = iRec345[0];
			fRec344[1] = fRec344[0];
			fRec343[1] = fRec343[0];
			iRec346[1] = iRec346[0];
			iRec348[1] = iRec348[0];
			fRec347[1] = fRec347[0];
			fRec342[1] = fRec342[0];
			fRec341[1] = fRec341[0];
			iRec351[1] = iRec351[0];
			iRec353[1] = iRec353[0];
			fRec352[1] = fRec352[0];
			fRec350[1] = fRec350[0];
			fRec349[1] = fRec349[0];
			iRec357[1] = iRec357[0];
			fRec356[1] = fRec356[0];
			fRec355[1] = fRec355[0];
			fRec370[1] = fRec370[0];
			fRec369[1] = fRec369[0];
			fVec34[1] = fVec34[0];
			fRec368[1] = fRec368[0];
			fRec367[1] = fRec367[0];
			fRec366[1] = fRec366[0];
			iRec372[1] = iRec372[0];
			fVec35[1] = fVec35[0];
			iRec373[1] = iRec373[0];
			iRec374[1] = iRec374[0];
			iRec375[1] = iRec375[0];
			fVec36[1] = fVec36[0];
			fRec365[1] = fRec365[0];
			fRec364[1] = fRec364[0];
			fRec363[1] = fRec363[0];
			fVec37[1] = fVec37[0];
			fRec362[1] = fRec362[0];
			fRec361[2] = fRec361[1];
			fRec361[1] = fRec361[0];
			iRec381[1] = iRec381[0];
			fVec38[1] = fVec38[0];
			fRec380[1] = fRec380[0];
			iRec387[1] = iRec387[0];
			iRec389[1] = iRec389[0];
			fRec388[1] = fRec388[0];
			fRec386[1] = fRec386[0];
			fRec385[1] = fRec385[0];
			fRec393[1] = fRec393[0];
			fRec394[1] = fRec394[0];
			fRec392[1] = fRec392[0];
			fRec391[1] = fRec391[0];
			fRec390[1] = fRec390[0];
			fRec384[1] = fRec384[0];
			fRec383[2] = fRec383[1];
			fRec383[1] = fRec383[0];
			fRec382[2] = fRec382[1];
			fRec382[1] = fRec382[0];
			fRec379[2] = fRec379[1];
			fRec379[1] = fRec379[0];
			fRec378[2] = fRec378[1];
			fRec378[1] = fRec378[0];
			fRec377[2] = fRec377[1];
			fRec377[1] = fRec377[0];
			fRec376[2] = fRec376[1];
			fRec376[1] = fRec376[0];
			fVec41[1] = fVec41[0];
			fRec360[1] = fRec360[0];
			fRec395[1] = fRec395[0];
			fRec359[1] = fRec359[0];
			fRec358[1] = fRec358[0];
			iRec397[1] = iRec397[0];
			fRec396[1] = fRec396[0];
			iRec402[1] = iRec402[0];
			fRec401[1] = fRec401[0];
			fRec400[1] = fRec400[0];
			fRec399[1] = fRec399[0];
			fRec398[1] = fRec398[0];
			fRec403[1] = fRec403[0];
			fRec404[1] = fRec404[0];
			fRec354[1] = fRec354[0];
			fRec340[1] = fRec340[0];
			fRec334[2] = fRec334[1];
			fRec334[1] = fRec334[0];
			fRec333[2] = fRec333[1];
			fRec333[1] = fRec333[0];
			fRec330[2] = fRec330[1];
			fRec330[1] = fRec330[0];
			fRec329[2] = fRec329[1];
			fRec329[1] = fRec329[0];
			fRec328[2] = fRec328[1];
			fRec328[1] = fRec328[0];
			fRec327[2] = fRec327[1];
			fRec327[1] = fRec327[0];
			fVec44[1] = fVec44[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fVec45[1] = fVec45[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec405[1] = fRec405[0];
			iRec408[1] = iRec408[0];
			fRec407[1] = fRec407[0];
			fRec406[1] = fRec406[0];
			iRec410[1] = iRec410[0];
			fVec46[1] = fVec46[0];
			iRec411[1] = iRec411[0];
			iRec412[1] = iRec412[0];
			iRec413[1] = iRec413[0];
			fVec47[1] = fVec47[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec48[1] = fVec48[0];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			iRec419[1] = iRec419[0];
			fVec49[1] = fVec49[0];
			fRec418[1] = fRec418[0];
			iRec424[1] = iRec424[0];
			iRec426[1] = iRec426[0];
			fRec425[1] = fRec425[0];
			fRec423[1] = fRec423[0];
			fRec422[1] = fRec422[0];
			iRec432[1] = iRec432[0];
			fRec431[1] = fRec431[0];
			fRec430[1] = fRec430[0];
			iRec433[1] = iRec433[0];
			iRec435[1] = iRec435[0];
			fRec434[1] = fRec434[0];
			fRec429[1] = fRec429[0];
			fRec428[1] = fRec428[0];
			iRec438[1] = iRec438[0];
			iRec440[1] = iRec440[0];
			fRec439[1] = fRec439[0];
			fRec437[1] = fRec437[0];
			fRec436[1] = fRec436[0];
			iRec444[1] = iRec444[0];
			fRec443[1] = fRec443[0];
			fRec442[1] = fRec442[0];
			fRec457[1] = fRec457[0];
			fRec456[1] = fRec456[0];
			fVec50[1] = fVec50[0];
			fRec455[1] = fRec455[0];
			fRec454[1] = fRec454[0];
			fRec453[1] = fRec453[0];
			iRec459[1] = iRec459[0];
			fVec51[1] = fVec51[0];
			iRec460[1] = iRec460[0];
			iRec461[1] = iRec461[0];
			iRec462[1] = iRec462[0];
			fVec52[1] = fVec52[0];
			fRec452[1] = fRec452[0];
			fRec451[1] = fRec451[0];
			fRec450[1] = fRec450[0];
			fVec53[1] = fVec53[0];
			fRec449[1] = fRec449[0];
			fRec448[2] = fRec448[1];
			fRec448[1] = fRec448[0];
			iRec468[1] = iRec468[0];
			fVec54[1] = fVec54[0];
			fRec467[1] = fRec467[0];
			iRec474[1] = iRec474[0];
			iRec476[1] = iRec476[0];
			fRec475[1] = fRec475[0];
			fRec473[1] = fRec473[0];
			fRec472[1] = fRec472[0];
			fRec480[1] = fRec480[0];
			fRec481[1] = fRec481[0];
			fRec479[1] = fRec479[0];
			fRec478[1] = fRec478[0];
			fRec477[1] = fRec477[0];
			fRec471[1] = fRec471[0];
			fRec470[2] = fRec470[1];
			fRec470[1] = fRec470[0];
			fRec469[2] = fRec469[1];
			fRec469[1] = fRec469[0];
			fRec466[2] = fRec466[1];
			fRec466[1] = fRec466[0];
			fRec465[2] = fRec465[1];
			fRec465[1] = fRec465[0];
			fRec464[2] = fRec464[1];
			fRec464[1] = fRec464[0];
			fRec463[2] = fRec463[1];
			fRec463[1] = fRec463[0];
			fVec57[1] = fVec57[0];
			fRec447[1] = fRec447[0];
			fRec482[1] = fRec482[0];
			fRec446[1] = fRec446[0];
			fRec445[1] = fRec445[0];
			iRec484[1] = iRec484[0];
			fRec483[1] = fRec483[0];
			iRec489[1] = iRec489[0];
			fRec488[1] = fRec488[0];
			fRec487[1] = fRec487[0];
			fRec486[1] = fRec486[0];
			fRec485[1] = fRec485[0];
			fRec490[1] = fRec490[0];
			fRec491[1] = fRec491[0];
			fRec441[1] = fRec441[0];
			fRec427[1] = fRec427[0];
			fRec421[2] = fRec421[1];
			fRec421[1] = fRec421[0];
			fRec420[2] = fRec420[1];
			fRec420[1] = fRec420[0];
			fRec417[2] = fRec417[1];
			fRec417[1] = fRec417[0];
			fRec416[2] = fRec416[1];
			fRec416[1] = fRec416[0];
			fRec415[2] = fRec415[1];
			fRec415[1] = fRec415[0];
			fRec414[2] = fRec414[1];
			fRec414[1] = fRec414[0];
			fVec60[1] = fVec60[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fVec61[1] = fVec61[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fRec492[1] = fRec492[0];
			iRec495[1] = iRec495[0];
			fRec494[1] = fRec494[0];
			fRec493[1] = fRec493[0];
			iRec497[1] = iRec497[0];
			fVec62[1] = fVec62[0];
			iRec498[1] = iRec498[0];
			iRec499[1] = iRec499[0];
			iRec500[1] = iRec500[0];
			fVec63[1] = fVec63[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fVec64[1] = fVec64[0];
			fRec62[1] = fRec62[0];
			fRec61[2] = fRec61[1];
			fRec61[1] = fRec61[0];
			iRec506[1] = iRec506[0];
			fVec65[1] = fVec65[0];
			fRec505[1] = fRec505[0];
			iRec511[1] = iRec511[0];
			iRec513[1] = iRec513[0];
			fRec512[1] = fRec512[0];
			fRec510[1] = fRec510[0];
			fRec509[1] = fRec509[0];
			iRec519[1] = iRec519[0];
			fRec518[1] = fRec518[0];
			fRec517[1] = fRec517[0];
			iRec520[1] = iRec520[0];
			iRec522[1] = iRec522[0];
			fRec521[1] = fRec521[0];
			fRec516[1] = fRec516[0];
			fRec515[1] = fRec515[0];
			iRec525[1] = iRec525[0];
			iRec527[1] = iRec527[0];
			fRec526[1] = fRec526[0];
			fRec524[1] = fRec524[0];
			fRec523[1] = fRec523[0];
			iRec531[1] = iRec531[0];
			fRec530[1] = fRec530[0];
			fRec529[1] = fRec529[0];
			fRec544[1] = fRec544[0];
			fRec543[1] = fRec543[0];
			fVec66[1] = fVec66[0];
			fRec542[1] = fRec542[0];
			fRec541[1] = fRec541[0];
			fRec540[1] = fRec540[0];
			iRec546[1] = iRec546[0];
			fVec67[1] = fVec67[0];
			iRec547[1] = iRec547[0];
			iRec548[1] = iRec548[0];
			iRec549[1] = iRec549[0];
			fVec68[1] = fVec68[0];
			fRec539[1] = fRec539[0];
			fRec538[1] = fRec538[0];
			fRec537[1] = fRec537[0];
			fVec69[1] = fVec69[0];
			fRec536[1] = fRec536[0];
			fRec535[2] = fRec535[1];
			fRec535[1] = fRec535[0];
			iRec555[1] = iRec555[0];
			fVec70[1] = fVec70[0];
			fRec554[1] = fRec554[0];
			iRec561[1] = iRec561[0];
			iRec563[1] = iRec563[0];
			fRec562[1] = fRec562[0];
			fRec560[1] = fRec560[0];
			fRec559[1] = fRec559[0];
			fRec567[1] = fRec567[0];
			fRec568[1] = fRec568[0];
			fRec566[1] = fRec566[0];
			fRec565[1] = fRec565[0];
			fRec564[1] = fRec564[0];
			fRec558[1] = fRec558[0];
			fRec557[2] = fRec557[1];
			fRec557[1] = fRec557[0];
			fRec556[2] = fRec556[1];
			fRec556[1] = fRec556[0];
			fRec553[2] = fRec553[1];
			fRec553[1] = fRec553[0];
			fRec552[2] = fRec552[1];
			fRec552[1] = fRec552[0];
			fRec551[2] = fRec551[1];
			fRec551[1] = fRec551[0];
			fRec550[2] = fRec550[1];
			fRec550[1] = fRec550[0];
			fVec73[1] = fVec73[0];
			fRec534[1] = fRec534[0];
			fRec569[1] = fRec569[0];
			fRec533[1] = fRec533[0];
			fRec532[1] = fRec532[0];
			iRec571[1] = iRec571[0];
			fRec570[1] = fRec570[0];
			iRec576[1] = iRec576[0];
			fRec575[1] = fRec575[0];
			fRec574[1] = fRec574[0];
			fRec573[1] = fRec573[0];
			fRec572[1] = fRec572[0];
			fRec577[1] = fRec577[0];
			fRec578[1] = fRec578[0];
			fRec528[1] = fRec528[0];
			fRec514[1] = fRec514[0];
			fRec508[2] = fRec508[1];
			fRec508[1] = fRec508[0];
			fRec507[2] = fRec507[1];
			fRec507[1] = fRec507[0];
			fRec504[2] = fRec504[1];
			fRec504[1] = fRec504[0];
			fRec503[2] = fRec503[1];
			fRec503[1] = fRec503[0];
			fRec502[2] = fRec502[1];
			fRec502[1] = fRec502[0];
			fRec501[2] = fRec501[1];
			fRec501[1] = fRec501[0];
			fVec76[1] = fVec76[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fVec77[1] = fVec77[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fRec579[1] = fRec579[0];
			iRec582[1] = iRec582[0];
			fRec581[1] = fRec581[0];
			fRec580[1] = fRec580[0];
			iRec584[1] = iRec584[0];
			fVec78[1] = fVec78[0];
			iRec585[1] = iRec585[0];
			fVec79[1] = fVec79[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec80[1] = fVec80[0];
			fRec42[1] = fRec42[0];
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			iRec591[1] = iRec591[0];
			fVec81[1] = fVec81[0];
			fRec590[1] = fRec590[0];
			iRec596[1] = iRec596[0];
			iRec598[1] = iRec598[0];
			fRec597[1] = fRec597[0];
			fRec595[1] = fRec595[0];
			fRec594[1] = fRec594[0];
			iRec604[1] = iRec604[0];
			fRec603[1] = fRec603[0];
			fRec602[1] = fRec602[0];
			iRec605[1] = iRec605[0];
			iRec607[1] = iRec607[0];
			fRec606[1] = fRec606[0];
			fRec601[1] = fRec601[0];
			fRec600[1] = fRec600[0];
			iRec610[1] = iRec610[0];
			iRec612[1] = iRec612[0];
			fRec611[1] = fRec611[0];
			fRec609[1] = fRec609[0];
			fRec608[1] = fRec608[0];
			iRec616[1] = iRec616[0];
			fRec615[1] = fRec615[0];
			fRec614[1] = fRec614[0];
			fRec629[1] = fRec629[0];
			fRec628[1] = fRec628[0];
			fVec82[1] = fVec82[0];
			fRec627[1] = fRec627[0];
			fRec626[1] = fRec626[0];
			fRec625[1] = fRec625[0];
			iRec631[1] = iRec631[0];
			fVec83[1] = fVec83[0];
			iRec632[1] = iRec632[0];
			iRec633[1] = iRec633[0];
			iRec634[1] = iRec634[0];
			fVec84[1] = fVec84[0];
			fRec624[1] = fRec624[0];
			fRec623[1] = fRec623[0];
			fRec622[1] = fRec622[0];
			fVec85[1] = fVec85[0];
			fRec621[1] = fRec621[0];
			fRec620[2] = fRec620[1];
			fRec620[1] = fRec620[0];
			iRec640[1] = iRec640[0];
			fVec86[1] = fVec86[0];
			fRec639[1] = fRec639[0];
			iRec646[1] = iRec646[0];
			iRec648[1] = iRec648[0];
			fRec647[1] = fRec647[0];
			fRec645[1] = fRec645[0];
			fRec644[1] = fRec644[0];
			fRec652[1] = fRec652[0];
			fRec653[1] = fRec653[0];
			fRec651[1] = fRec651[0];
			fRec650[1] = fRec650[0];
			fRec649[1] = fRec649[0];
			fRec643[1] = fRec643[0];
			fRec642[2] = fRec642[1];
			fRec642[1] = fRec642[0];
			fRec641[2] = fRec641[1];
			fRec641[1] = fRec641[0];
			fRec638[2] = fRec638[1];
			fRec638[1] = fRec638[0];
			fRec637[2] = fRec637[1];
			fRec637[1] = fRec637[0];
			fRec636[2] = fRec636[1];
			fRec636[1] = fRec636[0];
			fRec635[2] = fRec635[1];
			fRec635[1] = fRec635[0];
			fVec89[1] = fVec89[0];
			fRec619[1] = fRec619[0];
			fRec654[1] = fRec654[0];
			fRec618[1] = fRec618[0];
			fRec617[1] = fRec617[0];
			iRec656[1] = iRec656[0];
			fRec655[1] = fRec655[0];
			iRec661[1] = iRec661[0];
			fRec660[1] = fRec660[0];
			fRec659[1] = fRec659[0];
			fRec658[1] = fRec658[0];
			fRec657[1] = fRec657[0];
			fRec662[1] = fRec662[0];
			fRec663[1] = fRec663[0];
			fRec613[1] = fRec613[0];
			fRec599[1] = fRec599[0];
			fRec593[2] = fRec593[1];
			fRec593[1] = fRec593[0];
			fRec592[2] = fRec592[1];
			fRec592[1] = fRec592[0];
			fRec589[2] = fRec589[1];
			fRec589[1] = fRec589[0];
			fRec588[2] = fRec588[1];
			fRec588[1] = fRec588[0];
			fRec587[2] = fRec587[1];
			fRec587[1] = fRec587[0];
			fRec586[2] = fRec586[1];
			fRec586[1] = fRec586[0];
			fVec92[1] = fVec92[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fVec93[1] = fVec93[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fRec664[1] = fRec664[0];
			iRec667[1] = iRec667[0];
			fRec666[1] = fRec666[0];
			fRec665[1] = fRec665[0];
			iRec669[1] = iRec669[0];
			fVec94[1] = fVec94[0];
			iRec670[1] = iRec670[0];
			iRec671[1] = iRec671[0];
			fVec95[1] = fVec95[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fVec96[1] = fVec96[0];
			fRec22[1] = fRec22[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			iRec677[1] = iRec677[0];
			fVec97[1] = fVec97[0];
			fRec676[1] = fRec676[0];
			iRec682[1] = iRec682[0];
			iRec684[1] = iRec684[0];
			fRec683[1] = fRec683[0];
			fRec681[1] = fRec681[0];
			fRec680[1] = fRec680[0];
			iRec690[1] = iRec690[0];
			fRec689[1] = fRec689[0];
			fRec688[1] = fRec688[0];
			iRec691[1] = iRec691[0];
			iRec693[1] = iRec693[0];
			fRec692[1] = fRec692[0];
			fRec687[1] = fRec687[0];
			fRec686[1] = fRec686[0];
			iRec696[1] = iRec696[0];
			iRec698[1] = iRec698[0];
			fRec697[1] = fRec697[0];
			fRec695[1] = fRec695[0];
			fRec694[1] = fRec694[0];
			iRec702[1] = iRec702[0];
			fRec701[1] = fRec701[0];
			fRec700[1] = fRec700[0];
			fRec715[1] = fRec715[0];
			fRec714[1] = fRec714[0];
			fVec98[1] = fVec98[0];
			fRec713[1] = fRec713[0];
			fRec712[1] = fRec712[0];
			fRec711[1] = fRec711[0];
			iRec717[1] = iRec717[0];
			fVec99[1] = fVec99[0];
			iRec718[1] = iRec718[0];
			fVec100[1] = fVec100[0];
			fRec710[1] = fRec710[0];
			fRec709[1] = fRec709[0];
			fRec708[1] = fRec708[0];
			fVec101[1] = fVec101[0];
			fRec707[1] = fRec707[0];
			fRec706[2] = fRec706[1];
			fRec706[1] = fRec706[0];
			iRec724[1] = iRec724[0];
			fVec102[1] = fVec102[0];
			fRec723[1] = fRec723[0];
			iRec730[1] = iRec730[0];
			iRec732[1] = iRec732[0];
			fRec731[1] = fRec731[0];
			fRec729[1] = fRec729[0];
			fRec728[1] = fRec728[0];
			fRec736[1] = fRec736[0];
			fRec737[1] = fRec737[0];
			fRec735[1] = fRec735[0];
			fRec734[1] = fRec734[0];
			fRec733[1] = fRec733[0];
			fRec727[1] = fRec727[0];
			fRec726[2] = fRec726[1];
			fRec726[1] = fRec726[0];
			fRec725[2] = fRec725[1];
			fRec725[1] = fRec725[0];
			fRec722[2] = fRec722[1];
			fRec722[1] = fRec722[0];
			fRec721[2] = fRec721[1];
			fRec721[1] = fRec721[0];
			fRec720[2] = fRec720[1];
			fRec720[1] = fRec720[0];
			fRec719[2] = fRec719[1];
			fRec719[1] = fRec719[0];
			fVec105[1] = fVec105[0];
			fRec705[1] = fRec705[0];
			fRec738[1] = fRec738[0];
			fRec704[1] = fRec704[0];
			fRec703[1] = fRec703[0];
			iRec740[1] = iRec740[0];
			fRec739[1] = fRec739[0];
			iRec745[1] = iRec745[0];
			fRec744[1] = fRec744[0];
			fRec743[1] = fRec743[0];
			fRec742[1] = fRec742[0];
			fRec741[1] = fRec741[0];
			fRec746[1] = fRec746[0];
			fRec747[1] = fRec747[0];
			fRec699[1] = fRec699[0];
			fRec685[1] = fRec685[0];
			fRec679[2] = fRec679[1];
			fRec679[1] = fRec679[0];
			fRec678[2] = fRec678[1];
			fRec678[1] = fRec678[0];
			fRec675[2] = fRec675[1];
			fRec675[1] = fRec675[0];
			fRec674[2] = fRec674[1];
			fRec674[1] = fRec674[0];
			fRec673[2] = fRec673[1];
			fRec673[1] = fRec673[0];
			fRec672[2] = fRec672[1];
			fRec672[1] = fRec672[0];
			fVec108[1] = fVec108[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fVec109[1] = fVec109[0];
			fRec18[1] = fRec18[0];
			fRec16[1] = fRec16[0];
			fRec15[1] = fRec15[0];
			fRec748[1] = fRec748[0];
			iRec751[1] = iRec751[0];
			fRec750[1] = fRec750[0];
			fRec749[1] = fRec749[0];
			iRec753[1] = iRec753[0];
			fVec110[1] = fVec110[0];
			iRec754[1] = iRec754[0];
			iRec755[1] = iRec755[0];
			fVec111[1] = fVec111[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			fVec112[1] = fVec112[0];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			iRec761[1] = iRec761[0];
			fVec113[1] = fVec113[0];
			fRec760[1] = fRec760[0];
			iRec766[1] = iRec766[0];
			iRec768[1] = iRec768[0];
			fRec767[1] = fRec767[0];
			fRec765[1] = fRec765[0];
			fRec764[1] = fRec764[0];
			iRec774[1] = iRec774[0];
			fRec773[1] = fRec773[0];
			fRec772[1] = fRec772[0];
			iRec775[1] = iRec775[0];
			iRec777[1] = iRec777[0];
			fRec776[1] = fRec776[0];
			fRec771[1] = fRec771[0];
			fRec770[1] = fRec770[0];
			iRec780[1] = iRec780[0];
			iRec782[1] = iRec782[0];
			fRec781[1] = fRec781[0];
			fRec779[1] = fRec779[0];
			fRec778[1] = fRec778[0];
			iRec786[1] = iRec786[0];
			fRec785[1] = fRec785[0];
			fRec784[1] = fRec784[0];
			fRec799[1] = fRec799[0];
			fRec798[1] = fRec798[0];
			fVec114[1] = fVec114[0];
			fRec797[1] = fRec797[0];
			fRec796[1] = fRec796[0];
			fRec795[1] = fRec795[0];
			iRec801[1] = iRec801[0];
			fVec115[1] = fVec115[0];
			iRec802[1] = iRec802[0];
			iRec803[1] = iRec803[0];
			fVec116[1] = fVec116[0];
			fRec794[1] = fRec794[0];
			fRec793[1] = fRec793[0];
			fRec792[1] = fRec792[0];
			fVec117[1] = fVec117[0];
			fRec791[1] = fRec791[0];
			fRec790[2] = fRec790[1];
			fRec790[1] = fRec790[0];
			iRec809[1] = iRec809[0];
			fVec118[1] = fVec118[0];
			fRec808[1] = fRec808[0];
			iRec815[1] = iRec815[0];
			iRec817[1] = iRec817[0];
			fRec816[1] = fRec816[0];
			fRec814[1] = fRec814[0];
			fRec813[1] = fRec813[0];
			fRec821[1] = fRec821[0];
			fRec822[1] = fRec822[0];
			fRec820[1] = fRec820[0];
			fRec819[1] = fRec819[0];
			fRec818[1] = fRec818[0];
			fRec812[1] = fRec812[0];
			fRec811[2] = fRec811[1];
			fRec811[1] = fRec811[0];
			fRec810[2] = fRec810[1];
			fRec810[1] = fRec810[0];
			fRec807[2] = fRec807[1];
			fRec807[1] = fRec807[0];
			fRec806[2] = fRec806[1];
			fRec806[1] = fRec806[0];
			fRec805[2] = fRec805[1];
			fRec805[1] = fRec805[0];
			fRec804[2] = fRec804[1];
			fRec804[1] = fRec804[0];
			fVec121[1] = fVec121[0];
			fRec789[1] = fRec789[0];
			fRec823[1] = fRec823[0];
			fRec788[1] = fRec788[0];
			fRec787[1] = fRec787[0];
			iRec825[1] = iRec825[0];
			fRec824[1] = fRec824[0];
			iRec830[1] = iRec830[0];
			fRec829[1] = fRec829[0];
			fRec828[1] = fRec828[0];
			fRec827[1] = fRec827[0];
			fRec826[1] = fRec826[0];
			fRec831[1] = fRec831[0];
			fRec832[1] = fRec832[0];
			fRec783[1] = fRec783[0];
			fRec769[1] = fRec769[0];
			fRec763[2] = fRec763[1];
			fRec763[1] = fRec763[0];
			fRec762[2] = fRec762[1];
			fRec762[1] = fRec762[0];
			fRec759[2] = fRec759[1];
			fRec759[1] = fRec759[0];
			fRec758[2] = fRec758[1];
			fRec758[1] = fRec758[0];
			fRec757[2] = fRec757[1];
			fRec757[1] = fRec757[0];
			fRec756[2] = fRec756[1];
			fRec756[1] = fRec756[0];
			fRec833[1] = fRec833[0];
			fRec835[1] = fRec835[0];
			fRec834[2] = fRec834[1];
			fRec834[1] = fRec834[0];
			fRec836[1] = fRec836[0];
			fRec846[1] = fRec846[0];
			fRec845[1] = fRec845[0];
			fVec124[1] = fVec124[0];
			fRec844[1] = fRec844[0];
			fRec843[1] = fRec843[0];
			fRec842[1] = fRec842[0];
			iRec848[1] = iRec848[0];
			fVec125[1] = fVec125[0];
			iRec849[1] = iRec849[0];
			iRec850[1] = iRec850[0];
			fVec126[1] = fVec126[0];
			fRec841[1] = fRec841[0];
			fRec840[1] = fRec840[0];
			fRec839[1] = fRec839[0];
			fVec127[1] = fVec127[0];
			fRec838[1] = fRec838[0];
			fRec837[2] = fRec837[1];
			fRec837[1] = fRec837[0];
			iRec856[1] = iRec856[0];
			fVec128[1] = fVec128[0];
			fRec855[1] = fRec855[0];
			iRec862[1] = iRec862[0];
			iRec864[1] = iRec864[0];
			fRec863[1] = fRec863[0];
			fRec861[1] = fRec861[0];
			fRec860[1] = fRec860[0];
			fRec868[1] = fRec868[0];
			fRec869[1] = fRec869[0];
			fRec867[1] = fRec867[0];
			fRec866[1] = fRec866[0];
			fRec865[1] = fRec865[0];
			fRec859[1] = fRec859[0];
			fRec858[2] = fRec858[1];
			fRec858[1] = fRec858[0];
			fRec857[2] = fRec857[1];
			fRec857[1] = fRec857[0];
			fRec854[2] = fRec854[1];
			fRec854[1] = fRec854[0];
			fRec853[2] = fRec853[1];
			fRec853[1] = fRec853[0];
			fRec852[2] = fRec852[1];
			fRec852[1] = fRec852[0];
			fRec851[2] = fRec851[1];
			fRec851[1] = fRec851[0];
			fRec870[1] = fRec870[0];
			fRec871[1] = fRec871[0];
			fRec872[1] = fRec872[0];
			fRec873[1] = fRec873[0];
			fRec874[1] = fRec874[0];
			fRec875[1] = fRec875[0];
		}
	}

};

#endif
