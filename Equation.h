#ifndef Equation_H
#define Equation_H

#endif


using namespace std;

//Class Equation:
class Equation : public TObject
{
  public:
        Equation(double d);
        double Eq1();
        double Eq2();
        double Eq(int i);
  private:
        double energia;     
  ClassDef(Equation,1)
}
