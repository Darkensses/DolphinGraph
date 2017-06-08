//---------------------------------------------------------------------------
#ifndef MatrixH
#define MatrixH
//---------------------------------------------------------------------------
class Matrix
{
   int col, ren;
   float **Mat;

public:

   Matrix(int nr=4,int nc=4, float valor=0);//constructor con arg. por defecto

   Matrix(float nr,float nc, float m[][3]);

   Matrix(Matrix &);
   ~Matrix();
   void SET(int R, int C, float val){Mat[R][C]=val;}
   float GET(int R, int C){return Mat[R][C];}
   int numCol(){return col;}
   int numRen(){return ren;}
   void Inicializa(int, int);
   Matrix &operator *=(Matrix &mat2);

   Matrix &Matrix::operator*(const Matrix &m1);

   Matrix operator*(float);//Multiplicar por un escalar

   Matrix &operator=(Matrix &m);

   Matrix & asignar(Matrix);

   Matrix & Identidad();

   Matrix & traslacion(Matrix,Matrix,int,int);
   Matrix & Escalacion(Matrix ,Matrix,float,float);
   Matrix & EscalacionEx(Matrix,Matrix,float,float,int,int);
   Matrix & Rotacion(Matrix,Matrix,float,float,float);
   Matrix & RotacionN(Matrix,Matrix,float);
   Matrix & Reflexion(Matrix, Matrix, int);
   Matrix & ShearingX(Matrix, Matrix, int);
   Matrix & ShearingY(Matrix, Matrix, int);

};
#endif
