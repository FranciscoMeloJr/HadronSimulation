#include "Event.h"


//Default:
ClassImp(Event)

//Construtor:
Event::Event(Particle d[], int  e, int eq)
{
   cout << "Event" <<endl;
   energia = e;
   Particle *p = d;
   Equation *eq = new Equation(e, eq);

  //Pointer operations, size is an argument:
  
 
}
//Functions:
//Return the result of the Event, in a matrix:
double** Event::Execute()
{
  result[2][2] = {0};
  return result;  
}

//This method run the monteCarlo Simulation
void MonteCarlo()
{
    cout << "Monte Carlo" << endl;
    gRandom = new TRandom3(0);
    gRandom->setSeed(0);

    //Equation *eq = new Equation(energia);
    //which equation?: log or linear
    double n_p = eq->Eq();


}

