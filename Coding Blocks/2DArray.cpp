#include<iostream>
using namespace std;
int main()
{
  int **a=new int*[100];
  for(int i=0;i<10;i++)
  {
    a[i]=new int[500];
  }
  a[1][3]=4;
  cout<<a[1][3];

  for(int i=0;i<10;i++)
  {
    delete [] a[i];
  }
  delete [] a;
}
