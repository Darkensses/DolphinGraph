//---------------------------------------------------------------------------

#include <vcl.h>
#include <mmsystem.h>
#pragma hdrstop

#include "Unit0.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
int xEsc=-200, yEsc=-700;
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
    ancho = 0;
    graf.ventana((Form1->ClientWidth-ancho)/2,0,(Form1->ClientWidth-ancho),Form1->ClientHeight/2);
    graf.puerto((Form1->ClientWidth-ancho)/2,0,(Form1->ClientWidth-ancho),Form1->ClientHeight/2);
    L=(Form1->ClientWidth-ancho)/2;
    M=Form1->ClientHeight/2;

//------------------------------------------
Dol[0][0]=-133; Dol[0][1]=36; Dol[0][2]=1;
Dol[1][0]=-128; Dol[1][1]=40; Dol[1][2]=1;
Dol[2][0]=-120; Dol[2][1]=40; Dol[2][2]=1;
Dol[3][0]=-112; Dol[3][1]=36; Dol[3][2]=1;
Dol[4][0]=-108; Dol[4][1]=33; Dol[4][2]=1;
Dol[5][0]=-101; Dol[5][1]=29; Dol[5][2]=1;
Dol[6][0]=-88; Dol[6][1]=22; Dol[6][2]=1;
Dol[7][0]=-80; Dol[7][1]=16; Dol[7][2]=1;
Dol[8][0]=-74; Dol[8][1]=13; Dol[8][2]=1;
Dol[9][0]=-68; Dol[9][1]=10; Dol[9][2]=1;
Dol[10][0]=-61; Dol[10][1]=10; Dol[10][2]=1;
Dol[11][0]=-48; Dol[11][1]=12; Dol[11][2]=1;
Dol[12][0]=-41; Dol[12][1]=13; Dol[12][2]=1;
Dol[13][0]=-34; Dol[13][1]=15; Dol[13][2]=1;
Dol[14][0]=-22; Dol[14][1]=20; Dol[14][2]=1;
Dol[15][0]=-19; Dol[15][1]=22; Dol[15][2]=1;
Dol[16][0]=-14; Dol[16][1]=26; Dol[16][2]=1;
Dol[17][0]=-9; Dol[17][1]=30; Dol[17][2]=1;
Dol[18][0]=-7; Dol[18][1]=32; Dol[18][2]=1;
Dol[19][0]=-9; Dol[19][1]=36; Dol[19][2]=1;
Dol[20][0]=-16; Dol[20][1]=41; Dol[20][2]=1;
Dol[21][0]=-24; Dol[21][1]=46; Dol[21][2]=1;
Dol[22][0]=-34; Dol[22][1]=50; Dol[22][2]=1;
Dol[23][0]=-28; Dol[23][1]=56; Dol[23][2]=1;
Dol[24][0]=-19; Dol[24][1]=62; Dol[24][2]=1;
Dol[25][0]=-9; Dol[25][1]=67; Dol[25][2]=1;
Dol[26][0]=0; Dol[26][1]=70; Dol[26][2]=1;
Dol[27][0]=7; Dol[27][1]=70; Dol[27][2]=1;
Dol[28][0]=13; Dol[28][1]=70; Dol[28][2]=1;
Dol[29][0]=17; Dol[29][1]=69; Dol[29][2]=1;
Dol[30][0]=22; Dol[30][1]=67; Dol[30][2]=1;
Dol[31][0]=25; Dol[31][1]=66; Dol[31][2]=1;
Dol[32][0]=-7; Dol[32][1]=32; Dol[32][2]=1;
Dol[33][0]=25; Dol[33][1]=66; Dol[33][2]=1;
Dol[34][0]=37; Dol[34][1]=80; Dol[34][2]=1;
Dol[35][0]=40; Dol[35][1]=84; Dol[35][2]=1;
Dol[36][0]=45; Dol[36][1]=87; Dol[36][2]=1;
Dol[37][0]=54; Dol[37][1]=94; Dol[37][2]=1;
Dol[38][0]=57; Dol[38][1]=97; Dol[38][2]=1;
Dol[39][0]=63; Dol[39][1]=101; Dol[39][2]=1;
Dol[40][0]=67; Dol[40][1]=103; Dol[40][2]=1;
Dol[41][0]=77; Dol[41][1]=108; Dol[41][2]=1;
Dol[42][0]=86; Dol[42][1]=110; Dol[42][2]=1;
Dol[43][0]=99; Dol[43][1]=111; Dol[43][2]=1;
Dol[44][0]=110; Dol[44][1]=110; Dol[44][2]=1;
Dol[45][0]=116; Dol[45][1]=108; Dol[45][2]=1;
Dol[46][0]=120; Dol[46][1]=107; Dol[46][2]=1;
Dol[47][0]=126; Dol[47][1]=104; Dol[47][2]=1;
Dol[48][0]=130; Dol[48][1]=101; Dol[48][2]=1;
Dol[49][0]=133; Dol[49][1]=99; Dol[49][2]=1;
Dol[50][0]=137; Dol[50][1]=95; Dol[50][2]=1;
Dol[51][0]=142; Dol[51][1]=90; Dol[51][2]=1;
Dol[52][0]=149; Dol[52][1]=83; Dol[52][2]=1;
Dol[53][0]=156; Dol[53][1]=70; Dol[53][2]=1;
Dol[54][0]=152; Dol[54][1]=78; Dol[54][2]=1;
Dol[55][0]=158; Dol[55][1]=79; Dol[55][2]=1;
Dol[56][0]=166; Dol[56][1]=82; Dol[56][2]=1;
Dol[57][0]=174; Dol[57][1]=84; Dol[57][2]=1;
Dol[58][0]=181; Dol[58][1]=86; Dol[58][2]=1;
Dol[59][0]=188; Dol[59][1]=88; Dol[59][2]=1;
Dol[60][0]=192; Dol[60][1]=89; Dol[60][2]=1;
Dol[61][0]=197; Dol[61][1]=89; Dol[61][2]=1;
Dol[62][0]=200; Dol[62][1]=86; Dol[62][2]=1;
Dol[63][0]=200; Dol[63][1]=82; Dol[63][2]=1;
Dol[64][0]=198; Dol[64][1]=73; Dol[64][2]=1;
Dol[65][0]=195; Dol[65][1]=69; Dol[65][2]=1;
Dol[66][0]=191; Dol[66][1]=64; Dol[66][2]=1;
Dol[67][0]=185; Dol[67][1]=62; Dol[67][2]=1;
Dol[68][0]=175; Dol[68][1]=58; Dol[68][2]=1;
Dol[69][0]=168; Dol[69][1]=56; Dol[69][2]=1;
Dol[70][0]=164; Dol[70][1]=54; Dol[70][2]=1;
Dol[71][0]=159; Dol[71][1]=52; Dol[71][2]=1;
Dol[72][0]=153; Dol[72][1]=51; Dol[72][2]=1;
Dol[73][0]=145; Dol[73][1]=49; Dol[73][2]=1;
Dol[74][0]=137; Dol[74][1]=48; Dol[74][2]=1;
Dol[75][0]=131; Dol[75][1]=48; Dol[75][2]=1;
Dol[76][0]=128; Dol[76][1]=48; Dol[76][2]=1;
Dol[77][0]=127; Dol[77][1]=55; Dol[77][2]=1;
Dol[78][0]=128; Dol[78][1]=48; Dol[78][2]=1;
Dol[79][0]=128; Dol[79][1]=41; Dol[79][2]=1;
Dol[80][0]=128; Dol[80][1]=48; Dol[80][2]=1;
Dol[81][0]=131; Dol[81][1]=48; Dol[81][2]=1;
Dol[82][0]=137; Dol[82][1]=48; Dol[82][2]=1;
Dol[83][0]=145; Dol[83][1]=49; Dol[83][2]=1;
Dol[84][0]=153; Dol[84][1]=51; Dol[84][2]=1;
Dol[85][0]=159; Dol[85][1]=52; Dol[85][2]=1;
Dol[86][0]=164; Dol[86][1]=54; Dol[86][2]=1;
Dol[87][0]=168; Dol[87][1]=56; Dol[87][2]=1;
Dol[88][0]=175; Dol[88][1]=58; Dol[88][2]=1;
Dol[89][0]=185; Dol[89][1]=62; Dol[89][2]=1;
Dol[90][0]=180; Dol[90][1]=56; Dol[90][2]=1;
Dol[91][0]=176; Dol[91][1]=53; Dol[91][2]=1;
Dol[92][0]=173; Dol[92][1]=49; Dol[92][2]=1;
Dol[93][0]=168; Dol[93][1]=46; Dol[93][2]=1;
Dol[94][0]=164; Dol[94][1]=44; Dol[94][2]=1;
Dol[95][0]=159; Dol[95][1]=42; Dol[95][2]=1;
Dol[96][0]=156; Dol[96][1]=42; Dol[96][2]=1;
Dol[97][0]=153; Dol[97][1]=40; Dol[97][2]=1;
Dol[98][0]=148; Dol[98][1]=37; Dol[98][2]=1;
Dol[99][0]=139; Dol[99][1]=27; Dol[99][2]=1;
Dol[100][0]=134; Dol[100][1]=24; Dol[100][2]=1;
Dol[101][0]=131; Dol[101][1]=21; Dol[101][2]=1;
Dol[102][0]=127; Dol[102][1]=17; Dol[102][2]=1;
Dol[103][0]=121; Dol[103][1]=11; Dol[103][2]=1;
Dol[104][0]=119; Dol[104][1]=9; Dol[104][2]=1;
Dol[105][0]=93; Dol[105][1]=-15; Dol[105][2]=1;
Dol[106][0]=119; Dol[106][1]=9; Dol[106][2]=1;
Dol[107][0]=117; Dol[107][1]=-2; Dol[107][2]=1;
Dol[108][0]=116; Dol[108][1]=-9; Dol[108][2]=1;
Dol[109][0]=113; Dol[109][1]=-15; Dol[109][2]=1;
Dol[110][0]=110; Dol[110][1]=-20; Dol[110][2]=1;
Dol[111][0]=106; Dol[111][1]=-27; Dol[111][2]=1;
Dol[112][0]=106; Dol[112][1]=-31; Dol[112][2]=1;
Dol[113][0]=104; Dol[113][1]=-34; Dol[113][2]=1;
Dol[114][0]=102; Dol[114][1]=-36; Dol[114][2]=1;
Dol[115][0]=98; Dol[115][1]=-40; Dol[115][2]=1;
Dol[116][0]=96; Dol[116][1]=-43; Dol[116][2]=1;
Dol[117][0]=94; Dol[117][1]=-45; Dol[117][2]=1;
Dol[118][0]=90; Dol[118][1]=-49; Dol[118][2]=1;
Dol[119][0]=87; Dol[119][1]=-55; Dol[119][2]=1;
Dol[120][0]=84; Dol[120][1]=-57; Dol[120][2]=1;
Dol[121][0]=81; Dol[121][1]=-58; Dol[121][2]=1;
Dol[122][0]=77; Dol[122][1]=-58; Dol[122][2]=1;
Dol[123][0]=76; Dol[123][1]=-54; Dol[123][2]=1;
Dol[124][0]=76; Dol[124][1]=-47; Dol[124][2]=1;
Dol[125][0]=76; Dol[125][1]=-43; Dol[125][2]=1;
Dol[126][0]=79; Dol[126][1]=-37; Dol[126][2]=1;
Dol[127][0]=79; Dol[127][1]=-32; Dol[127][2]=1;
Dol[128][0]=81; Dol[128][1]=-28; Dol[128][2]=1;
Dol[129][0]=85; Dol[129][1]=-24; Dol[129][2]=1;
Dol[130][0]=90; Dol[130][1]=-18; Dol[130][2]=1;
Dol[131][0]=93; Dol[131][1]=-15; Dol[131][2]=1;
Dol[132][0]=93; Dol[132][1]=10; Dol[132][2]=1;
Dol[133][0]=93; Dol[133][1]=-15; Dol[133][2]=1;
Dol[134][0]=90; Dol[134][1]=-18; Dol[134][2]=1;
Dol[135][0]=85; Dol[135][1]=-24; Dol[135][2]=1;
Dol[136][0]=81; Dol[136][1]=-28; Dol[136][2]=1;
Dol[137][0]=79; Dol[137][1]=-32; Dol[137][2]=1;
Dol[138][0]=76; Dol[138][1]=-35; Dol[138][2]=1;
Dol[139][0]=73; Dol[139][1]=-38; Dol[139][2]=1;
Dol[140][0]=69; Dol[140][1]=-44; Dol[140][2]=1;
Dol[141][0]=65; Dol[141][1]=-48; Dol[141][2]=1;
Dol[142][0]=62; Dol[142][1]=-52; Dol[142][2]=1;
Dol[143][0]=59; Dol[143][1]=-55; Dol[143][2]=1;
Dol[144][0]=56; Dol[144][1]=-60; Dol[144][2]=1;
Dol[145][0]=50; Dol[145][1]=-66; Dol[145][2]=1;
Dol[146][0]=41; Dol[146][1]=-71; Dol[146][2]=1;
Dol[147][0]=33; Dol[147][1]=-73; Dol[147][2]=1;
Dol[148][0]=29; Dol[148][1]=-74; Dol[148][2]=1;
Dol[149][0]=18; Dol[149][1]=-75; Dol[149][2]=1;
Dol[150][0]=17; Dol[150][1]=-73; Dol[150][2]=1;
Dol[151][0]=20; Dol[151][1]=-69; Dol[151][2]=1;
Dol[152][0]=22; Dol[152][1]=-66; Dol[152][2]=1;
Dol[153][0]=24; Dol[153][1]=-61; Dol[153][2]=1;
Dol[154][0]=29; Dol[154][1]=-55; Dol[154][2]=1;
Dol[155][0]=29; Dol[155][1]=-51; Dol[155][2]=1;
Dol[156][0]=31; Dol[156][1]=-48; Dol[156][2]=1;
Dol[157][0]=32; Dol[157][1]=-47; Dol[157][2]=1;
Dol[158][0]=39; Dol[158][1]=-21; Dol[158][2]=1;
Dol[159][0]=40; Dol[159][1]=-11; Dol[159][2]=1;
Dol[160][0]=44; Dol[160][1]=-3; Dol[160][2]=1;
Dol[161][0]=49; Dol[161][1]=0; Dol[161][2]=1;
Dol[162][0]=44; Dol[162][1]=-3; Dol[162][2]=1;
Dol[163][0]=40; Dol[163][1]=-11; Dol[163][2]=1;
Dol[164][0]=39; Dol[164][1]=-21; Dol[164][2]=1;
Dol[165][0]=32; Dol[165][1]=-47; Dol[165][2]=1;
Dol[166][0]=27; Dol[166][1]=-48; Dol[166][2]=1;
Dol[167][0]=22; Dol[167][1]=-50; Dol[167][2]=1;
Dol[168][0]=8; Dol[168][1]=-56; Dol[168][2]=1;
Dol[169][0]=-4; Dol[169][1]=-58; Dol[169][2]=1;
Dol[170][0]=-17; Dol[170][1]=-60; Dol[170][2]=1;
Dol[171][0]=-27; Dol[171][1]=-60; Dol[171][2]=1;
Dol[172][0]=-36; Dol[172][1]=-60; Dol[172][2]=1;
Dol[173][0]=-46; Dol[173][1]=-60; Dol[173][2]=1;
Dol[174][0]=-54; Dol[174][1]=-58; Dol[174][2]=1;
Dol[175][0]=-62; Dol[175][1]=-54; Dol[175][2]=1;
Dol[176][0]=-70; Dol[176][1]=-50; Dol[176][2]=1;
Dol[177][0]=-77; Dol[177][1]=-47; Dol[177][2]=1;
Dol[178][0]=-85; Dol[178][1]=-41; Dol[178][2]=1;
Dol[179][0]=-94; Dol[179][1]=-35; Dol[179][2]=1;
Dol[180][0]=-98; Dol[180][1]=-31; Dol[180][2]=1;
Dol[181][0]=-107; Dol[181][1]=-23; Dol[181][2]=1;
Dol[182][0]=-111; Dol[182][1]=-18; Dol[182][2]=1;
Dol[183][0]=-118; Dol[183][1]=-13; Dol[183][2]=1;
Dol[184][0]=-124; Dol[184][1]=-6; Dol[184][2]=1;
Dol[185][0]=-128; Dol[185][1]=4; Dol[185][2]=1;
Dol[186][0]=-128; Dol[186][1]=8; Dol[186][2]=1;
Dol[187][0]=-130; Dol[187][1]=13; Dol[187][2]=1;
Dol[188][0]=-132; Dol[188][1]=23; Dol[188][2]=1;
Dol[189][0]=-134; Dol[189][1]=28; Dol[189][2]=1;
Dol[190][0]=-133; Dol[190][1]=36; Dol[190][2]=1;

