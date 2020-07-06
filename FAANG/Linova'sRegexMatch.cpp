#include <iostream>
using namespace std;
bool checkIsEqual(string s,string p)
{
    int n=s.size();
    int m=p.size();
    int a[1001][1001]={0};
    a[0][0]=1;
    for(int i=1;i<=m;i++)
    {
        if(p[i-1]=='*')
        a[0][i]=a[0][i-2];

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)

        {
            if(p[j-1]==s[i-1]||p[j-1]=='.')
            a[i][j]=a[i-1][j-1];
            else if(p[j-1]=='*')
           { a[i][j]=a[i][j-2];
             if(p[j-2]==s[i-1]||p[j-2]=='.')
            a[i][j]=a[i-1][j]||a[i][j];

           }
           else a[i][j]=0;
        }
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }
    return a[n][m];
}
int main() {
    // cout<<"Hello World!";
    string s,p;
    cin>>s>>p;
    cout<<checkIsEqual(s,p);
}
