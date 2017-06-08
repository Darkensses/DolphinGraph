//---------------------------------------------------------------------------
#pragma hdrstop
#include "Matrix.h"
#include <math.h>
#include <assert.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

Matrix::Matrix(int nr,int nc, float valor)
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }

  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = valor;
}

Matrix::Matrix(float nr,float nc, float m[][3])
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }

  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m[i][j];
}


//CONSTRUCTOR DE COPIA

Matrix::Matrix(Matrix &m)
{
   this->ren=m.numRen();
   col=m.numCol();
   Mat =new float*[ren];
   for(int i = 0; i < ren; i++)
  {
     Mat[i] = new float[col];
     assert(Mat[i]);
  }
   for(int i=0; i<ren; i++)
      for( int j=0; j<col; j++)
         Mat[i][j]=m.GET(i,j);
}

void Matrix::Inicializa(int R, int C)
{
   col=C;
   ren=R;
   Mat=new float *[ren];
   for(int i=0; i<ren; i++)
      Mat[i]=new float[col];
   for(int i=0; i<ren; i++)
      for(int j=0; j<col; j++)
         Mat[i][j]=0;
}

Matrix &Matrix::operator*=(Matrix &mat2)
{
   Matrix aux;
   aux.Inicializa(ren, mat2.numCol());


   for(int i=0; i<ren; i++)
   {
      for(int j=0; j<mat2.numCol(); j++)
      {
         float suma=0;
        // Mat[i][j]=0;
         for(int k=0; k<col; k++)
         {
           suma+=floor(Mat[i][k]*mat2.GET(k,j)+0.5);
           aux.SET(i,j,suma);
         }
         //aux.SET(i,j,suma);
      }
   }
   asignar(aux);
   return *this;
}

Matrix Matrix::operator*(float val)
{
   Matrix temp;
   temp.Inicializa(ren,col);
   for(int i=0; i<ren;i++)
      for(int j=0; j<col; j++)
         temp.SET(i,j,Mat[i][j]* val);
   return temp;
}


Matrix &Matrix::operator*(const Matrix &m1)
{
  //assert((ren == m1.ren) && (col == m1.col));
   Matrix * result = new Matrix(ren,col,0);
   assert(result);
   for(int i=0; i < ren; i++)
     for(int j = 0;  j < col; j++)
                       //  //DEBE SER EL NUMERO DE COLUMNAS
                     //REN SOLO SI ES CUADRADA EJ: 3 x 3
       for(int k = 0; k < col; k++)
            result->Mat[i][j]= result->Mat[i][j] + Mat[i][k] * m1.Mat[k][j];

   return *result;
}

Matrix &Matrix::operator=(Matrix &m)
{
//eliminar el tama�o de la matriz destino
  for(int i= 0; i<ren;i++ )
     //Se borran los renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;
//Asignar los nuevos datos de la matriz que llego
  ren=m.numRen();
  col = m.numCol();
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
     Mat[i] = new float[col];
     assert(Mat[i]);
  }
  for( int i =0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m.Mat[i][j];

  return *this;
}


Matrix &Matrix::asignar(Matrix m)
{
   for(int i=0;i<m.numRen();i++)
       for(int j=0;j<m.numCol();j++)
                Mat[i][j]=m.GET(i,j);
   return *this;
}

Matrix::~Matrix()
{
  //Se libera la memoria
  for(int i= 0; i<ren;i++ )
     //Se borran los renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;

}

Matrix &Matrix::Identidad()
{
  for(int i=0; i < ren; i++)
    for( int j = 0; j < col; j++)
      if( i == j)
         Mat[i][i]= 1;
      else
         Mat[i][j]= 0;
  return *this;
}

//---------------TOOLES-----------------------------
Matrix & Matrix::traslacion(Matrix f,Matrix id,int tx,int ty)
{
   id.Identidad();

   id.SET(2,0,tx);
   id.SET(2,1,ty);

   f*=id;

   asignar(f);
   return *this;

}

Matrix & Matrix::Escalacion(Matrix f,Matrix id,float sx,float sy)
{
   id.Identidad();

   id.SET(0,0,sx);
   id.SET(1,1,sy);

   f*=id;

   asignar(f);
   return *this;

}

Matrix & Matrix::EscalacionEx(Matrix f,Matrix id,float sx,float sy,int tx, int ty)
{
   float fx=-tx*(sx-1); //tx y ty son los puntos fijos (centro de la figura)
   float fy=-ty*(sy-1);

   id.Identidad();
   id.SET(2,0,fx);
   id.SET(2,1,fy);

   id.SET(0,0,sx);
   id.SET(1,1,sy);


   f*=id;

   this->asignar(f);
   return *this;
}

Matrix & Matrix:: Rotacion(Matrix f,Matrix id,float M,float N,float angulo)
{
   id.Identidad();
   float ang = angulo*M_PI/180.0;
   float r20= -M*(cos(ang)-1)+N*sin(ang);
   float r21= -N*(cos(ang)-1)-M*sin(ang);

   id.SET(0,0,cos(ang));
   id.SET(0,1,sin(ang));
   id.SET(1,0,-sin(ang));
   id.SET(1,1,cos(ang));
   id.SET(2,0,r20);
   id.SET(2,1,r21);

   f*=id;

   asignar(f);
   return *this;

}

Matrix & Matrix:: RotacionN(Matrix f,Matrix id,float angulo)
{
   id.Identidad();
   float ang = angulo*M_PI/180.0;

   id.SET(0,0,cos(ang));
   id.SET(0,1,sin(ang));
   id.SET(1,0,-sin(ang));
   id.SET(1,1,cos(ang));

   f*=id;

   asignar(f);
   return *this;

}

Matrix & Matrix:: Reflexion(Matrix f,Matrix id, int r)
{
    id.Identidad();
    if(r==1)
    {
    id.SET(1,1,-1);
    }
    else if(r==2)
         id.SET(0,0,-1);
         else if(r==3)
         {
           id.SET(0,0,-1);
           id.SET(1,1,-1);
         }
         else if(r==4)
         {
          id.SET(0,0,0);
          id.SET(1,1,0);
          id.SET(1,0,1);
          id.SET(0,1,1);
         }
         else if(r==5)
         {
          id.SET(0,0,0);
          id.SET(1,1,0);
          id.SET(1,0,-1);
          id.SET(0,1,-1);
         }

    f*=id;

    asignar(f);
    return *this;

}


Matrix & Matrix::ShearingX(Matrix f, Matrix id, int x)
{
   id.Identidad();
   id.SET(1,0,x);
   f*=id;
   asignar(f);
   return *this;
}

Matrix & Matrix::ShearingY(Matrix f, Matrix id, int y)
{
   id.Identidad();
   id.SET(0,1,y);
   f*=id;
   asignar(f);
   return *this;
}

