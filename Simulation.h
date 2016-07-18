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
       void createParticles();
       void runSimulation();

  private:
      int x;  
      int y;
      Settings Config;
      File      Arc;  
      Particle *a;  
      Particle b[2];

   ClassDef(Simulation,1) 
};
