#include "Simulation.h"
#include "Settings.h"
#include "File.h"
#include "Particle.h"

//Default:
ClassImp(Simulation)

//Construtor 1:
Simulation::Simulation()
{
     cout << "Begin of the simulation" << endl;
     x = 10;
     y = 20;
     cout << x << endl;

     Config = new Settings();
     Arc = new File(Config.fileName);
}
//Construtor 2:
Simulation::Simulation(int firP, int secP)
{ 
     cout << "Begin of the simulation" << endl;
     x = firP;
     y = secP; 
     cout << x << endl; 

     Config = new Settings();
     Arc = new File(Config.fileName);
}

//this method will charge the data and run the experiments:
void Simulation::Calculate()
{
     cout << x + y << endl; 
     Config.Method1(); 
     cout <<"gerator" <<Config.gerator <<endl;
}

//this method creates the particles
void Simulation::createParticles()
{
    //Create all the particles:
    a  = new Particle(1,-1,0.00333,23.0);  
    b[0] = new Particle(2,-1,0.034,24.0); 
    b[1] = new Particle(3,1,0.024,23.0);
}

//This method run the simulation:
void Simulation::runSimulation()
{
    a->calculateMomentumAndRapidity(0,3,12,-10,10);
    b[0].calculateMomentumAndRapidity(1,3,12,-10,10);
    b[1].calculateMomentumAndRapidity(5,2,25,-10,10);
}
//Simulation S(10);
