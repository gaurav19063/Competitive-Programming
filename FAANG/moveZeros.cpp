#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	cin>>a[i];
	int j=-1;
	for(int i=0;i<n;i++)
	{
if(a[i]!=0&&j!=-1)
{swap(a[i],a[j]);
j++;
}
else if(a[i]==0&&j==-1)
j=i;


	}
	for(int i=0;i<n;i++)
cout<<a[i]<<" ";
	return 0;
}
