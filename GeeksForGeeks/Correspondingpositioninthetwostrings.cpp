#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    int count=0;
	    for(int i=0;i<s1.size();i++)
	    {
	        if(tolower(s1[i])==tolower(s2[i]))
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
