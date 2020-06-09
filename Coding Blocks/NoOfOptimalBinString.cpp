#include <iostream>
using namespace std;

int findOptimalBinStrings(int n,int b)
{
    if(n==0)
    return 1;
    else if(b)

      return  findOptimalBinStrings(n-1,0);
    else return findOptimalBinStrings(n-1,1)+findOptimalBinStrings(n-1,0);
}
int main() {
    // cout<<"Hello World!";
    int n=3;

   cout<< findOptimalBinStrings( n-1,0)+findOptimalBinStrings( n-1,1);
}
