///---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Mapeo.h>
#include <Matrix.h>
#include <jpeg.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TTimer *Timer1;
        TTimer *Timer2;
        TTimer *Timer3;
        TTimer *Timer4;
        TMediaPlayer *MediaPlayer1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall FormKeyPress(TObject *Sender, char &Key);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Timer4Timer(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
float Dol[191][3];
float Eye[11][3];
float Fin[54][3];
float DolAux[191][3];
float EyeAux[11][3];
float FinAux[54][3];
float maxEsc[5];
float minEsc[3];
//int Tx, Ty;
UnidadII graf;
int L,M;
int ancho;
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void PaintDolphin(Matrix dres);
        void PaintFin(Matrix fres);
        void PaintFinV(Matrix fres);
        void PaintDolphinV(Matrix dres);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

