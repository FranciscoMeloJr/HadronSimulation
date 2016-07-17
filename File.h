#ifndef File_H
#define File_H


#endif
//File Class
// This class will do the operations of file processing:

class File : public TObject 
{
  public: 
       File(int a);
       Write();
       Read();
  private:
       int a;  
  ClassDef(File,1);
};
