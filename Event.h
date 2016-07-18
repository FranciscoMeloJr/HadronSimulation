#ifndef Event_H
#define Event_H

#endif


using namespace std;

//Class Event:
class Event: public TObject
{
  public:
        Event(Particle d[]);
        double Execute();
       
  private:
        double energia;     
  ClassDef(Event,1)
}
