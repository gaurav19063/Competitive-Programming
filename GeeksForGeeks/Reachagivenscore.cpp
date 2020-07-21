#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int findways(int a[],int n,int ind)
{
    if(ind>2||n<0)
    return 0;
    else if(n==0)
    return 1;
    return findways(a,n-a[ind],ind)+findways(a,n,ind+1);



}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   // unordered_map<string,int> umap;
	   int a[]={3,5,10};
	  cout<<  findways(a,n,0)<<endl;
	}
	return 0;
}
