#ifndef Simulation_H
#define Simulation_H

#endif

using namespace std;

//Class Simulation:
class Simulation : public TObject
{
  public:
       Simulation(int x, int y);
       void Calculate();   
       void CreateParticles();
       void RunSimulation();
       void MonteCarlo();

  private:
      int x;  
      int y;
      const int size = 2;
      const int g = 2;
      
      Settings Config;
      
      //File
      File      Arc;  
      //Particles
      Particle *a;  
      Particle part[size];
       
      //Events:
      Event events[g];

   ClassDef(Simulation,1) 
};
