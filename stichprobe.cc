#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
  int N=234;
  /*char ai[234];*/
  /*char datensumme[2];*/
  ifstream fin("datensumme.txt");
  int sum = 0;
  int a;
  for (int j=0;j<N;++j)
  {
    fin>>a;
    sum += a; /*sum=sum+a*/
  }
  double mean = sum/234.0;
  cout << "This is the mean: " << mean <<endl;
  fin.close(); 
  fin.open("datensumme.txt");
  ifstream fin1("datensumme.txt");
  int a_i;
  double var;
  double var_1=0;
  for(int j=0;j<234;++j)
  {
    fin1>>a_i;
    var_1+=(a_i-mean)*(a_i-mean);
  }
  var= var_1/234.0;
  cout<<"This is the variance: " << var<<endl;
  fin1.close();
  double sd;
  sd = sqrt(var);
  cout<<"This is the Standard Deviation: " << sd<<endl;
}