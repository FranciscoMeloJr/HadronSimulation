#ifndef Equation_H
#define Equation_H

#endif


using namespace std;

//Class Equation:
class Equation : public TObject
{
  public:
        Equation(double d, int eq);
        double EqLin();
        double EqLog();
        double Eq();
  private:
        double energia;     
  ClassDef(Equation,1)
}
