#ifndef Simulation_H
#define Simulation_H

#endif


using namespace std;

//Class Equation:
class Simulation : public TObject{
  public:
        Simulation();
        void read();
        void initialize();
  private:
        int events;   
        double energy;  
 
        double xminpt;                          // Valor do limite mínimo para pt
        double xmaxpt;                          // Valor do limite máximo para pt
        double xmin;                          // X min para a integral de rapidez  
        double xmax;                           // X max para a integral de rapidez
        const Double_t div;                     // Número de pontos para plotar no gráfico da rapidez
        double lim;                   // valor do limite de x
        double y;    
                        // valores para o eixo x 
        const int pint = 100;                       // pontos para a interpolação
        double xi;                           // valor para o eixo x da interpolação 
        const int size = 54;                        // Número de particulas  
        double n[size];
        int charge[size];

  ClassDef(Simulation, 1)
};
