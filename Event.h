#ifndef Event_H
#define Event_H

#endif


using namespace std;

//Class Event:
class Event: public TObject
{
  public:
        Event(Particle []d, int e, int eq);
        double[] Execute();
        void MonteCarlo(const int size);
        void PrintResult(int i);

  private:
        double energia;
        Particle *all;
        int  eqS;
        Equation *eq;
        
        //result
        double** result;       
  ClassDef(Event,1)
};
