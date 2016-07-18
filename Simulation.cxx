#include "Simulation.h"
#include "Settings.h"
#include "File.h"
#include "Particle.h"
#include "Equation.h"

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
void Simulation::CreateParticles()
{
    //Create all the particles:
    a  = new Particle(1,-1,0.00333,23.0);  
    b[0] = new Particle(2,-1,0.034,24.0); 
    b[1] = new Particle(3,1,0.024,23.0);
}

//This method run the simulation:
void Simulation::RunSimulation()
{
    cout << "Simulation begin" << endl;

    a->calculateMomentumAndRapidity(0,3,12,-10,10);
    b[0].calculateMomentumAndRapidity(1,3,12,-10,10);
    b[1].calculateMomentumAndRapidity(5,2,25,-10,10);
    
    cout << "Simulation end" << endl;
}
//Normalization process:
void Normalization()
{
    int size = 2;
    double n[size];
    int total=0; 
    double r;

    //take N from particles:
    for(int i = 0 ; i< size; i++)
    {
       n[i]=b[i].getN();
       total+=n[i];
    }
    //set P in the particles:
    for(int j=0; j<size; j++)
    {
        r = r+(n[j]/total);
        b[j].setP(r);
    }
}
//This method run the monteCarlo Simulation
void MonteCarlo()
{
    cout << "Monte Carlo" << endl;
    gRandom = new TRandom3(0);
    gRandom->setSeed(0);
    
    Equation *eq = new Equation(Config.energy);
    //which equation?: log or linear
    double n_p = eq->(1); 

    
}  
//Simulation S(10);
