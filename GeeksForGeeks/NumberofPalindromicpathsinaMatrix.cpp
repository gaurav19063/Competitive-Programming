#include<iostream>
using namespace std;
bool isPalindrom(string s)
{
    int j=s.size()-1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[j])
        return false;
        j--;

    }
    return true;
}
int findPalindromicways(char a[][20],int n,int m,int i,int j,string s )
{
    if(i>n||j>m)
    return 0;
    else if(i==n&&j==m&&isPalindrom(s))
    return 1;
    else
    {
        s.push_back(a[i+1][j]);
        int c= findPalindromicways(a,n,m,i+1,j,s);
        s.pop_back();
        s.push_back(a[i][j+1]);
        int b=findPalindromicways(a,n,m,i,j+1,s);
        s.pop_back();
        return c+b;


    }
}
int main()
 {
	//code

	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    char a[n][20];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	    cin>>a[i][j];
	    string s="";
	    s.push_back(a[0][0]);
	    cout<<findPalindromicways(a,n-1,m-1,0,0,s)<<endl;
	}
	return 0;
}
