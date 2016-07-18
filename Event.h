#ifndef Event_H
#define Event_H

#endif


using namespace std;

//Class Event:
class Event: public TObject
{
  public:
        Event(Particle *d, int e, int eq);
        double** Execute();
        void MonteCarlo();
       
  private:
        double energia;
        Particle *all;
        int  eq;      
  ClassDef(Event,1)
};
