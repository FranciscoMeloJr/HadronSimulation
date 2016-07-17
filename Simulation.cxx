#include "Simulation.h"
#include "Settings.h"
#include "File.h"

ClassImp(Simulation)
//Construtor:
Simulation::Simulation(int firP, int secP)
{ 
     cout << "Begin of the simulation" << endl;
     x = firP;
     y = secP; 
     cout << x << endl; 

     Config = new Settings();
     Arc = new File(Config.fileName);
}
void Simulation::Calculate()
{
     cout << x + y << endl; 
     Config.Method1(); 
     cout <<"gerator" <<Config.gerator <<endl;
}
//Simulation S(10);
