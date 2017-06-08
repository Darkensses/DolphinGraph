//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Mapeo.h>
#include <Matrix.h>

//---------------------------------------------------------------------------
class TFormM : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TBitBtn *btnReset;
        TComboBox *cbFigure;
        TBitBtn *btnDolphin;
        TLabel *Label1;
        TTrackBar *trackTRX;
        TLabel *Label2;
        TTrackBar *trackTRY;
        TTabSheet *TabSheet3;
        TLabel *Label3;
        TTrackBar *trackSX;
        TLabel *Label4;
        TTrackBar *trackSY;
        TCheckBox *chboxProp;
        TTabSheet *TabSheet4;
        TEdit *editAngle;
        TUpDown *UpDownAngle;
        TLabel *Label5;
        TBitBtn *btnRotN;
        TBitBtn *btnRotP;
        TTabSheet *TabSheet5;
        TComboBox *cbRef;
        TTabSheet *TabSheet6;
        TLabel *Label6;
        TLabel *Label7;
        TTrackBar *trackSHY;
        TTrackBar *trackSHX;
        TSpeedButton *SpeedButton1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall cbFigureChange(TObject *Sender);
        void __fastcall btnResetClick(TObject *Sender);
        void __fastcall trackTRXChange(TObject *Sender);
        void __fastcall trackTRYChange(TObject *Sender);
        void __fastcall trackSXChange(TObject *Sender);
        void __fastcall trackSYChange(TObject *Sender);
        void __fastcall btnRotNClick(TObject *Sender);
        void __fastcall btnRotPClick(TObject *Sender);
        void __fastcall cbRefChange(TObject *Sender);
        void __fastcall trackSHXChange(TObject *Sender);
        void __fastcall trackSHYChange(TObject *Sender);
        void __fastcall btnDolphinClick(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
float Tri[4][3];
float TriAux[4][3];
int L,M;
int ancho;
UnidadII graf;
public:		// User declarations
        __fastcall TFormM(TComponent* Owner);
        void EnabledTabs();
};
//---------------------------------------------------------------------------
extern PACKAGE TFormM *FormM;
//---------------------------------------------------------------------------
#endif



