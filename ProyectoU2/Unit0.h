//---------------------------------------------------------------------------

#ifndef Unit0H
#define Unit0H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mapeo.h>
#include <Matrix.h>
//---------------------------------------------------------------------------
class TFormMap : public TForm
{
__published:	// IDE-managed Components
        void __fastcall FormPaint(TObject *Sender);
private:	// User declarations
float Tri[4][3];
float TriAux[4][3];
int L,M;
int ancho;
UnidadII graf;
public:		// User declarations
        __fastcall TFormMap(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMap *FormMap;
//---------------------------------------------------------------------------
#endif

