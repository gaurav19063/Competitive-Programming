#include <iostream>
#include<deque>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int d;
    cin>>d;
    int c=0;
    deque<int>dq;
    dq.push_back(d);
    while(d!=-1)
    {  c++;
        int i=0;
        int sum=0;
        for(auto x:dq)
        {sum+=x;
        i++;

        }
        printf("%.4f ",sum*1.0/i);
        if(c>=n)
        dq.pop_front();

        cin>>d;
        dq.push_back(d);
    }
}
