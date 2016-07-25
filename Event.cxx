#include "Event.h"
#include "Equation.h"
#include "Particle.h"

//Default:
ClassImp(Event)
//Constructor 1:
Event::Event()
{
}
//Construtor 2:
Event::Event(Particle* d, int  e, int equation)
{
   cout << "Event" <<endl;
   energia = e;
   all = d;
   Equation x = new Equation(e, equation);

  //Pointer operations, size is an argument:
  
 
}
//Functions:
//Return the result of the Event, in a matrix:
double** Event::Execute()
{
  result[2][2] = {0};
  return result;  
}
//Get Result:
void  Event::PrintResult(int i)
{
    cout << result[i][0] << "\t" << result[i][1] << "\t" << result[i][2] << "\t" << result[i][3] << endl;

}

//This method run the monteCarlo Simulation
void Event::MonteCarlo(const int size)
{
    cout << "Monte Carlo" << endl;
    gRandom = new TRandom3(0);
    gRandom->TRandom::setSeed(0);
  
   /*
    //Equation *eq = new Equation(energia);
    //which equation?: log or linear
    double n_pp = eq->Eq();
    double p[size];
    double x[size*10000];
    int divpt = 200;
    //
    p[0] = all->GetP();

 // for(int g=0;g<eventos;g++){                    // Inicio do "for" com a variavel (g) "for(g)" determina o número de eventos 

  // Usando a multiplicidade para calcular o numero de partículas dado a energia 

//  double num_part_log , num_part;

  //num_part_log =(7.8*log(energia))-19;   // Equação logarítimica              

  //num_part = (0.004 * energia)+31;       // Equação linear

  //cout<< num_part_log <<endl;

  // Obs: para os calculos pode se utilizar de apenas uma equação que será determinada na variável n_p. 


  const int n_p =  n_pp;//num_part_log;          // Número de particulas geradas. "neste caso está sendo usado a equação logarítmica para calcular o número de partículas" 
 //double result[n_p][4];                 // Matriz criada para guardar os resultados.
  
  //declaring result:
  const int result_row = n_p;
  const int result_col = 4;
 
  double TT[result_row][result_col];

  for(int i = 0; i < result_row ; i++)
  {
     for(int j = 0 ;j <  result_col; j++)
      {
        TT[i][j] = 0.0;
      }
        
  }
  //result:
  result = TT;
  double* pointer;

  double mxpt[result_row+1][size+1];
         pointer = all.GetMXPT();

  double mypt[result_row+1][size+1];
         mypt[0] = all->GetMYPT();

  double mx[result_row+1][size+1];
         mx[0] = all->GetMX();

  double my[result_row+1][size+1];
         my[0] = all->GetMY();
 
  for (int l=0; l < n_p; l++){

           x[l] = gRandom->Uniform(0,1);         // Sorteio das partículas.                     
    
    
       for(int k=0; k < size; k++){
             
          if(x[l] < p[k])
          {            
                   // Momento transversal

                   // Carrega os valores do gráfico para a massa[] determinada 
                   for(int valpt=0 ; valpt <= divpt ; valpt++){

                           gIntegralpt->GetX()[valpt] = mxpt[valpt][k];                    // Obtem os valores do gráfico para determinada massa m0. 
                           gIntegralpt->GetY()[valpt] = mypt[valpt][k];

                   }


                   for(int mt=0;mt< n_p*10;mt++){

                           double Ypt = gRandom->Uniform(xminpt,xmaxpt);                         // Sorteio do valor da abscissa
                           double Rpt = gIntegralpt->Eval(Ypt,0,"s");                            // Obtem o valor da ordenada do gráfico.
                           double temppt = gRandom->Uniform(0,2.5);                              // sorteio de uma valor para a ordenada 

                           if(temppt <= Rpt){                       // Se o valor da ordenada "temppt" for menor ou igual a o valor da ordenada "Rpt" atribuir o valor da abscissa "Ypt"

                                     result[l][2] = Ypt;              // Lugar na matriz onde é guardado o valor da ordenada de pt.

                                     break;
                           }

                   }

    
    
                       // Rapidez 



              // Carrega os valores do gráfico para a massa[] determinada 
                   for(int val=0 ; val <= pint ; val++){

                           gIntegral->GetX()[val] = mx[val][k];                    // Obtem os valores do gráfico para determinada massa. 
                           gIntegral->GetY()[val] = my[val][k];

                           }


                      for(int rp=0;rp< n_p*100;rp++){

                                double Y = gRandom->Uniform(xmin,xmax);                         // Sorteio do valor de x
                                double R = (gIntegral->Eval(Y,0,"s"))/(resultado_integral[k]);  // Normaliza o valor de y do gráfico para dado x.
                                double temp = gRandom->Uniform(0,1);                          // sorteio de uma valor de y 

                                if(temp <= R){

                                      result[l][3] = Y;              // Lugar na matriz onde é guardado o valor de Y da rapidez.

                                      break;
                               }
                      }


                   result[l][0] = massa[k];               // Valor da massa da partícula
                   result[l][1] = carga[k];               // Valor da carga da partícula

                   break;

                   }
           }
  }
  */
}
