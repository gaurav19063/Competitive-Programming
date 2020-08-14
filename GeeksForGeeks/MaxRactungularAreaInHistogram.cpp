#include <iostream>
#include<stack>
using namespace std;
int findMaxArea(int* a,int n=1)
{
    stack<int> st;
    st.push(0);
    int maxarea=0;
    int i=0;
    while(i<n)
    {
        if(st.empty()||a[i]>=a[st.top()])
        st.push(i++);
        else
        {
            int top=st.top();
            st.pop();
            int ar=(st.empty())?a[top]*(i):a[top]*(i-st.top()-1);
            maxarea=max(maxarea,ar);
        }
    }
// while(!st.empty())
// {
//     cout<<st.top()<<" ";
//     st.pop();
// }
    while(!st.empty())
    {
        int top=st.top();
        st.pop();
         int ar=(st.empty())?a[top]*(i):a[top]*(i-st.top()-1);
            maxarea=max(maxarea,ar);
            // cout<<maxarea<<" "<<ar<<endl;
    }
    return maxarea;

}
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // cout<<0<<endl;
       cout<< findMaxArea(a,n)<<endl;

    }

}
