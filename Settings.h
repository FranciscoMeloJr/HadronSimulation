#ifndef Settings_H
#define Settings_H

#endif

class Settings : public TObject
{
    public:
       Settings();
       Method1();
 
    private:
       int gerator;
       double energy;

       double xMinp;
       double xMaxpt;
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
