#include<iostream>
using namespace std;
int * fun(){
  int* a =new int[100];
  a[0]=12;
  a[1]=55;
  return a;
}
int main()
{
  int *a=fun();
  cout<<a[1];
}
