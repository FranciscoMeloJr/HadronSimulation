#include "Simulation.h"
#include "Settings.h"

ClassImp(Simulation)
//Construtor:
Simulation::Simulation(int firP, int secP)
{ 
     cout << "Begin of the simulation" << endl;
     x = firP;
     y = secP; 
     cout << x << endl; 

     A = new Settings();
}
void Simulation::Calculate()
{
     cout << x + y << endl; 
     A.Method1(); 
}
//Simulation S(10);
