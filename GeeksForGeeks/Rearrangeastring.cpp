#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int sum=0;
	    string st1;
	    string st2;

	    for(int i=0;i<n;i++)
	    {
	        if(s[i]>='A'&&s[i]<='Z')
	        {
	            st2.push_back(s[i]);
	        }

	        else{

	       sum+=s[i]-'0';
	        }
	    }

	   st1=to_string(sum);
	   sort(st2.begin(),st2.end());
	   st2.append(st1);
	    cout<<st2<<endl;

	}
	return 0;
}
