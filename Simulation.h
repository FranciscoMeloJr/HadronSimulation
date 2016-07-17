#ifndef Simulation_H
#define Simulation_H

#endif

using namespace std;

class Simulation : public TObject
{
  public:
       Simulation(int x, int y);
       void Calculate();   

  private:
      int x;  
      int y;
      Settings A;
   ClassDef(Simulation,1) 
};