Eye[0][0]=107; Eye[0][1]=62; Eye[0][2]=1;
Eye[1][0]=110; Eye[1][1]=62; Eye[1][2]=1;
Eye[2][0]=112; Eye[2][1]=59; Eye[2][2]=1;
Eye[3][0]=113; Eye[3][1]=55; Eye[3][2]=1;
Eye[4][0]=112; Eye[4][1]=54; Eye[4][2]=1;
Eye[5][0]=110; Eye[5][1]=53; Eye[5][2]=1;
Eye[6][0]=107; Eye[6][1]=53; Eye[6][2]=1;
Eye[7][0]=105; Eye[7][1]=55; Eye[7][2]=1;
Eye[8][0]=105; Eye[8][1]=58; Eye[8][2]=1;
Eye[9][0]=105; Eye[9][1]=60; Eye[9][2]=1;
Eye[10][0]=107; Eye[10][1]=62; Eye[10][2]=1;

Fin[0][0]=-105; Fin[0][1]=32; Fin[0][2]=1;
Fin[1][0]=-102; Fin[1][1]=36; Fin[1][2]=1;
Fin[2][0]=-100; Fin[2][1]=47; Fin[2][2]=1;
Fin[3][0]=-102; Fin[3][1]=61; Fin[3][2]=1;
Fin[4][0]=-106; Fin[4][1]=74; Fin[4][2]=1;
Fin[5][0]=-114; Fin[5][1]=91; Fin[5][2]=1;
Fin[6][0]=-117; Fin[6][1]=101; Fin[6][2]=1;
Fin[7][0]=-117; Fin[7][1]=112; Fin[7][2]=1;
Fin[8][0]=-119; Fin[8][1]=116; Fin[8][2]=1;
Fin[9][0]=-122; Fin[9][1]=112; Fin[9][2]=1;
Fin[10][0]=-126; Fin[10][1]=106; Fin[10][2]=1;
Fin[11][0]=-131; Fin[11][1]=99; Fin[11][2]=1;
Fin[12][0]=-135; Fin[12][1]=93; Fin[12][2]=1;
Fin[13][0]=-140; Fin[13][1]=87; Fin[13][2]=1;
Fin[14][0]=-145; Fin[14][1]=81; Fin[14][2]=1;
Fin[15][0]=-148; Fin[15][1]=79; Fin[15][2]=1;
Fin[16][0]=-152; Fin[16][1]=74; Fin[16][2]=1;
Fin[17][0]=-156; Fin[17][1]=68; Fin[17][2]=1;
Fin[18][0]=-157; Fin[18][1]=59; Fin[18][2]=1;
Fin[19][0]=-154; Fin[19][1]=48; Fin[19][2]=1;
Fin[20][0]=-147; Fin[20][1]=36; Fin[20][2]=1;
Fin[21][0]=-145; Fin[21][1]=31; Fin[21][2]=1;
Fin[22][0]=-149; Fin[22][1]=29; Fin[22][2]=1;
Fin[23][0]=-158; Fin[23][1]=21; Fin[23][2]=1;
Fin[24][0]=-165; Fin[24][1]=13; Fin[24][2]=1;
Fin[25][0]=-167; Fin[25][1]=11; Fin[25][2]=1;
Fin[26][0]=-170; Fin[26][1]=7; Fin[26][2]=1;
Fin[27][0]=-175; Fin[27][1]=-2; Fin[27][2]=1;
Fin[28][0]=-178; Fin[28][1]=-11; Fin[28][2]=1;
Fin[29][0]=-182; Fin[29][1]=-21; Fin[29][2]=1;
Fin[30][0]=-185; Fin[30][1]=-28; Fin[30][2]=1;
Fin[31][0]=-189; Fin[31][1]=-35; Fin[31][2]=1;
Fin[32][0]=-193; Fin[32][1]=-41; Fin[32][2]=1;
Fin[33][0]=-197; Fin[33][1]=-47; Fin[33][2]=1;
Fin[34][0]=-192; Fin[34][1]=-47; Fin[34][2]=1;
Fin[35][0]=-185; Fin[35][1]=-46; Fin[35][2]=1;
Fin[36][0]=-179; Fin[36][1]=-44; Fin[36][2]=1;
Fin[37][0]=-168; Fin[37][1]=-41; Fin[37][2]=1;
Fin[38][0]=-156; Fin[38][1]=-38; Fin[38][2]=1;
Fin[39][0]=-150; Fin[39][1]=-36; Fin[39][2]=1;
Fin[40][0]=-145; Fin[40][1]=-33; Fin[40][2]=1;
Fin[41][0]=-137; Fin[41][1]=-28; Fin[41][2]=1;
Fin[42][0]=-132; Fin[42][1]=-22; Fin[42][2]=1;
Fin[43][0]=-127; Fin[43][1]=-16; Fin[43][2]=1;
Fin[44][0]=-123; Fin[44][1]=-11; Fin[44][2]=1;
Fin[45][0]=-121; Fin[45][1]=-9; Fin[45][2]=1;
Fin[46][0]=-116; Fin[46][1]=-4; Fin[46][2]=1;
Fin[47][0]=-109; Fin[47][1]=1; Fin[47][2]=1;
Fin[48][0]=-105; Fin[48][1]=5; Fin[48][2]=1;
Fin[49][0]=-105; Fin[49][1]=11; Fin[49][2]=1;
Fin[50][0]=-106; Fin[50][1]=17; Fin[50][2]=1;
Fin[51][0]=-106; Fin[51][1]=21; Fin[51][2]=1;
Fin[52][0]=-106; Fin[52][1]=27; Fin[52][2]=1;
Fin[53][0]=-105; Fin[53][1]=32; Fin[53][2]=1;

