#include "Simulation.h"

ClassImp(Simulation)
//Construtor:
Simulation::Simulation(int firP, int secP)
{ 
     cout << "Begin of the simulation";
     x = firP;
     y = secP; 
     cout << x;
}
void Simulation::Calculate()
{
     cout << x + y; 
}
//Simulation S(10);
