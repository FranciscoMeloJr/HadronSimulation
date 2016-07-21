#include "Equation.h"


//Default:
ClassImp(Equation)

//Construtor:
Equation::Equation(double e, int eq)
{
   energia  = e;
   equation = eq;
}
//Functions:
double Equation::EqLog()
{
   double a = 7.8;
   int b = 19;
   cout <<"Equation 1" << endl;
   double num_part_log = (a*log(energia))-b;
   return num_part_log;
}

double Equation::EqLin()
{
   double a = 0.004;
   int b = 31;
   cout <<"Equation 2" << endl;
   double num_part = (a* energia)+b;  
   return num_part;
}
//
double Equation::Eq()
{
   double result;
   printf("%d", equation);
   if(equation < 0)
   {
      result = EqLin();
   } 
   else
   {
     result =  EqLog();
   }
     printf("%lf", result);
     return result; 
}
