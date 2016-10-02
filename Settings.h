#ifndef Settings_H
#define Settings_H

#endif
//Settings class:
//  This class is responsible for the parameters of the simulation
class Settings : public TObject
{
    public:
       Settings();
       void Method1();
       
       int fileName;
    private:
       int gerator;
       double energy;

       double xminpt;
       double xmaxpt;
       double xMin;
       double xMax;
       Double_t div;
       double lim;
       double y;
       int pInt;
       double xi; 
       int size;

    ClassDef(Settings,1)
};
