#ifndef Event_H
#define Event_H

#endif


using namespace std;

//Class Event:
class Event: public TObject
{
  public:
        Event();
        Event(Particle* d, int e, int equation);
        double* Execute();
        void MonteCarlo(const int size);
        void PrintResult(int i);

  private:
        double energia;
        Particle* all;
        int  eqS;
        Equation* eq;
        int size;
  
        //result
        double** result;
  ClassDef(Event,1)
};
