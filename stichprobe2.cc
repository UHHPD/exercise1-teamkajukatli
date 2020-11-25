#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
  int N=234;
  /*char ai[234];*/
  /*char datensumme[2];*/
  /*ifstream fin("datensumme.txt");
  int sum = 0;
  int a;
  for (int j=0;j<N;++j)
  {
    fin>>a;
    sum += a; /*sum=sum+a*/
  /*}
  double mean = sum/234.0;
  cout << "This is the mean: " << mean <<endl;
  fin.close(); 
  fin.open("datensumme.txt");
  ifstream fin1("datensumme.txt");
  int a_i;
  double var;
  double var_1=0;
  for(int j=0;j<=234;++j)
  {
    fin1>>a_i;
    var_1+=(a_i-mean)*(a_i-mean);
  }
  var= var_1/234;
  cout<<"This is the variance: " << var<<endl;
  fin1.close();
  double sd;
  sd = sqrt(var);
  cout<<"This is the Standard Deviation: " << sd<<endl;*/
  char x[10];
  int a,i,j,k,l,a_i;
  double var_1=0, var=0,mean,sd;;
  ifstream fin2("datensumme.txt");
  ofstream fout("mittelwerte.txt");
  for (l=0;l<26;++l)
  {
   int sum=0;
   for(k=0;k<9;++k)
    {
      fin2>>a;
      sum += a;
    }
    mean= sum/9.0;
    fout<< mean << endl;
  }
  fout.close();
  fin2.close();
  ifstream fin3("mittelwerte.txt");
  ofstream fout2("varianzen.txt");
  fin2.open("datensumme.txt");
  for(i=0;i<26;++i)
  {
    fin3>>mean;
    double var_1=0;
    for(j=0;j<9;++j)
    {  
      fin2>>a_i;
      var_1+=(a_i-mean)*(a_i-mean);
    }
    var=var_1/9.0;
    fout2<<var<< endl;
  }
  fout2.close();
 fin2.close();
 fin3.close();
 fin3.open("mittelwerte.txt");
 fin2.open("varianzen.txt");
 double mean_1=0.0,m_1;
 double var_2=0.0;
 for(int m=0;m<26;++m)  /*Bessel's correction method*/
 {
   fin3>>m_1;
   mean_1+=m_1/25.0;
   mean_1 = mean_1+(m_1/26.0)
   fin2>>var;
   var_2+=var/25.0;
 }
 fin3.close();
 fin2.close();
 cout<<mean_1<<endl;
 cout<<var_2<<endl;
}