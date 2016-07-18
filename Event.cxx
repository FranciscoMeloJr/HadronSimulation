#include "Event.h"


//Default:
ClassImp(Event)

//Construtor:
Event::Event(Particle d[])
{
   cout << "Event" <<endl;
}
//Functions:
double Event::Execute()
{
  return 3.4;  
}
