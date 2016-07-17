#include "File.h"

ClassImp(File)

//Constructor:
File::File(int para)
{
    cout << "File" << endl;
    a = para;
}
File::Write()
{
   //Write:
   cout << "Write";
}
File::Read()
{
   //Read from file
   cout << "Read";
}
