//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "Unit0.h"
#include "MainForm.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormM *FormM;
//---------------------------------------------------------------------------
__fastcall TFormM::TFormM(TComponent* Owner)
        : TForm(Owner)
{
}

void TFormM::EnabledTabs()
{
    TabSheet2->Enabled=true;
    TabSheet3->Enabled=true;
    TabSheet4->Enabled=true;
    TabSheet5->Enabled=true;
    TabSheet6->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFormM::FormShow(TObject *Sender)
{
    FormMap->Show();
    ancho = 0;
    graf.ventana((FormMap->ClientWidth-ancho)/2,0,(FormMap->ClientWidth-ancho),FormMap->ClientHeight/2);
    graf.puerto((FormMap->ClientWidth-ancho)/2,0,(FormMap->ClientWidth-ancho),FormMap->ClientHeight/2);
    L=(FormMap->ClientWidth-ancho)/2;
    M=FormMap->ClientHeight/2;
}
//---------------------------------------------------------------------------
void __fastcall TFormM::cbFigureChange(TObject *Sender)
{
     switch(cbFigure->ItemIndex)
     {
         case 0:
         EnabledTabs();
         FormMap->Refresh();
         FormMap->Canvas->Pen->Color=clRed;
         Tri[0][0]=-50; Tri[0][1]=0; Tri[0][2]=1;
         Tri[1][0]=50; Tri[1][1]=0; Tri[1][2]=1;
         Tri[2][0]=0; Tri[2][1]=100; Tri[2][2]=1;
         Tri[3][0]=-50; Tri[3][1]=0; Tri[3][2]=1;
         //RESPALDAR VALORES TRIANGULO
         for(int i=0; i<4; i++)
            for(int j=0; j<3; j++)
               TriAux[i][j] = Tri[i][j];

         int x,y;
         //Se mapea y dibuja el triangulo Tri
         graf.mapeo(Tri[0][0],Tri[0][1], x, y, L, M);
         FormMap->Canvas->MoveTo(x,y);
         for(int i=0; i<4;i++)//57 para mi figura
         {
           graf.mapeo(Tri[i][0],Tri[i][1],x,y,L,M);
           FormMap->Canvas->LineTo(x,y);
         }
         break;
     }
}
//---------------------------------------------------------------------------
void __fastcall TFormM::btnResetClick(TObject *Sender)
{
    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;
    for(int i=0; i<4; i++)
        for(int j=0; j<3; j++)
            Tri[i][j] = TriAux[i][j];

    int x,y;
         //Se mapea y dibuja el triangulo Tri
    graf.mapeo(Tri[0][0],Tri[0][1], x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<4;i++)//57 para mi figura
    {
        graf.mapeo(Tri[i][0],Tri[i][1],x,y,L,M);
        FormMap->Canvas->LineTo(x,y);
    }
}
//---------------------------------------------------------------------------
int tx=0, ty=0, txold=0, tyold=0;
void __fastcall TFormM::trackTRXChange(TObject *Sender)
{
    if(trackTRX->Position>txold){tx=50;}
    if(trackTRX->Position<txold){tx=-50;}
    if(trackTRX->Position==txold){tx=0;}

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;

    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.traslacion(tri,id,tx,ty);
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    txold=trackTRX->Position;
}
//---------------------------------------------------------------------------
void __fastcall TFormM::trackTRYChange(TObject *Sender)
{
    if(trackTRY->Position>tyold){ty=50;}
    if(trackTRY->Position<tyold){ty=-50;}
    if(trackTRY->Position==tyold){ty=0;}

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;
    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.traslacion(tri,id,tx,ty);
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    tyold=trackTRY->Position;
}
//---------------------------------------------------------------------------
float sx=1, sy=1, sxold=0, syold=0;
void __fastcall TFormM::trackSXChange(TObject *Sender)
{
    if(chboxProp->Checked)
    {
        trackSY->Position=trackSX->Position;
        if(trackSX->Position>sxold){sx=2; sy=2;}
        if(trackSX->Position<sxold){sx=(float)1/2; sy=(float)1/2;}
        if(trackSX->Position==sxold){sx=1; sy=1;}
        if(trackSX->Position==0){sx=1; sy=1;}
    }
    else
    {
        if(trackSX->Position>sxold){sx=2;}
        if(trackSX->Position<sxold){sx=(float)1/2;}
        if(trackSX->Position==sxold){sx=1;}
        if(trackSX->Position==0){sx=1;}
    }

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;

    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.EscalacionEx(tri,id,sx,sy,tri.GET(0,0),tri.GET(0,1));
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    sxold=trackSX->Position;

}
//---------------------------------------------------------------------------
void __fastcall TFormM::trackSYChange(TObject *Sender)
{
    if(!chboxProp->Checked)
    {
        if(trackSY->Position>syold){sy=2;}
        if(trackSY->Position<syold){sy=(float)1/2;}
        if(trackSY->Position==syold){sy=1;}
        if(trackSY->Position==0){sy=1;}
    }

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;

    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.EscalacionEx(tri,id,sx,sy,tri.GET(0,0),tri.GET(0,1));
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    syold=trackSY->Position;
}
//---------------------------------------------------------------------------
void __fastcall TFormM::btnRotNClick(TObject *Sender)
{
    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;

    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.RotacionN(tri,id,editAngle->Text.ToDouble());
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }

}
//---------------------------------------------------------------------------
void __fastcall TFormM::btnRotPClick(TObject *Sender)
{
    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;

    Matrix tri((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);

    tres.Rotacion(tri,id,tri.GET(0,0),tri.GET(0,1),editAngle->Text.ToDouble());
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
}
//---------------------------------------------------------------------------
void __fastcall TFormM::cbRefChange(TObject *Sender)
{
    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;
    Matrix tri ((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);
    switch(cbRef->ItemIndex)
    {
        case 0:
        tres.Reflexion(tri,id,1);
        break;

        case 1:
        tres.Reflexion(tri,id,2);
        break;

        case 2:
        tres.Reflexion(tri,id,3);
        break;

        case 3:
        tres.Reflexion(tri,id,4);
        break;

        case 4:
        tres.Reflexion(tri,id,5);
        break;

    }
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
}
//---------------------------------------------------------------------------
float shx=0, shy=0, shxold=0, shyold=0;
void __fastcall TFormM::trackSHXChange(TObject *Sender)
{
    if(trackSHX->Position>shxold){shx=2;}
    if(trackSHX->Position<shxold){shx=(float)-2;}
    if(trackSHX->Position==shxold){shx=0;}

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;
    Matrix tri ((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);
    tres.ShearingX(tri,id,shx);
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    shxold=trackSHX->Position;
}
//---------------------------------------------------------------------------
void __fastcall TFormM::trackSHYChange(TObject *Sender)
{
    if(trackSHY->Position>shyold){shy=2;}
    if(trackSHY->Position<shyold){shy=(float)-2;}
    if(trackSHY->Position==shyold){shy=0;}

    FormMap->Refresh();
    FormMap->Canvas->Pen->Color=clRed;
    Matrix tri ((float)4,(float)3,Tri);
    Matrix id(3,3,0);
    Matrix tres(4,3,0);
    tres.ShearingY(tri,id,shy);
    int x,y;
    graf.mapeo(tres.GET(0,0), tres.GET(0,1), x, y, L, M);
    FormMap->Canvas->MoveTo(x,y);
    for(int i=0; i<tres.numRen();i++)
    {
         graf.mapeo(tres.GET(i,0),tres.GET(i,1),x,y,L,M);
         FormMap->Canvas->LineTo(x,y);
         for(int j=0;j<tres.numCol();j++)
            Tri[i][j]=tres.GET(i,j);
    }
    shyold=trackSHY->Position;
}
//---------------------------------------------------------------------------
void __fastcall TFormM::btnDolphinClick(TObject *Sender)
{
    FormMap->Close();
    Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormM::SpeedButton1Click(TObject *Sender)
{
    Form3->Show();
}
//---------------------------------------------------------------------------


 