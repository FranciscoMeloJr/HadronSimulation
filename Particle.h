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
       void CalculateMomentumAndRapidity(int xminpt, int xmaxpt, int div, int xMin,int xMax);
       double GetResult();
       double GetMass();
       int GetCharge();
       double GetN();
       void SetP(double r);
       double GetP();
       
       double* GetMX(); 
       double* GetMY();
       double* GetMYPT();
       double* GetMXPT();
     //Graph:
       TGraph* GetgInt(); 
       TGraph* GetGr();
       TGraph* GetgIntegral();
       TGraph* GetgIntegralPt();

  private:
       double mass;
       int charge;
       double N;
       int id;

       double P;
       double resultado_integral;
       double* mx;
       double* my;
       double* mypt;
       double* mxpt;
  //Consts:
       static const int np = 1000;
       static const divPt = 200;
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