minEsc[0] = (float)1/2;
minEsc[1] = (float)1/3;
minEsc[2] = (float)1/4;

maxEsc[0] = (float)1/5;
maxEsc[1] = (float)1/3;
maxEsc[2] = (float)1/2;
maxEsc[3] = (float)1;
maxEsc[4] = (float)2;


    //RESPALDAR VALORES DELFIN
    for(int i=0; i<191; i++)
       for(int j=0; j<3; j++)
           DolAux[i][j] = Dol[i][j];

    //RESPALDAR VALORES OJO
    for(int i=0; i<11; i++)
       for(int j=0; j<3; j++)
           EyeAux[i][j] = Eye[i][j];

    //RESPALDAR VALORES ALETA
    for(int i=0; i<54; i++)
       for(int j=0; j<3; j++)
           FinAux[i][j] = Fin[i][j];

     Matrix dol((float)191,(float)3,Dol);
     Matrix eye((float)11,(float)3,Eye);
     Matrix fin((float)54,(float)3,Fin);

     //OBJETO id PARA UTILIZAR LA MATRIZ IDENTIDAD
     Matrix id(3,3,0);
     Matrix dres(191,3,0);
     Matrix eres(11,3,0);
     Matrix fres(54,3,0);

     float scale=(float)3/4;

     dres.EscalacionEx(dol,id,scale,scale,xEsc,yEsc);
     eres.EscalacionEx(eye,id,scale,scale,xEsc,yEsc);
     fres.EscalacionEx(fin,id,scale,scale,xEsc,yEsc);

     int x,y;
     //Se mapea y dibuja la aleta Fin
     graf.mapeo(fres.GET(0,0), fres.GET(0,1), x, y, L, M);
     Canvas->MoveTo(x,y);
     for(int i=0; i<fres.numRen();i++)
      {
          graf.mapeo(fres.GET(i,0),fres.GET(i,1),x,y,L,M);
          Canvas->LineTo(x,y);
          for(int j=0;j<fres.numCol();j++)
             Fin[i][j]=fres.GET(i,j);
      }
      PaintFin(fres);

     //Se mapea y dibuja el delfin Dol
     graf.mapeo(dres.GET(0,0), dres.GET(0,1), x, y, L, M);
     Canvas->MoveTo(x,y);
     for(int i=0; i<dres.numRen();i++)
      {
          graf.mapeo(dres.GET(i,0),dres.GET(i,1),x,y,L,M);
          Canvas->LineTo(x,y);
          for(int j=0;j<dres.numCol();j++)
             Dol[i][j]=dres.GET(i,j);
      }

     int xFill,yFill;
     this->Canvas->Brush->Color = (TColor)RGB(200,200,200);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(161,0),(dres.GET(161,1)+dres.GET(33,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     this->Canvas->Brush->Color = (TColor)RGB(150,150,150);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(18,0),(dres.GET(18,1)+dres.GET(26,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(133,0),(dres.GET(133,1)+dres.GET(110,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);

      //Se mapea y dibuja el ojo Eye
     graf.mapeo(eres.GET(0,0), eres.GET(0,1), x, y, L, M);
     Canvas->MoveTo(x,y);
     for(int i=0; i<eres.numRen();i++)
      {
          graf.mapeo(eres.GET(i,0),eres.GET(i,1),x,y,L,M);
          Canvas->LineTo(x,y);
          for(int j=0;j<eres.numCol();j++)
             Eye[i][j]=eres.GET(i,j);
      }
    //------------------------------------------
}

//Metodos
void TForm1::PaintDolphin(Matrix dres)
{
     int xFill,yFill;
     this->Canvas->Brush->Color = (TColor)RGB(200,200,200);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(186,0),(dres.GET(186,1)+dres.GET(1,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(175,0),(dres.GET(178,1)+dres.GET(8,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(65,0),(dres.GET(65,1)+dres.GET(60,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     for(int i=0;i<17;i++)
     {
         graf.mapeo(dres.GET(i,0),dres.GET(i,1)-1,xFill,yFill,L,M);
         this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     }
     for(int i=31;i<60;i++)
     {
         graf.mapeo(dres.GET(i,0),dres.GET(i,1)-1,xFill,yFill,L,M);
         this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     }

     this->Canvas->Brush->Color = (TColor)RGB(150,150,150);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(18,0),(dres.GET(18,1)+dres.GET(26,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(133,0),(dres.GET(133,1)+dres.GET(110,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(21,0),(dres.GET(21,1)+dres.GET(23,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);

}

void TForm1::PaintFin(Matrix fres)
{
     int xFill,yFill;
     this->Canvas->Brush->Color = (TColor)RGB(200,200,200);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(fres.GET(46,0),(fres.GET(46,1)+fres.GET(53,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(fres.GET(35,0),(fres.GET(35,1)+fres.GET(30,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(fres.GET(10,0),(fres.GET(10,1)+fres.GET(6,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo((fres.GET(17,0)+fres.GET(14,0))/2,(fres.GET(17,1)+fres.GET(14,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(fres.GET(35,0),(fres.GET(35,1)+fres.GET(31,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(fres.GET(38,0),(fres.GET(26,1)+fres.GET(23,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
}
void TForm1::PaintDolphinV(Matrix dres)
{
     int xFill,yFill;


     this->Canvas->Brush->Color = (TColor)RGB(200,200,200);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(18,0),(dres.GET(18,1)+dres.GET(26,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(133,0),(dres.GET(133,1)+dres.GET(110,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(21,0),(dres.GET(21,1)+dres.GET(23,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
     graf.mapeo(dres.GET(186,0),(dres.GET(186,1)+dres.GET(2,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);

     this->Canvas->Brush->Color = (TColor)RGB(150,150,150);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(dres.GET(20,0),(dres.GET(20,1)+dres.GET(28,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);

}

void TForm1::PaintFinV(Matrix fres)
{
     int xFill,yFill;
     this->Canvas->Brush->Color = (TColor)RGB(200,200,200);
     this->Canvas->Brush->Style = bsSolid;
     graf.mapeo(fres.GET(38,0),(fres.GET(26,1)+fres.GET(23,1))/2,xFill,yFill,L,M);
     this->Canvas->FloodFill(xFill,yFill, clBlack, fsBorder);
}
//---------------------------------------------------------------------------

int tx=20, ty=0, movfy=5, movfx=5, cont=0, ejeY=100;
bool band1=false, band2=false, band3=false, vuelta=true;
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
     this->DoubleBuffered=true;
    Form1->Refresh();
    cont++;

    Matrix dol((float)191,(float)3,DolAux);
    Matrix eye((float)11,(float)3,EyeAux);
    Matrix fin((float)54,(float)3,FinAux);

    //OBJETO id PARA UTILIZAR LA MATRIZ IDENTIDAD
    Matrix id(3,3,0);
    Matrix dres(191,3,0);
    Matrix eres(11,3,0);
    Matrix fres(54,3,0);

    int x,y;

        if(band1)//cont==1)
        {
            randomize();
            xEsc=-100; yEsc=-200+random(350);
            Matrix dol2((float)191,(float)3,DolAux);
            Matrix eye2((float)11,(float)3,EyeAux);
            Matrix fin2((float)54,(float)3,FinAux);
            dres.Reflexion(dol2,id,2);
            eres.Reflexion(eye2,id,2);
            fres.Reflexion(fin2,id,2);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            Matrix dolr((float)191,(float)3,Dol);
            Matrix eyer((float)11,(float)3,Eye);
            Matrix finr((float)54,(float)3,Fin);
            dres.Reflexion(dolr,id,2);
            eres.Reflexion(eyer,id,2);
            fres.Reflexion(finr,id,2);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            Matrix dolRef((float)191,(float)3,Dol);
            Matrix eyeRef((float)11,(float)3,Eye);
            Matrix finRef((float)54,(float)3,Fin);
            dres.traslacion(dolRef,id,-200, -200);//(ejeY-60)*-1);
            eres.traslacion(eyeRef,id,-200,-200);//(ejeY-60)*-1);
            fres.traslacion(finRef,id,-200,-200);//(ejeY-60)*-1);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }

            Matrix dolTra((float)191,(float)3,Dol);
            Matrix eyeTra((float)11,(float)3,Eye);
            Matrix finTra((float)54,(float)3,Fin);
            randomize();
            float escala = (float)4/3;//maxEsc[random(5)];
            dres.EscalacionEx(dolTra,id,escala,escala,xEsc, yEsc);
            eres.EscalacionEx(eyeTra,id,escala,escala,xEsc, yEsc);
            fres.EscalacionEx(finTra,id,escala,escala,xEsc, yEsc);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            band1=false;
        }
        tx=20;ty=0;

        Matrix dolRef((float)191,(float)3,Dol);
        Matrix eyeRef((float)11,(float)3,Eye);
        Matrix finRef((float)54,(float)3,Fin);

        fres.Rotacion(finRef,id,finRef.GET(0,0),finRef.GET(0,1),180);
        for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        Matrix finRot((float)54,(float)3,Fin);

        dres.traslacion(dolRef,id,tx,ty);
        eres.traslacion(eyeRef,id,tx,ty);
        fres.traslacion(finRot,id,tx,ty);
        graf.mapeo(fres.GET(0,0), fres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<fres.numRen();i++)
        {
                graf.mapeo(fres.GET(i,0),fres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
        }
        PaintFin(fres);
        graf.mapeo(dres.GET(0,0), dres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<dres.numRen();i++)
        {
                graf.mapeo(dres.GET(i,0),dres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
        }
        PaintDolphin(dres);

        graf.mapeo(eres.GET(0,0), eres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<eres.numRen();i++)
        {
                graf.mapeo(eres.GET(i,0),eres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
        }

        if(dres.GET(0,0)>=700)
        {
            Timer1->Enabled=false; Timer2->Enabled=true;
            band1=false;
            cont=0;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
    this->DoubleBuffered=true;
    Form1->Refresh();
    cont++;

    Matrix dol((float)191,(float)3,DolAux);
    Matrix eye((float)11,(float)3,EyeAux);
    Matrix fin((float)54,(float)3,FinAux);

    //OBJETO id PARA UTILIZAR LA MATRIZ IDENTIDAD
    Matrix id(3,3,0);
    Matrix dres(191,3,0);
    Matrix eres(11,3,0);
    Matrix fres(54,3,0);

    int x,y;

        if(cont==1)
        {
            randomize();
            xEsc=620; yEsc=-200+random(350);
            Matrix dol2((float)191,(float)3,DolAux);
            Matrix eye2((float)11,(float)3,EyeAux);
            Matrix fin2((float)54,(float)3,FinAux);
            dres.Reflexion(dol2,id,2);
            eres.Reflexion(eye2,id,2);
            fres.Reflexion(fin2,id,2);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            Matrix dolRef((float)191,(float)3,Dol);
            Matrix eyeRef((float)11,(float)3,Eye);
            Matrix finRef((float)54,(float)3,Fin);
            dres.traslacion(dolRef,id,0,ejeY);
            eres.traslacion(eyeRef,id,0,ejeY);
            fres.traslacion(finRef,id,0,ejeY);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }

            Matrix dolTra((float)191,(float)3,Dol);
            Matrix eyeTra((float)11,(float)3,Eye);
            Matrix finTra((float)54,(float)3,Fin);
            randomize();
            float escala = minEsc[random(3)];
            dres.EscalacionEx(dolTra,id,escala,escala,xEsc, yEsc);
            eres.EscalacionEx(eyeTra,id,escala,escala,xEsc, yEsc);
            fres.EscalacionEx(finTra,id,escala,escala,xEsc, yEsc);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        }
        tx=-20;ty=0;

        Matrix dolRef((float)191,(float)3,Dol);
        Matrix eyeRef((float)11,(float)3,Eye);
        Matrix finRef((float)54,(float)3,Fin);

        fres.Rotacion(finRef,id,finRef.GET(0,0),finRef.GET(0,1),180);
        for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        Matrix finRot((float)54,(float)3,Fin);

        dres.traslacion(dolRef,id,tx,ty);
        eres.traslacion(eyeRef,id,tx,ty);
        fres.traslacion(finRot,id,tx,ty);
        graf.mapeo(fres.GET(0,0), fres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<fres.numRen();i++)
        {
                graf.mapeo(fres.GET(i,0),fres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
        }
        PaintFin(fres);
        graf.mapeo(dres.GET(0,0), dres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<dres.numRen();i++)
        {
                graf.mapeo(dres.GET(i,0),dres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
        }
        PaintDolphin(dres);

        graf.mapeo(eres.GET(0,0), eres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<eres.numRen();i++)
        {
                graf.mapeo(eres.GET(i,0),eres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
        }

        if(dres.GET(0,0)<=-250)
        {
            Timer1->Enabled=true; Timer2->Enabled=false;
            band1=true;
            cont=0;
        }

}
//---------------------------------------------------------------------------
bool isLock=false;
void __fastcall TForm1::FormKeyPress(TObject *Sender, char &Key)
{
    if(Key==VK_SPACE&&!isLock)
    {
        isLock=true;
        PlaySound ("Water.wav", NULL, SND_ASYNC + SND_LOOP);
        Timer1->Enabled=true;
    }
    if(Key=='z'&&isLock)
    {
       this->Refresh();
       cont=0;
       Timer1->Enabled=false;
       Timer2->Enabled=false;
       Timer3->Enabled=true;
    }
    if(Key=='x'&&isLock)
    {
       MediaPlayer1->FileName="Dolphin.wav";
       MediaPlayer1->Open();
       MediaPlayer1->Play();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
    this->DoubleBuffered=true;
    Form1->Refresh();
    cont++;

    Matrix dol((float)191,(float)3,DolAux);
    Matrix eye((float)11,(float)3,EyeAux);
    Matrix fin((float)54,(float)3,FinAux);

    //OBJETO id PARA UTILIZAR LA MATRIZ IDENTIDAD
    Matrix id(3,3,0);
    Matrix dres(191,3,0);
    Matrix eres(11,3,0);
    Matrix fres(54,3,0);

    int x,y;

        if(cont==1)
        {
            ty=20;randomize();
            xEsc=0;yEsc=-500;
            Matrix dol2((float)191,(float)3,DolAux);
            Matrix eye2((float)11,(float)3,EyeAux);
            Matrix fin2((float)54,(float)3,FinAux);
            //dres.Reflexion(dol2,id,4);
            //eres.Reflexion(eye2,id,4);
            //fres.Reflexion(fin2,id,4);
            dres.Rotacion(dol2,id,dol2.GET(0,0),dol2.GET(0,1),90);
            eres.Rotacion(eye2,id,dol2.GET(0,0),dol2.GET(0,1),90);
            fres.Rotacion(fin2,id,fin2.GET(0,0),fin2.GET(0,1),90);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            Matrix dolRef((float)191,(float)3,Dol);
            Matrix eyeRef((float)11,(float)3,Eye);
            Matrix finRef((float)54,(float)3,Fin);
            dres.traslacion(dolRef,id,0,0);//ejeY);
            eres.traslacion(eyeRef,id,0,0);//ejeY);
            fres.traslacion(finRef,id,0,0);//ejeY);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }

            Matrix dolTra((float)191,(float)3,Dol);
            Matrix eyeTra((float)11,(float)3,Eye);
            Matrix finTra((float)54,(float)3,Fin);
            randomize();
            float escala = (float)1/3;
            dres.EscalacionEx(dolTra,id,escala,escala,xEsc, yEsc);
            eres.EscalacionEx(eyeTra,id,escala,escala,xEsc, yEsc);
            fres.EscalacionEx(finTra,id,escala,escala,xEsc, yEsc);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        }
        //ty=20;

        Matrix dolRef((float)191,(float)3,Dol);
        Matrix eyeRef((float)11,(float)3,Eye);
        Matrix finRef((float)54,(float)3,Fin);

        fres.Rotacion(finRef,id,finRef.GET(0,0),finRef.GET(0,1),180);
        for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        Matrix finRot((float)54,(float)3,Fin);

        dres.traslacion(dolRef,id,0,ty);
        eres.traslacion(eyeRef,id,0,ty);
        fres.traslacion(finRot,id,0,ty);
        graf.mapeo(fres.GET(0,0), fres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<fres.numRen();i++)
        {
                graf.mapeo(fres.GET(i,0),fres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
        }
        PaintFinV(fres);
        graf.mapeo(dres.GET(0,0), dres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<dres.numRen();i++)
        {
                graf.mapeo(dres.GET(i,0),dres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
        }
        PaintDolphinV(dres);

        graf.mapeo(eres.GET(0,0), eres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<eres.numRen();i++)
        {
                graf.mapeo(eres.GET(i,0),eres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
        }

        if(dres.GET(0,1)>=150)
        {
            Timer3->Enabled=false;
            Timer4->Enabled=true;
            cont=0;
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
    this->DoubleBuffered=true;
    Form1->Refresh();
    cont++;

    Matrix dol((float)191,(float)3,DolAux);
    Matrix eye((float)11,(float)3,EyeAux);
    Matrix fin((float)54,(float)3,FinAux);

    //OBJETO id PARA UTILIZAR LA MATRIZ IDENTIDAD
    Matrix id(3,3,0);
    Matrix dres(191,3,0);
    Matrix eres(11,3,0);
    Matrix fres(54,3,0);

    int x,y;
    if(cont==1)
    {
            ty=-20;//cont=0;
            randomize();
            xEsc=0;yEsc=300;
            Matrix dol2((float)191,(float)3,DolAux);
            Matrix eye2((float)11,(float)3,EyeAux);
            Matrix fin2((float)54,(float)3,FinAux);
            //dres.Reflexion(dol2,id,4);
            //eres.Reflexion(eye2,id,4);
            //fres.Reflexion(fin2,id,4);
            dres.Rotacion(dol2,id,dol2.GET(0,0),dol2.GET(0,1),270);
            eres.Rotacion(eye2,id,dol2.GET(0,0),dol2.GET(0,1),270);
            fres.Rotacion(fin2,id,fin2.GET(0,0),fin2.GET(0,1),270);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
            Matrix dolRef((float)191,(float)3,Dol);
            Matrix eyeRef((float)11,(float)3,Eye);
            Matrix finRef((float)54,(float)3,Fin);
            dres.traslacion(dolRef,id,0,0);//ejeY);
            eres.traslacion(eyeRef,id,0,0);//ejeY);
            fres.traslacion(finRef,id,0,0);//ejeY);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }

            Matrix dolTra((float)191,(float)3,Dol);
            Matrix eyeTra((float)11,(float)3,Eye);
            Matrix finTra((float)54,(float)3,Fin);
            randomize();
            float escala = (float)1/3;
            dres.EscalacionEx(dolTra,id,escala,escala,xEsc, yEsc);
            eres.EscalacionEx(eyeTra,id,escala,escala,xEsc, yEsc);
            fres.EscalacionEx(finTra,id,escala,escala,xEsc, yEsc);
            for(int i=0; i<dres.numRen();i++)
            {
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
            }
            for(int i=0; i<eres.numRen();i++)
            {
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
            }
            for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
    }
     Matrix dolRef((float)191,(float)3,Dol);
        Matrix eyeRef((float)11,(float)3,Eye);
        Matrix finRef((float)54,(float)3,Fin);

        fres.Rotacion(finRef,id,finRef.GET(0,0),finRef.GET(0,1),180);
        for(int i=0; i<fres.numRen();i++)
            {
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
            }
        Matrix finRot((float)54,(float)3,Fin);

        dres.traslacion(dolRef,id,0,ty);
        eres.traslacion(eyeRef,id,0,ty);
        fres.traslacion(finRot,id,0,ty);
        graf.mapeo(fres.GET(0,0), fres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<fres.numRen();i++)
        {
                graf.mapeo(fres.GET(i,0),fres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<fres.numCol();j++)
                Fin[i][j]=fres.GET(i,j);
        }
        PaintFinV(fres);
        graf.mapeo(dres.GET(0,0), dres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<dres.numRen();i++)
        {
                graf.mapeo(dres.GET(i,0),dres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<dres.numCol();j++)
                Dol[i][j]=dres.GET(i,j);
        }
        PaintDolphinV(dres);

        graf.mapeo(eres.GET(0,0), eres.GET(0,1), x, y, L, M);
        Canvas->MoveTo(x,y);
        for(int i=0; i<eres.numRen();i++)
        {
                graf.mapeo(eres.GET(i,0),eres.GET(i,1),x,y,L,M);
                Canvas->LineTo(x,y);
                for(int j=0;j<eres.numCol();j++)
                Eye[i][j]=eres.GET(i,j);
        }

        if(dres.GET(0,1)<=-300)
        {
            cont=0;
            Timer3->Enabled=false;
            Timer4->Enabled=false;
            Timer1->Enabled=true;
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   PlaySound (NULL, NULL, SND_ASYNC + SND_LOOP);
   FormMap->Show();
}
//---------------------------------------------------------------------------


 