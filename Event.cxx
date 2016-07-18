#include "Event.h"


//Default:
ClassImp(Event)

//Construtor:
Event::Event(Particle d[], double e)
{
   cout << "Event" <<endl;
   energia = e;
   Particle *p = d;
   
  //Pointer operations, size is an argument:
  
 
}
//Functions:
double Event::Execute()
{
  return 3.4;  
}
//This method run the monteCarlo Simulation
void MonteCarlo()
{
    cout << "Monte Carlo" << endl;
    gRandom = new TRandom3(0);
    gRandom->setSeed(0);

    Equation *eq = new Equation(energia);
    //which equation?: log or linear
    double n_p = eq->(1);


}

