#include <iostream>
using namespace std;
void numToWords(int x)
{
    if(x==0)
    return;
    else
    {int digit=x%10;
        numToWords(x/10);
        if(digit==0)
        cout<<"zero"<<" ";
        else if(digit==1)
        cout<<"one"<<" ";
        else if(digit==2)
        cout<<"two"<< " ";
        else if(digit==3)
        cout<<"three"<<" ";
        else if (digit==4)
        cout<<"four"<<" ";
        else if(digit==5)
        cout<<"five ";
        else if(digit==6)
        cout<<"six ";
        else if(digit==7)
        cout<<"seven ";
        else if(digit==8)
        cout<<"eight ";
        else if(digit==9)
        cout<<"nine ";
    }
}
int main() {
    // cout<<"Hello World!";
    numToWords(2048);
}
