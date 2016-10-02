#include "Event.h"
//#include "Equation.h"
//#include "Particle.h"

//Default:
ClassImp(Event)
//Constructor 1:
Event::Event()
{
    cout << "Constructor default";
}
//Construtor 2:
Event::Event(Particle* d, double  e, int equation, int s) 
{
   cout << "Event" <<endl;
   energia = e;
   all = d;
   Equation* x = new Equation(e, equation);
   eq = x;
   size = s;
  //Pointer operations, size is an argument: 
 
}
//Functions:
//Return the result of the Event, in a matrix:
double** Event::Execute()
{
  result = new double[2][2];
  //result = {0};
  return result;  
}
//Get Result:
void  Event::PrintResult(int i)
{
    cout << result[i][0] << "\t" << result[i][1] << "\t" << result[i][2] << "\t" << result[i][3] << endl;

}

//This method run the monteCarlo Simulation
void Event::MonteCarlo(int const a)
{
    cout << "Monte Carlo" << endl;
    gRandom = new TRandom3(0);
    gRandom->TRandom::SetSeed(0);
  
   
    //Equation *eq = new Equation(energia);
    //which equation?: log or linear
    const int Size = size;
    double n_pp = eq->Eq();
    double p[Size];
    double massa[Size];
    int carga[Size];
    double x[Size*10000];
    int divpt = 200;
    const int pint = 100;
    double xminpt = 0;
    double xmaxpt = 3; 
    double xmin = 10;
    double xmax = 10;    

    //declaring variables:
    double** mxpt = new double*[Size];
    double** mypt = new double*[Size];
    double** mx = new double*[Size];
    double** my = new double*[Size];
 
    double resultado_integral[Size];
   
    //reading each particle:
    for(int i =0;i < Size; i++ )
    {
        cout << i;
       p[i] = all->GetP();
       massa[i] = all->GetMass();
       carga[i] = all->GetCharge();
       cout << p[i] <<" " << massa[i] << " " << carga[i] <<endl;
       
        //Matrixes
        mxpt[i] = all->GetMXPT();
        mypt[i] = all->GetMYPT();
        mx[i] = all->GetMX();
        my[i] = all->GetMY();
        
        cout << "mxpt: " << mxpt[i][0] << " mx: "<<  mx[i][0];
       //pointer
       all++;
    }

    getchar();
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
 
  /*double TT[result_row][result_col];
  */
  result = new double[result_row][result_col];

  getchar();
  for(int i = 0; i < result_row ; i++)
  {
     for(int j = 0 ;j <  result_col; j++)
      {
        result[i][j] = 0.0;
      }
        
  }
  //result:
  //result = TT;
  double* pointer;

  cout << " Result " << result[0][0] << endl;
 
  getchar();
  for (int l=0; l < n_p; l++){

           x[l] = gRandom->Uniform(0,1);         // Sorteio das partículas.                     
             getchar();  
    
       for(int k=0; k < size; k++){
             
          if(x[l] < p[k])
          {            
                   // Momento transversal

                   // Carrega os valores do gráfico para a massa[] determinada 
                   for(int valpt=0 ; valpt <= divpt ; valpt++){

                           gIntegralpt->GetX()[valpt] = mxpt[valpt][k];                    // Obtem os valores do gráfico para determinada massa m0. 
                           gIntegralpt->GetY()[valpt] = mypt[valpt][k];

                   }

      getchar();
                   for(int mt=0;mt< n_p*10;mt++){

                           double Ypt = gRandom->Uniform(xminpt,xmaxpt);                         // Sorteio do valor da abscissa
                           double Rpt = gIntegralpt->Eval(Ypt,0,"s");                            // Obtem o valor da ordenada do gráfico.
                           double temppt = gRandom->Uniform(0,2.5);                              // sorteio de uma valor para a ordenada 

                           if(temppt <= Rpt){                       // Se o valor da ordenada "temppt" for menor ou igual a o valor da ordenada "Rpt" atribuir o valor da abscissa "Ypt"

                                     result[l][2] = Ypt;              // Lugar na matriz onde é guardado o valor da ordenada de pt.

                                     break;
                           }

                   }

    getchar();
    
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
  
}
