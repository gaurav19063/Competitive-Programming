#include <iostream>
using namespace std;
string getQuo(string num,string div)
{
    int divisor=stoi(div);
    int temp=0;
    int ind=0;
    while(temp<divisor)
    {
        // cout<<temp<<endl;
        temp=temp*10+(num[ind++]-'0');
    }
    // cout<<temp<<endl;
    string ans="";
    while(ind<=num.size())
    {
ans+=(temp/divisor)+'0';
temp=(temp%divisor)*10+num[ind++]-'0';
    }
    return ans;
}
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        string num,div;
        cin>>num>>div;
        string a=getQuo(num,div);
        if(a.size()==0)
        cout<<0<<endl;
        else
        cout<<a<<endl;
    }
}
