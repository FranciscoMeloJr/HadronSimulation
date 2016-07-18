#ifndef Equation_H
#define Equation_H

#endif


using namespace std;

//Class Equation:
class Equation : public TObject
{
  public:
        Equation(double d);
        double EqLin();
        double EqLog();
        double Eq(int i);
  private:
        double energia;     
  ClassDef(Equation,1)
}
