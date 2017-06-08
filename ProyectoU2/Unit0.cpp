//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit0.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMap *FormMap;
//---------------------------------------------------------------------------
__fastcall TFormMap::TFormMap(TComponent* Owner)
        : TForm(Owner)
{
    ancho = 0;
    graf.ventana((FormMap->ClientWidth-ancho)/2,0,(FormMap->ClientWidth-ancho),FormMap->ClientHeight/2);
    graf.puerto((FormMap->ClientWidth-ancho)/2,0,(FormMap->ClientWidth-ancho),FormMap->ClientHeight/2);
    L=(FormMap->ClientWidth-ancho)/2;
    M=FormMap->ClientHeight/2;
}
//---------------------------------------------------------------------------
void __fastcall TFormMap::FormPaint(TObject *Sender)
{
    FormMap->Canvas->Pen->Color=clBlack;
    //LINEA HORIZONTAL
    Canvas->MoveTo(0,FormMap->ClientHeight/2);
    Canvas->LineTo(FormMap->Width,FormMap->ClientHeight/2);
    //LINEA VERTICAL
    Canvas->MoveTo((FormMap->ClientWidth)/2,0);
    Canvas->LineTo((FormMap->ClientWidth)/2,FormMap->ClientHeight);
}
//---------------------------------------------------------------------------

 