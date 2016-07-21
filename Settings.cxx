#include "Settings.h"

ClassImp(Settings)
//Constructor:

Settings::Settings()
{
       cout << "Settings" << endl;

       gerator = 1;
       energy = 2300;

//Numeric parameters:
       xminpt = 0;
       xmaxpt =3;
       xMin = -10;
       xMax = 10;
       div = 12;
 //    lim = xMax - xMin;
       y = xMin;
       pInt = 100;
 //    xi = xMin;
       size = 54;

 //File:
       fileName = 3; 
}
Settings::Method1()
{
  cout << "Method 1"<< endl;
}
