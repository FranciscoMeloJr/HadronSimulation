#ifndef Event_H
#define Event_H

#endif


using namespace std;

//Class Event:
class Event : public TObject
{
  public:
        Event();
        //Event(Particle* d, int e, int equation);
        Event(Particle* d, int e, int equation, int s);
        double** Execute();
        void MonteCarlo(const int size);
        void PrintResult(int i);

  private:
        double energia;
        Particle* all;
        int  eqS;
        Equation* eq;
        int size;
  
        //gIntegralpt:
        TGraph* gIntegralpt;
        TGraph* gr;    
        TGraph* gIntegral;
        TGraph* gInt;

        //result
        double** result;
  ClassDef(Event,1)
};
