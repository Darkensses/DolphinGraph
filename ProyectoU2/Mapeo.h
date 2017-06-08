
//# define L 0
//# define M 479

#include <math.h>
# ifndef MAPEO_H
# define MAPEO_H
//---------------------------------------------------------------------------

class UnidadII
{
   float XWmin,YWmin,XWmax,YWmax;//DIMENSIONES DE LA VENTANA
   int  XPVmin,YPVmin,XPVmax,YPVmax;//DIMENSIONES DEL PUERTO

   public:
    void ventana(float WX1,float WY1,float WX2,float WY2);

    void puerto(int VX1,int VY1,int VX2,int VY2);

    void mapeo(float X,float Y,int &XT, int &YT,int L,int M);
};
#endif
