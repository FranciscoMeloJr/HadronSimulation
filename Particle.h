#ifndef Particle_H
#define Particle_H


#endif
//Particle Class
// This class is the abstraction of each particle:

using namespace std;

class Particle : public TObject 
{
  public: 
       Particle(int i, int c, double m, double n);
       void calculateMomentumAndRapidity(int xMinpt, int xMaxpt, int div, int xMin,int xMax);
       double getResult();

  private:
       double mass;
       int charge;
       double N;
       int id;
       double resultado_integral;

  //Calculated:
       //traversal momentum
       //rapidity
  
  //Aux info
       TGraph *gr;
       TGraph *gInt;
       TGraph *gIntegral;
       TGraph *gIntegralpt;
  
  ClassDef(Particle,1);
};
