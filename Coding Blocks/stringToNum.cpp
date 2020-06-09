#include <iostream>
using namespace std;
int strToNum(string s,int n)
{
if(n<0)
return 0;
else
{
int c=s[n]-'0';
return c+strToNum(s,n-1)*10;
}
}
int main() {
    // cout<<"Hello World!";
    string st="124563";
    cout<<strToNum(st,st.length()-1);
}
