namespace tonestack {
// generated from file '../src/faust/tonestack.dsp'

double 	fVec0[3];
FAUSTFLOAT 	fslider0;
FAUSTFLOAT 	fslider1;
double 	fConst0;
double 	fConst1;
double 	fConst2;
double 	fRec0[4];
FAUSTFLOAT 	fslider2;
double 	fConst3;
double 	fConst4;
double 	fConst5;
double 	fConst6;
double 	fConst7;
double 	fConst8;
double 	fRec4[3];
double 	fRec3[3];
double 	fRec2[3];
double 	fRec1[3];
FAUSTFLOAT 	fslider3;
double 	fRec5[4];
double 	fRec6[4];
double 	fRec7[4];
double 	fRec8[4];
double 	fRec9[4];
double 	fRec10[4];
double 	fRec11[4];
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	for (int i=0; i<3; i++) fVec0[i] = 0;
	fConst0 = (2 * double(fSamplingFreq));
	fConst1 = faustpower<2>(fConst0);
	fConst2 = (3 * fConst0);
	for (int i=0; i<4; i++) fRec0[i] = 0;
	fConst3 = (15079.644737231007 / fSamplingFreq);
	fConst4 = cos(fConst3);
	fConst5 = (1.4142135623730951 * sin(fConst3));
	fConst6 = (3769.9111843077517 / fSamplingFreq);
	fConst7 = cos(fConst6);
	fConst8 = (1.4142135623730951 * sin(fConst6));
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<4; i++) fRec5[i] = 0;
	for (int i=0; i<4; i++) fRec6[i] = 0;
	for (int i=0; i<4; i++) fRec7[i] = 0;
	for (int i=0; i<4; i++) fRec8[i] = 0;
	for (int i=0; i<4; i++) fRec9[i] = 0;
	for (int i=0; i<4; i++) fRec10[i] = 0;
	for (int i=0; i<4; i++) fRec11[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = fslider0;
	double 	fSlow1 = (2.5312500000000006e-07 * fSlow0);
	double 	fSlow2 = exp((3.4 * (fslider1 - 1)));
	double 	fSlow3 = (7.4525e-07 + ((2.4210000000000004e-05 * fSlow2) + (fSlow0 * (((1.0125e-05 * fSlow2) - 2.75625e-07) - fSlow1))));
	double 	fSlow4 = ((7.650000000000002e-10 * fSlow2) - (1.9125000000000002e-11 * fSlow0));
	double 	fSlow5 = (1.4000000000000001e-09 * fSlow2);
	double 	fSlow6 = (3.500000000000001e-11 + (fSlow5 + (fSlow0 * (fSlow4 - 1.5875000000000007e-11))));
	double 	fSlow7 = (fConst0 * fSlow6);
	double 	fSlow8 = (0.0005 * fSlow0);
	double 	fSlow9 = (0.02025 * fSlow2);
	double 	fSlow10 = (fConst0 * (0.0028087500000000005 + (fSlow9 + fSlow8)));
	double 	fSlow11 = ((fSlow10 + (fConst1 * (fSlow7 - fSlow3))) - 1);
	double 	fSlow12 = (fConst2 * fSlow6);
	double 	fSlow13 = ((fConst1 * (fSlow3 + fSlow12)) - (3 + fSlow10));
	double 	fSlow14 = ((fSlow10 + (fConst1 * (fSlow3 - fSlow12))) - 3);
	double 	fSlow15 = (1.0 / (0 - (1 + (fSlow10 + (fConst1 * (fSlow3 + fSlow7))))));
	double 	fSlow16 = fslider2;
	double 	fSlow17 = ((fSlow0 * (1.9125000000000002e-11 + fSlow4)) + (fSlow16 * (fSlow5 + (3.500000000000001e-11 - (3.500000000000001e-11 * fSlow0)))));
	double 	fSlow18 = (fConst2 * fSlow17);
	double 	fSlow19 = (4.525e-08 + (((1.4e-07 * fSlow16) + (fSlow0 * (2.8437500000000003e-07 - fSlow1))) + (fSlow2 * (1.8100000000000002e-06 + (1.0125e-05 * fSlow0)))));
	double 	fSlow20 = (6.25e-05 * fSlow16);
	double 	fSlow21 = (0.00050625 + (fSlow9 + (fSlow8 + fSlow20)));
	double 	fSlow22 = (fConst0 * fSlow21);
	double 	fSlow23 = (fSlow22 + (fConst1 * (fSlow19 - fSlow18)));
	double 	fSlow24 = (fConst0 * fSlow17);
	double 	fSlow25 = (fSlow22 + (fConst1 * (fSlow24 - fSlow19)));
	double 	fSlow26 = (fConst0 * (0 - fSlow21));
	double 	fSlow27 = (fSlow26 + (fConst1 * (fSlow19 + fSlow18)));
	double 	fSlow28 = (fSlow26 - (fConst1 * (fSlow19 + fSlow24)));
	double 	fSlow29 = (10 * fSlow0);
	double 	fSlow30 = (5 + fSlow29);
	double 	fSlow31 = pow(10,(0.025 * ((20 * fSlow16) - fSlow30)));
	double 	fSlow32 = (1 + fSlow31);
	double 	fSlow33 = (fConst4 * fSlow32);
	double 	fSlow34 = (2 * (0 - ((1 + fSlow33) - fSlow31)));
	double 	fSlow35 = (fConst4 * (fSlow31 - 1));
	double 	fSlow36 = (fConst5 * sqrt(fSlow31));
	double 	fSlow37 = (fSlow32 - (fSlow36 + fSlow35));
	double 	fSlow38 = pow(10,(0.025 * (fSlow29 - 5)));
	double 	fSlow39 = (1 + fSlow38);
	double 	fSlow40 = (fConst7 * fSlow39);
	double 	fSlow41 = (2 * (0 - ((1 + fSlow40) - fSlow38)));
	double 	fSlow42 = (fSlow38 - 1);
	double 	fSlow43 = (fConst7 * fSlow42);
	double 	fSlow44 = sqrt(fSlow38);
	double 	fSlow45 = (fConst8 * fSlow44);
	double 	fSlow46 = (fSlow39 - (fSlow45 + fSlow43));
	double 	fSlow47 = (fConst4 * fSlow39);
	double 	fSlow48 = (0 - (2 * ((fSlow38 + fSlow47) - 1)));
	double 	fSlow49 = (fConst5 * fSlow44);
	double 	fSlow50 = (fConst4 * fSlow42);
	double 	fSlow51 = ((1 + (fSlow38 + fSlow50)) - fSlow49);
	double 	fSlow52 = pow(10,(0.025 * ((20 * fSlow2) - fSlow30)));
	double 	fSlow53 = (1 + fSlow52);
	double 	fSlow54 = (fConst7 * fSlow53);
	double 	fSlow55 = (0 - (2 * ((fSlow52 + fSlow54) - 1)));
	double 	fSlow56 = (fConst8 * sqrt(fSlow52));
	double 	fSlow57 = (fConst7 * (fSlow52 - 1));
	double 	fSlow58 = ((1 + (fSlow52 + fSlow57)) - fSlow56);
	double 	fSlow59 = (fSlow53 - (fSlow56 + fSlow57));
	double 	fSlow60 = (2 * (0 - ((1 + fSlow54) - fSlow52)));
	double 	fSlow61 = (fSlow52 + fSlow56);
	double 	fSlow62 = ((1 + fSlow61) - fSlow57);
	double 	fSlow63 = (1.0 / (1 + (fSlow57 + fSlow61)));
	double 	fSlow64 = (fSlow39 - (fSlow49 + fSlow50));
	double 	fSlow65 = (2 * (0 - ((1 + fSlow47) - fSlow38)));
	double 	fSlow66 = (fSlow38 + fSlow49);
	double 	fSlow67 = ((1 + fSlow66) - fSlow50);
	double 	fSlow68 = (1.0 / (1 + (fSlow50 + fSlow66)));
	double 	fSlow69 = (fSlow38 * ((1 + (fSlow38 + fSlow43)) - fSlow45));
	double 	fSlow70 = (fSlow38 + fSlow45);
	double 	fSlow71 = (fSlow38 * (1 + (fSlow43 + fSlow70)));
	double 	fSlow72 = (((fSlow38 + fSlow40) - 1) * (0 - (2 * fSlow38)));
	double 	fSlow73 = (1.0 / ((1 + fSlow70) - fSlow43));
	double 	fSlow74 = (fSlow31 * ((1 + (fSlow31 + fSlow35)) - fSlow36));
	double 	fSlow75 = (fSlow31 + fSlow36);
	double 	fSlow76 = (fSlow31 * (1 + (fSlow35 + fSlow75)));
	double 	fSlow77 = (((fSlow31 + fSlow33) - 1) * (0 - (2 * fSlow31)));
	double 	fSlow78 = (1.0 / ((1 + fSlow75) - fSlow35));
	double 	fSlow79 = fslider3;
	int 	iSlow80 = int(min(2, max(0, fSlow79)));
	double 	fSlow81 = (4.7056400000000006e-07 * fSlow0);
	double 	fSlow82 = (5.188640000000001e-06 + ((0.00011869100000000002 * fSlow2) + (fSlow0 * (((1.1764100000000001e-05 * fSlow2) - 4.215336e-06) - fSlow81))));
	double 	fSlow83 = (4.935e-10 * fSlow2);
	double 	fSlow84 = (fSlow83 - (1.974e-11 * fSlow0));
	double 	fSlow85 = (3.525e-09 * fSlow2);
	double 	fSlow86 = (1.41e-10 + (fSlow85 + (fSlow0 * (fSlow84 - 1.2126e-10))));
	double 	fSlow87 = (fConst0 * fSlow86);
	double 	fSlow88 = (0.00047000000000000004 * fSlow0);
	double 	fSlow89 = (0.02503 * fSlow2);
	double 	fSlow90 = (fConst0 * (0.0157312 + (fSlow89 + fSlow88)));
	double 	fSlow91 = ((fSlow90 + (fConst1 * (fSlow87 - fSlow82))) - 1);
	double 	fSlow92 = (fConst2 * fSlow86);
	double 	fSlow93 = ((fConst1 * (fSlow82 + fSlow92)) - (3 + fSlow90));
	double 	fSlow94 = ((fSlow90 + (fConst1 * (fSlow82 - fSlow92))) - 3);
	double 	fSlow95 = (0 - (1 + (fSlow90 + (fConst1 * (fSlow82 + fSlow87)))));
	double 	fSlow96 = (1.0 / fSlow95);
	double 	fSlow97 = (1.41e-10 - (1.41e-10 * fSlow0));
	double 	fSlow98 = ((fSlow0 * (1.974e-11 + fSlow84)) + (fSlow16 * (fSlow85 + fSlow97)));
	double 	fSlow99 = (fConst2 * fSlow98);
	double 	fSlow100 = (4.764000000000001e-08 + (((4.410000000000001e-07 * fSlow16) + (fSlow0 * (4.846640000000001e-07 - fSlow81))) + (fSlow2 * (1.1910000000000001e-06 + (1.1764100000000001e-05 * fSlow0)))));
	double 	fSlow101 = (0.0010012 + (fSlow89 + (fSlow88 + (3e-05 * fSlow16))));
	double 	fSlow102 = (fConst0 * fSlow101);
	double 	fSlow103 = (fSlow102 + (fConst1 * (fSlow100 - fSlow99)));
	double 	fSlow104 = (fConst0 * fSlow98);
	double 	fSlow105 = (fSlow102 + (fConst1 * (fSlow104 - fSlow100)));
	double 	fSlow106 = (fConst0 * (0 - fSlow101));
	double 	fSlow107 = (fSlow106 + (fConst1 * (fSlow100 + fSlow99)));
	double 	fSlow108 = (fSlow106 - (fConst1 * (fSlow100 + fSlow104)));
	double 	fSlow109 = (1.5 / fSlow95);
	int 	iSlow110 = int(min(2, max(0, (fSlow79 - 1))));
	double 	fSlow111 = (1.0855872000000003e-07 * fSlow0);
	double 	fSlow112 = (3.222390000000001e-06 + ((0.00011998125000000002 * fSlow2) + (fSlow0 * (((5.6541000000000015e-06 * fSlow2) - 2.1333412800000006e-06) - fSlow111))));
	double 	fSlow113 = (fSlow83 - (9.4752e-12 * fSlow0));
	double 	fSlow114 = (7.343750000000001e-09 * fSlow2);
	double 	fSlow115 = (1.41e-10 + (fSlow114 + (fSlow0 * (fSlow113 - 1.315248e-10))));
	double 	fSlow116 = (fConst0 * fSlow115);
	double 	fSlow117 = (0.0002256 * fSlow0);
	double 	fSlow118 = (0.0250625 * fSlow2);
	double 	fSlow119 = (fConst0 * (0.015243699999999999 + (fSlow118 + fSlow117)));
	double 	fSlow120 = ((fSlow119 + (fConst1 * (fSlow116 - fSlow112))) - 1);
	double 	fSlow121 = (fConst2 * fSlow115);
	double 	fSlow122 = ((fConst1 * (fSlow112 + fSlow121)) - (3 + fSlow119));
	double 	fSlow123 = ((fSlow119 + (fConst1 * (fSlow112 - fSlow121))) - 3);
	double 	fSlow124 = (0 - (1 + (fSlow119 + (fConst1 * (fSlow112 + fSlow116)))));
	double 	fSlow125 = (1.0 / fSlow124);
	double 	fSlow126 = ((fSlow0 * (9.4752e-12 + fSlow113)) + (fSlow16 * (fSlow97 + fSlow114)));
	double 	fSlow127 = (fConst2 * fSlow126);
	double 	fSlow128 = (4.764000000000001e-08 + (((9.187500000000001e-07 * fSlow16) + (fSlow0 * (1.2265872000000003e-07 - fSlow111))) + (fSlow2 * (2.48125e-06 + (5.6541000000000015e-06 * fSlow0)))));
	double 	fSlow129 = (0.00048120000000000004 + (fSlow118 + (fSlow20 + fSlow117)));
	double 	fSlow130 = (fConst0 * fSlow129);
	double 	fSlow131 = (fSlow130 + (fConst1 * (fSlow128 - fSlow127)));
	double 	fSlow132 = (fConst0 * fSlow126);
	double 	fSlow133 = (fSlow130 + (fConst1 * (fSlow132 - fSlow128)));
	double 	fSlow134 = (fConst0 * (0 - fSlow129));
	double 	fSlow135 = (fSlow134 + (fConst1 * (fSlow128 + fSlow127)));
	double 	fSlow136 = (fSlow134 - (fConst1 * (fSlow128 + fSlow132)));
	double 	fSlow137 = (1.5 / fSlow124);
	int 	iSlow138 = int(min(2, max(0, (fSlow79 - 2))));
	double 	fSlow139 = (2.3926056000000006e-07 * fSlow0);
	double 	fSlow140 = (5.665800800000001e-07 + ((1.892924e-05 * fSlow2) + (fSlow0 * (((1.0875480000000001e-05 * fSlow2) - 6.207784000000001e-08) - fSlow139))));
	double 	fSlow141 = ((1.2661536800000005e-09 * fSlow2) - (2.7855380960000008e-11 * fSlow0));
	double 	fSlow142 = (1.6515048000000004e-09 * fSlow2);
	double 	fSlow143 = (3.6333105600000014e-11 + (fSlow142 + (fSlow0 * (fSlow141 - 8.477724640000006e-12))));
	double 	fSlow144 = (fConst0 * fSlow143);
	double 	fSlow145 = (0.00048400000000000006 * fSlow0);
	double 	fSlow146 = (0.022470000000000004 * fSlow2);
	double 	fSlow147 = (fConst0 * (0.0020497400000000004 + (fSlow146 + fSlow145)));
	double 	fSlow148 = ((fSlow147 + (fConst1 * (fSlow144 - fSlow140))) - 1);
	double 	fSlow149 = (fConst2 * fSlow143);
	double 	fSlow150 = ((fConst1 * (fSlow140 + fSlow149)) - (3 + fSlow147));
	double 	fSlow151 = ((fSlow147 + (fConst1 * (fSlow140 - fSlow149))) - 3);
	double 	fSlow152 = (1.0 / (0 - (1 + (fSlow147 + (fConst1 * (fSlow140 + fSlow144))))));
	double 	fSlow153 = ((fSlow0 * (2.7855380960000008e-11 + fSlow141)) + (fSlow16 * (fSlow142 + (3.6333105600000014e-11 - (3.6333105600000014e-11 * fSlow0)))));
	double 	fSlow154 = (fConst2 * fSlow153);
	double 	fSlow155 = (6.505928000000001e-08 + (((1.5013680000000003e-07 * fSlow16) + (fSlow0 * (2.893061600000001e-07 - fSlow139))) + (fSlow2 * (2.95724e-06 + (1.0875480000000001e-05 * fSlow0)))));
	double 	fSlow156 = (0.00049434 + (fSlow146 + (fSlow145 + (0.0001034 * fSlow16))));
	double 	fSlow157 = (fConst0 * fSlow156);
	double 	fSlow158 = (fSlow157 + (fConst1 * (fSlow155 - fSlow154)));
	double 	fSlow159 = (fConst0 * fSlow153);
	double 	fSlow160 = (fSlow157 + (fConst1 * (fSlow159 - fSlow155)));
	double 	fSlow161 = (fConst0 * (0 - fSlow156));
	double 	fSlow162 = (fSlow161 + (fConst1 * (fSlow155 + fSlow154)));
	double 	fSlow163 = (fSlow161 - (fConst1 * (fSlow155 + fSlow159)));
	int 	iSlow164 = int(min(2, max(0, (fSlow79 - 3))));
	double 	fSlow165 = (3.0937500000000006e-07 * fSlow0);
	double 	fSlow166 = (1.2375000000000003e-05 * fSlow2);
	double 	fSlow167 = (1.08515e-06 + ((3.108600000000001e-05 * fSlow2) + (fSlow0 * ((fSlow166 - 2.99475e-07) - fSlow165))));
	double 	fSlow168 = ((1.8513000000000002e-09 * fSlow2) - (4.628250000000001e-11 * fSlow0));
	double 	fSlow169 = (3.3880000000000003e-09 * fSlow2);
	double 	fSlow170 = (8.470000000000002e-11 + (fSlow169 + (fSlow0 * (fSlow168 - 3.8417500000000006e-11))));
	double 	fSlow171 = (fConst0 * fSlow170);
	double 	fSlow172 = (0.00055 * fSlow0);
	double 	fSlow173 = (0.022500000000000003 * fSlow2);
	double 	fSlow174 = (fSlow173 + fSlow172);
	double 	fSlow175 = (fConst0 * (0.0031515000000000002 + fSlow174));
	double 	fSlow176 = ((fSlow175 + (fConst1 * (fSlow171 - fSlow167))) - 1);
	double 	fSlow177 = (fConst2 * fSlow170);
	double 	fSlow178 = ((fConst1 * (fSlow167 + fSlow177)) - (3 + fSlow175));
	double 	fSlow179 = ((fSlow175 + (fConst1 * (fSlow167 - fSlow177))) - 3);
	double 	fSlow180 = (1.0 / (0 - (1 + (fSlow175 + (fConst1 * (fSlow167 + fSlow171))))));
	double 	fSlow181 = ((fSlow0 * (4.628250000000001e-11 + fSlow168)) + (fSlow16 * (fSlow169 + (8.470000000000002e-11 - (8.470000000000002e-11 * fSlow0)))));
	double 	fSlow182 = (fConst2 * fSlow181);
	double 	fSlow183 = (1.2375000000000003e-05 * fSlow0);
	double 	fSlow184 = (fSlow0 * (3.781250000000001e-07 - fSlow165));
	double 	fSlow185 = (9.955000000000001e-08 + (((3.08e-07 * fSlow16) + fSlow184) + (fSlow2 * (3.982e-06 + fSlow183))));
	double 	fSlow186 = (0.0005625000000000001 + (fSlow173 + (fSlow172 + (0.000125 * fSlow16))));
	double 	fSlow187 = (fConst0 * fSlow186);
	double 	fSlow188 = (fSlow187 + (fConst1 * (fSlow185 - fSlow182)));
	double 	fSlow189 = (fConst0 * fSlow181);
	double 	fSlow190 = (fSlow187 + (fConst1 * (fSlow189 - fSlow185)));
	double 	fSlow191 = (fConst0 * (0 - fSlow186));
	double 	fSlow192 = (fSlow191 + (fConst1 * (fSlow185 + fSlow182)));
	double 	fSlow193 = (fSlow191 - (fConst1 * (fSlow185 + fSlow189)));
	int 	iSlow194 = int(min(2, max(0, (fSlow79 - 4))));
	double 	fSlow195 = (6.677000000000001e-07 + ((1.9448000000000004e-05 * fSlow2) + (fSlow0 * ((fSlow166 - 2.1175000000000003e-08) - fSlow165))));
	double 	fSlow196 = ((1.7121500000000001e-09 * fSlow2) - (4.2803750000000003e-11 * fSlow0));
	double 	fSlow197 = (1.9965000000000003e-09 * fSlow2);
	double 	fSlow198 = (4.991250000000001e-11 + (fSlow197 + (fSlow0 * (fSlow196 - 7.108750000000004e-12))));
	double 	fSlow199 = (fConst0 * fSlow198);
	double 	fSlow200 = (fConst0 * (0.0021395000000000003 + fSlow174));
	double 	fSlow201 = ((fSlow200 + (fConst1 * (fSlow199 - fSlow195))) - 1);
	double 	fSlow202 = (fConst2 * fSlow198);
	double 	fSlow203 = ((fConst1 * (fSlow195 + fSlow202)) - (3 + fSlow200));
	double 	fSlow204 = ((fSlow200 + (fConst1 * (fSlow195 - fSlow202))) - 3);
	double 	fSlow205 = (1.0 / (0 - (1 + (fSlow200 + (fConst1 * (fSlow195 + fSlow199))))));
	double 	fSlow206 = ((fSlow0 * (4.2803750000000003e-11 + fSlow196)) + (fSlow16 * (fSlow197 + (4.991250000000001e-11 - (4.991250000000001e-11 * fSlow0)))));
	double 	fSlow207 = (fConst2 * fSlow206);
	double 	fSlow208 = (8.690000000000002e-08 + ((fSlow184 + (1.815e-07 * fSlow16)) + (fSlow2 * (3.4760000000000007e-06 + fSlow183))));
	double 	fSlow209 = (fSlow187 + (fConst1 * (fSlow208 - fSlow207)));
	double 	fSlow210 = (fConst0 * fSlow206);
	double 	fSlow211 = (fSlow187 + (fConst1 * (fSlow210 - fSlow208)));
	double 	fSlow212 = (fSlow191 + (fConst1 * (fSlow208 + fSlow207)));
	double 	fSlow213 = (fSlow191 - (fConst1 * (fSlow208 + fSlow210)));
	int 	iSlow214 = int(min(2, max(0, (fSlow79 - 5))));
	double 	fSlow215 = (1.38796875e-06 * fSlow0);
	double 	fSlow216 = (3.5279375000000002e-06 + ((3.1989375e-05 * fSlow2) + (fSlow0 * (((1.38796875e-05 * fSlow2) - 1.6311937500000001e-06) - fSlow215))));
	double 	fSlow217 = ((1.0561781250000004e-09 * fSlow2) - (1.0561781250000003e-10 * fSlow0));
	double 	fSlow218 = (1.9328750000000005e-09 * fSlow2);
	double 	fSlow219 = (1.9328750000000007e-10 + (fSlow218 + (fSlow0 * (fSlow217 - 8.766968750000004e-11))));
	double 	fSlow220 = (fConst0 * fSlow219);
	double 	fSlow221 = (0.001175 * fSlow0);
	double 	fSlow222 = (0.011812500000000002 * fSlow2);
	double 	fSlow223 = (fConst0 * (0.0065077500000000005 + (fSlow222 + fSlow221)));
	double 	fSlow224 = ((fSlow223 + (fConst1 * (fSlow220 - fSlow216))) - 1);
	double 	fSlow225 = (fConst2 * fSlow219);
	double 	fSlow226 = ((fConst1 * (fSlow216 + fSlow225)) - (3 + fSlow223));
	double 	fSlow227 = ((fSlow223 + (fConst1 * (fSlow216 - fSlow225))) - 3);
	double 	fSlow228 = (1.0 / (0 - (1 + (fSlow223 + (fConst1 * (fSlow216 + fSlow220))))));
	double 	fSlow229 = ((fSlow0 * (1.0561781250000003e-10 + fSlow217)) + (fSlow16 * (fSlow218 + (1.9328750000000007e-10 - (1.9328750000000007e-10 * fSlow0)))));
	double 	fSlow230 = (fConst2 * fSlow229);
	double 	fSlow231 = (1.0633750000000002e-07 + (((3.2900000000000005e-07 * fSlow16) + (fSlow0 * (1.4614062500000001e-06 - fSlow215))) + (fSlow2 * (1.0633750000000002e-06 + (1.38796875e-05 * fSlow0)))));
	double 	fSlow232 = (0.00118125 + (fSlow222 + (fSlow20 + fSlow221)));
	double 	fSlow233 = (fConst0 * fSlow232);
	double 	fSlow234 = (fSlow233 + (fConst1 * (fSlow231 - fSlow230)));
	double 	fSlow235 = (fConst0 * fSlow229);
	double 	fSlow236 = (fSlow233 + (fConst1 * (fSlow235 - fSlow231)));
	double 	fSlow237 = (fConst0 * (0 - fSlow232));
	double 	fSlow238 = (fSlow237 + (fConst1 * (fSlow231 + fSlow230)));
	double 	fSlow239 = (fSlow237 - (fConst1 * (fSlow231 + fSlow235)));
	int 	iSlow240 = int(min(2, max(0, (fSlow79 - 6))));
	double 	fSlow241 = (4.851e-08 * fSlow0);
	double 	fSlow242 = (7.172000000000001e-07 + ((4.972000000000001e-05 * fSlow2) + (fSlow0 * (((4.8510000000000015e-06 * fSlow2) - 4.2449000000000006e-07) - fSlow241))));
	double 	fSlow243 = ((2.6620000000000007e-10 * fSlow2) - (2.662e-12 * fSlow0));
	double 	fSlow244 = (2.4200000000000003e-09 * fSlow2);
	double 	fSlow245 = (2.4200000000000004e-11 + (fSlow244 + (fSlow0 * (fSlow243 - 2.1538000000000003e-11))));
	double 	fSlow246 = (fConst0 * fSlow245);
	double 	fSlow247 = (0.00022 * fSlow0);
	double 	fSlow248 = (0.022050000000000004 * fSlow2);
	double 	fSlow249 = (fConst0 * (0.0046705 + (fSlow248 + fSlow247)));
	double 	fSlow250 = ((fSlow249 + (fConst1 * (fSlow246 - fSlow242))) - 1);
	double 	fSlow251 = (fConst2 * fSlow245);
	double 	fSlow252 = ((fConst1 * (fSlow242 + fSlow251)) - (3 + fSlow249));
	double 	fSlow253 = ((fSlow249 + (fConst1 * (fSlow242 - fSlow251))) - 3);
	double 	fSlow254 = (1.0 / (0 - (1 + (fSlow249 + (fConst1 * (fSlow242 + fSlow246))))));
	double 	fSlow255 = ((fSlow0 * (2.662e-12 + fSlow243)) + (fSlow16 * (fSlow244 + (2.4200000000000004e-11 - (2.4200000000000004e-11 * fSlow0)))));
	double 	fSlow256 = (fConst2 * fSlow255);
	double 	fSlow257 = (1.32e-08 + (((2.2000000000000004e-07 * fSlow16) + (fSlow0 * (5.951000000000001e-08 - fSlow241))) + (fSlow2 * (1.32e-06 + (4.8510000000000015e-06 * fSlow0)))));
	double 	fSlow258 = (0.00022050000000000002 + (fSlow248 + (fSlow247 + (5e-05 * fSlow16))));
	double 	fSlow259 = (fConst0 * fSlow258);
	double 	fSlow260 = (fSlow259 + (fConst1 * (fSlow257 - fSlow256)));
	double 	fSlow261 = (fConst0 * fSlow255);
	double 	fSlow262 = (fSlow259 + (fConst1 * (fSlow261 - fSlow257)));
	double 	fSlow263 = (fConst0 * (0 - fSlow258));
	double 	fSlow264 = (fSlow263 + (fConst1 * (fSlow257 + fSlow256)));
	double 	fSlow265 = (fSlow263 - (fConst1 * (fSlow257 + fSlow261)));
	int 	iSlow266 = int(min(2, max(0, (fSlow79 - 7))));
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		fVec0[0] = fTemp0;
		fRec0[0] = (fVec0[0] - (fSlow15 * (((fSlow14 * fRec0[2]) + (fSlow13 * fRec0[1])) + (fSlow11 * fRec0[3]))));
		fRec4[0] = (fSlow63 * ((fSlow52 * (((fSlow62 * fVec0[0]) + (fSlow60 * fVec0[1])) + (fSlow59 * fVec0[2]))) - ((fSlow58 * fRec4[2]) + (fSlow55 * fRec4[1]))));
		fRec3[0] = (fSlow68 * ((fSlow38 * (((fSlow67 * fRec4[0]) + (fSlow65 * fRec4[1])) + (fSlow64 * fRec4[2]))) - ((fSlow51 * fRec3[2]) + (fSlow48 * fRec3[1]))));
		fRec2[0] = (fSlow73 * ((((fSlow72 * fRec3[1]) + (fSlow71 * fRec3[0])) + (fSlow69 * fRec3[2])) + (0 - ((fSlow46 * fRec2[2]) + (fSlow41 * fRec2[1])))));
		fRec1[0] = (fSlow78 * ((((fSlow77 * fRec2[1]) + (fSlow76 * fRec2[0])) + (fSlow74 * fRec2[2])) + (0 - ((fSlow37 * fRec1[2]) + (fSlow34 * fRec1[1])))));
		double fTemp1 = ((iSlow80==0)? fRec1[0] : ((iSlow80==1)?(fSlow15 * ((fSlow28 * fRec0[0]) + ((fSlow27 * fRec0[1]) + ((fSlow25 * fRec0[3]) + (fSlow23 * fRec0[2]))))):fVec0[0]) );
		fRec5[0] = (fTemp1 - (fSlow96 * (((fSlow94 * fRec5[2]) + (fSlow93 * fRec5[1])) + (fSlow91 * fRec5[3]))));
		double fTemp2 = ((iSlow110==0)? fTemp1 : ((iSlow110==1)?(fSlow109 * ((fSlow108 * fRec5[0]) + ((fSlow107 * fRec5[1]) + ((fSlow105 * fRec5[3]) + (fSlow103 * fRec5[2]))))):fTemp1) );
		fRec6[0] = (fTemp2 - (fSlow125 * (((fSlow123 * fRec6[2]) + (fSlow122 * fRec6[1])) + (fSlow120 * fRec6[3]))));
		double fTemp3 = ((iSlow138==0)? fTemp2 : ((iSlow138==1)?(fSlow137 * ((fSlow136 * fRec6[0]) + ((fSlow135 * fRec6[1]) + ((fSlow133 * fRec6[3]) + (fSlow131 * fRec6[2]))))):fTemp2) );
		fRec7[0] = (fTemp3 - (fSlow152 * (((fSlow151 * fRec7[2]) + (fSlow150 * fRec7[1])) + (fSlow148 * fRec7[3]))));
		double fTemp4 = ((iSlow164==0)? fTemp3 : ((iSlow164==1)?(fSlow152 * ((fSlow163 * fRec7[0]) + ((fSlow162 * fRec7[1]) + ((fSlow160 * fRec7[3]) + (fSlow158 * fRec7[2]))))):fTemp3) );
		fRec8[0] = (fTemp4 - (fSlow180 * (((fSlow179 * fRec8[2]) + (fSlow178 * fRec8[1])) + (fSlow176 * fRec8[3]))));
		double fTemp5 = ((iSlow194==0)? fTemp4 : ((iSlow194==1)?(fSlow180 * ((fSlow193 * fRec8[0]) + ((fSlow192 * fRec8[1]) + ((fSlow190 * fRec8[3]) + (fSlow188 * fRec8[2]))))):fTemp4) );
		fRec9[0] = (fTemp5 - (fSlow205 * (((fSlow204 * fRec9[2]) + (fSlow203 * fRec9[1])) + (fSlow201 * fRec9[3]))));
		double fTemp6 = ((iSlow214==0)? fTemp5 : ((iSlow214==1)?(fSlow205 * ((fSlow213 * fRec9[0]) + ((fSlow212 * fRec9[1]) + ((fSlow211 * fRec9[3]) + (fSlow209 * fRec9[2]))))):fTemp5) );
		fRec10[0] = (fTemp6 - (fSlow228 * (((fSlow227 * fRec10[2]) + (fSlow226 * fRec10[1])) + (fSlow224 * fRec10[3]))));
		double fTemp7 = ((iSlow240==0)? fTemp6 : ((iSlow240==1)?(fSlow228 * ((fSlow239 * fRec10[0]) + ((fSlow238 * fRec10[1]) + ((fSlow236 * fRec10[3]) + (fSlow234 * fRec10[2]))))):fTemp6) );
		fRec11[0] = (fTemp7 - (fSlow254 * (((fSlow253 * fRec11[2]) + (fSlow252 * fRec11[1])) + (fSlow250 * fRec11[3]))));
		output0[i] = (FAUSTFLOAT)((iSlow266==0)? fTemp7 : ((iSlow266==1)?(fSlow254 * ((fSlow265 * fRec11[0]) + ((fSlow264 * fRec11[1]) + ((fSlow262 * fRec11[3]) + (fSlow260 * fRec11[2]))))):fTemp7) );
		// post processing
		for (int i=3; i>0; i--) fRec11[i] = fRec11[i-1];
		for (int i=3; i>0; i--) fRec10[i] = fRec10[i-1];
		for (int i=3; i>0; i--) fRec9[i] = fRec9[i-1];
		for (int i=3; i>0; i--) fRec8[i] = fRec8[i-1];
		for (int i=3; i>0; i--) fRec7[i] = fRec7[i-1];
		for (int i=3; i>0; i--) fRec6[i] = fRec6[i-1];
		for (int i=3; i>0; i--) fRec5[i] = fRec5[i-1];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		for (int i=3; i>0; i--) fRec0[i] = fRec0[i-1];
		fVec0[2] = fVec0[1]; fVec0[1] = fVec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerVar("amp.tonestack.select","","S","",&fslider3, 1.0, 0.0, 9.0, 1.0);
	registerVar("amp.tonestack.Treble","","S","",&fslider2, 0.5, 0.0, 1.0, 0.01);
	registerVar("amp.tonestack.Bass","","S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	registerVar("amp.tonestack.Middle","","S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	registerInit("amp.tonestack", init);
}

} // end namespace tonestack
