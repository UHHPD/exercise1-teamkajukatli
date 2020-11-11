#include <iostream>
#include <fstream>
int main()
{
  int daten;
  /*Printing first 2 numbers*/
  /*
  std::ifstream fin("daten.txt"); 
  fin>>daten;
  std::cout<<daten<<"\n";
  fin>>daten;
  std::cout<<daten<<"\n";
  fin.close();
  std::ifstream fin2("daten.txt");
  */
  /*Printing numbers*/
  /*
  for(int i=0;i<234;++i)
  {
   char daten[2];
   for(int j=0;j<2;++j)
   {
     fin2>>daten[j];
     std::cout<<daten[j];
   }
   /*std::cout<<"\n";
  }
  fin.close();
  */
  /*Sum of the two numbers*/
  int i,j,sum=0;
  int daten1[2];
  std::ifstream fin3("daten.txt");
  std::ofstream fout("datensumme.txt");
  for(i=0;i<234;++i)
  { 
    fin3>>daten1[0];
    fin3>>daten1[1];
    sum=daten1[0]+daten1[1];
    fout<<sum<<std::endl;
  }
 fin3.close();
 fout.close();
}
