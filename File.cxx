#include "File.h"

ClassImp(File)

//Constructor:
File::File(int para)
{
    cout << "File" << endl;
    a = para;

     ofstream myfile;                                                                   // Objeto para a criação de um arquivo externo.
     TString EnderecoSalva = "Particulas.txt";
     myfile.open(EnderecoSalva);

}
//Function to write on the file:
File::Write(int n_p, double result[][])
{
   //Write:
   cout << "Write";
   
   // salvando os valores em um arquivo .txt.

  for(const int c=0; c < n_p; c++){

                myfile << result[c][0] << "\t" << result[c][1] << "\t" << result[c][2] << "\t" << result[c][3] <<endl;       // Salvando os valores em um arquivo externo       

                }
                     // Fim de "for(g)"

  myfile.close();

}
//Function to Read from File:
File::Read()
{
   //Read from file
   cout << "Read";
}
