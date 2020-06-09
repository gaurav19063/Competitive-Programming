#include <iostream>
using namespace std;
void find_subseq(string st,string s,int i,int n)
{
    if(i==n)
    cout<<s<<" ";
    else
    {
        find_subseq(st,s+st[i],i+1,n);
        find_subseq(st,s,i+1,n);
    }
}
int main() {
    // cout<<"Hello World!";
    string st="abc";
    string s="";
    find_subseq(st,s,0,st.length());
}
