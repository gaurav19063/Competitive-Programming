#include <iostream>
using namespace std;
void TOI(int n, char src,char helper,char dest)
{
    if(n==0)
    return;
    else
    {
    TOI(n-1,src,helper,dest);
    cout<< "Shift Disk "<<n<<" From "<<src<<" To "<<dest<<endl;
    TOI(n-1,helper,src,dest);
    }
}
int main() {
    // cout<<"Hello World!";
    int n=3;
    TOI(n,'A','B','C');
}
