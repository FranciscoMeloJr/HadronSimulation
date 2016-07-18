#include "Particle.h"
 

ClassImp(Particle)

//Constructor:
Particle::Particle(int i, int c, double m, double n)
{
    cout << "Particle" << endl;
    id = i;
    N = n;
    charge = c;
    mass = m;
        
}
//Get Result:
double Particle::GetResult()
{
  return resultado_integral;
}
//Get N:
double Particle::GetN()
{
  return N;
}
//Set P:
void Particle::SetP(double r)
{
  P=r;
}
//Calculate Momentum:
void Particle::CalculateMomentumAndRapidity(int xminpt, int xmaxpt,int div, int xMin, int xMax){
  cout << "Momentum";
  //int div = 12;
  const int pInt = 100; 
  int y = xMin;
  int xi  = xMin;
  double lim = xMax - xMin;
  //xMinpt and xMaxpt: relative to momentum
  //xMin and xMax: relative to rapitidy
  
  //Parameters for calculus:
  //double resultado_integral;
  double mx[pInt+1]; 
  double my[pInt+1];
  const double divPt =200;   
  double mxpt[divPt+1];
  double mypt[divPt+1];
  double xipt = xminpt;
  double limpt = xmaxpt - xminpt;

  //Function - see if the sintax is right
  gr = new TGraph(div+1);
  gInt = new TGraph(pInt+1);
  gIntegral = new TGraph(pInt+1);
  gIntegralpt = new TGraph(divPt+1);

          for(int t=0; t <= div ; t++){      // Início do "for" com a variável (t) "for(t)" modifica o valor de y para rapidez.

                  TF1 *fr = new TF1("Function", "((1/(sqrt(2*pi)*1.8))*(pow((1-(1.146-1)*(-(pow((x-2.3),2)/(2*pow(1.8,2))))),(-(1/(1.146-1)))))+(1/(sqrt(2*pi)*1.8))*(pow((1-(1.146-1)*(-(pow((x+2.3),2)/(2*pow(1.8,2))))),(-1/(1.146-1)))))*((pow(0.068,3)*pow((1/cosh([1]-x)),2))*(pow(((1.146-1)*cosh([1]-x))/0.068,(2*1.146-3)/(1.146-1)))*(([2]*(1.146-1))+(0.068*(1/cosh([1]-x))))*(((pow(([2]+((0.068*(1/cosh([1]-x)))/(1.146-1))),(-1.146/(1.146-1))))*((-pow([2],2)*(1.146-2)+(2*[2]*0.068*(1/cosh([1]-x))+(2*pow(0.068,2)*pow((1/cosh([1]-x)),2))))))/((4*pow(pi,2))*(1.146-2)*(pow((1.146-1),3))*(2*1.146-3))))", xMin, xMax);  //Função para a integração.
                  fr->SetParameter(2,mass);    // valor da massa atribuido a cada vez que "for(e)" roda.
                  fr->SetParameter(1,y);           // valor de y atribuido a cada vez que o "for(t)" roda

                  const int np = 1000;
                  double *xf=new double[np];
                  double *wf=new double[np];


                  fr->CalcGaussLegendreSamplingPoints(np,xf,wf,1e-15);                          // Classe chamada para fazer a integral de da rapidez

                  gr->GetX()[t] =  y;                                                           // y = ao valor da abscissa do gráfico
                  gr->GetY()[t] = fr->IntegralFast(np,xf,wf,xMin,xMax);                         // integral da rapidez = a ordenada do gráfico
                  // Os valores são guardados no gráfico gr. 


                  y = y + lim/div;
                  // y representa o valor do range da integral.
                  }

            y = xMin;



            // faz a interpolação com os valores do gráfico "gr" e guarda nas matrizes mx e my.   
            for(int v=0 ; v <= pInt ; v++){                         // Inicio do "for" com a variáve (pint) "for(pint)" para mudar os valores de xi

                    mx[v] = xi;                                  // valores atríbuidos a abscissa do gráfico na interpolação 
                    my[v] = gr->Eval(xi,0,"S");                  // dado um valor da abcissa retorna o ponto da ordenada do gráfico usando a interpolação TSpline3
                    gInt->GetX()[v] = mx[v];                     // guardando os valores no gráfico gInt para fazer a integral da interpolação 
                    gInt->GetY()[v] = my[v];                     // guardando os valores no gráfico gInt para fazer a integral da interpolação 

                    xi = xi + lim/pInt;                             // Atribuindo os valores a abscissa do gráfico

                    }                                               // fim do for(pint)

             xi = xMin;
             resultado_integral=gInt->Integral();  


   //Transversal Momemtum	


   // Com a função já normalizada, basta atribuir valores na abscissa para se obter valores da ordenada com a função Eval() onde os pontos estão sendo guardados nas matrize mxpt e mypt.

      for(int ptP=0; ptP <= divPt ;ptP++ ){           // Inicio do "for" com variável (ptP) "for(ptP)" muda o valor de xipt para obter o valor da ordenada 

              TF1 *f = new TF1("Function", "(((x*sqrt(pow(x,2)+pow([2],2)))/0.068)*1*((2-1.146)*(3-2*1.146))/((2-1.146)*pow([2],2)+2*[2]*0.068+2*pow(0.068,2)))*(pow((1+(1.146-1)*([2]/0.068)),(1/(1.146-1))))*(pow((1+(1.146-1)*((sqrt(pow(x,2)+pow([2],2)))/0.068)),(-1.146/(1.146-1))))", xminpt, xmaxpt);  //Função para a integração
              f->SetParameter(2,mass);            // atribui o valor de massa[] do que "for(e)" determina. 

              mxpt[ptP] = xipt;                    // atribui valor para a abscissa 
              mypt[ptP] = f->Eval(xipt);           // obtem o valor da ordenada.


       xipt = xipt + limpt/divPt;                     // Atribuindo os valores a abscissa do gráfico
    }                                                 // Fim de "for(ptP)"        

    xipt = xminpt;
cout << endl;

   cout << "Resultado: " << resultado_integral <<  endl;

}                       //end of method1


