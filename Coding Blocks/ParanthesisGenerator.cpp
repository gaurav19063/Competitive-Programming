#include <iostream>
using namespace std;
void valParanthesisGenerator(string s,int n,int open,int close)
{
    if(n==0)
    { if(open==close)
    cout<<s<<endl;
    }
    else
    {
        if(open==close)
        valParanthesisGenerator(s+'(',n-1,open+1,close);
        else
        {
            valParanthesisGenerator(s+'(',n-1,open+1,close);
            valParanthesisGenerator(s+')',n-1,open,close+1);

        }
    }
}
int main() {
    // cout<<"Hello World!";
    int n=8;
    string s="";
    valParanthesisGenerator(s,n,0,0);
}
