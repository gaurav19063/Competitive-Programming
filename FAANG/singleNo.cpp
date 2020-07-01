#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int xor1=0;
    for(int i=0;i<n;i++)
    {int d;cin>>d;
    xor1^=d;

    }
    cout<<xor1;
}
