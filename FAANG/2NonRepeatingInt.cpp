#include<iostream>
#include<vector>
using namespace std;
void find2SingleIntegers(int* a,int n,int &x,int &y)
{
	int xor1=0;
	for(int i=0;i<n;i++)
{xor1^=a[i];

}
int lastbitplace=xor1&(~xor1+1);
for(int i=0;i<n;i++)
{
	if(a[i]&lastbitplace)
	x^=a[i];
	else
	{
		y^=a[i];
	}
}
}
int main() {
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
cin>>ar[i];
int x=0;
int y=0;
find2SingleIntegers(ar,n,x,y);
x<y?(cout<<x<<" "<<y):(cout<<y<<" "<<x);
	return 0;
}
