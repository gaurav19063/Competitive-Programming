#include <iostream>
using namespace std;
int findNoOfPalindromeInString(string s)
{
    int n=s.size();
    int a[n][n]={0};
    int t=0;
     int count=0;
    while(1){
        if(t>n)
        break;

    for(int i=0,j=t;i<n&&j<n;i++,j++)
    {


            // int i=k;
            // int j=k+1;

            if(j<i)
            a[i][j]=0;
            else if(i==j)
            {a[i][j]=1;
            count++;
            }
            else
            { if(j-i==1&&s[j]==s[i])
           { a[i][j]=1; count++;}
            else if(j-i==1&&s[j]!=s[i])
            a[i][j]=0;
            else if(s[i]==s[j]&&a[i+1][j-1]==1)
           { a[i][j]=1; count++;}
            else
            {a[i][j]=0;
            // cout<<a[i+1][j-1]<<" ";
            // cout<<i<<" "<<j<<endl;
            }

            }
    }
    t++;
}
// for(int i=0;i<n;i++)
// {for(int j=0;j<n;j++)
// cout<<a[i][j]<<" ";
// cout<<endl;
// }
return count;
}

int main() {
    // cout<<"Hello World!";
    string s;
    cin>>s;
   cout<< findNoOfPalindromeInString(s);
}
