#include <iostream>
#include<vector>
using namespace std;
int findEditDistance(string s1,string s2)
{
    int cost_del=1,cost_insert=1,cost_rep=1;
    int a[s1.size()+1][s2.size()+1];
    for(int i=0;i<=s1.size();i++)
    {
        for(int j=0;j<=s2.size();j++)
        {
            if(i==0)
            a[i][j]=j;
            else if (j==0)
            a[i][j]=i;
            else{
                if(s1[i-1]==s2[j-1])
                a[i][j]=a[i-1][j-1];
                else
                a[i][j]=min(min(a[i-1][j]+cost_del,a[i][j-1]+cost_insert),a[i-1][j-1]+cost_rep);
            }
        }
    }
    //   for(int i=0;i<=s1.size();i++)
    // {
    //     for(int j=0;j<=s2.size();j++)
    //     { cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    return a[s1.size()][s2.size()];
}

int main() {
    // cout<<"Hello World!";
    string s1,s2;
    // string s2=" ";
    cin>>s1>>s2;
    cout<<findEditDistance(s1,s2);

}
