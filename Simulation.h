#ifndef ROOT_Simulation_H
#define ROOT_Simulation_H

#ifndef ROOT_TObject
#include "TObject.h"
#endif

#ifndef ROOT_TString
#include "TString.h"
#endif

#ifndef ROOT_TGraph
#include "TGraph.h"
#endif

#ifndef ROOT_TRandom
#include "TRandom3.h"
#endif

#ifndef ROOT_TF1
#include "TF1.h"
#endif

#include <iostream>
#include <fstream>

using namespace std;
//Class Equation:
class Simulation : public TObject{
  public:
        Simulation();
        void read();
        void initialize();
        void run();
	void writeFile();

  private:
        int events;   
        double energy;  
 
        double xminpt;                          // Valor do limite mínimo para pt
        double xmaxpt;                          // Valor do limite máximo para pt
        double xmin;                          // X min para a integral de rapidez  
        double xmax;                           // X max para a integral de rapidez
        const Double_t div = 12;                     // Número de pontos para plotar no gráfico da rapidez
        double lim;                   // valor do limite de x
        double y;    
                        // valores para o eixo x 
        const int pint = 100;                       // pontos para a interpolação
        double xi;                           // valor para o eixo x da interpolação 
        const int size = 54;                        // Número de particulas  
        double* n;
        double* mass;
        int* charge;
        const double divpt = 200;  

        //Part 2:
        double m = 0;                               // Variável utilizada para guardar os valores de N.
	double* p;                             // Vetor para guardar os valores de N normalizada.
	double r = 0;                               // Variável utilizada para guardar os valores de N na normalização.
	double* x;                      // Vetor utilizado para guardar os valores do sorteio da particula.
	double* resultado_integral;            // Vetor utilizado para guardar os valores das integrais de rapidez.
	double** mx;                  // Matriz que guarda os valores de x do gráfico após a interpolação. 
	double** my;                  // Matriz que guarda os valores de y do gráfico após a interpolação.
	double** mxpt;               // Matriz que guarda os valores de x do gráfico de pt
	double** mypt;               // Matriz que guarda os valores de y do gráfico de pt
	double xipt;                       // Valor para o eixo x da interpolação de pt
	double limpt;

        //New:
        int cols = 4; 
        int nn_p;
        double** rresult;

        //Graphs:
        TGraph* gr;
        TGraph* gInt;
        TGraph* gIntegral;
        TGraph* gIntegralpt;
        
        TRandom3* gRandom;
        
        //File:
        std::ofstream myfile;     
        TString EnderecoSalva;

        
  ClassDef(Simulation, 1)
};

#endif
