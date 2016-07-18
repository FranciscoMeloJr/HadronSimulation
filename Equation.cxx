#include "Equation.h"


//Default:
ClassImp(Equation)

//Construtor:
Equation::Equation(double e)
{
   energia  = e;
}
//Functions:
double Equation::Eq1()
{
   cout <<"Equation 1" << endl;
   num_part_log = (7.8*log(energia))-19;
   return num_part_log;
}

double Equation::Eq2()
{
   cout <<"Equation 2" << endl;
   num_part = (0.004 * energia)+31;  
   return num_part;
}
//
double Equation::Eq(int i )
{
   if(i < 0)
   {
      return Eq1();
   } 
   else
   {
     return  Eq2();
   } 
}
