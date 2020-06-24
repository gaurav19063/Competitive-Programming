#include <iostream>
#include<climits>
#include<stack>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<int >st;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            st.push(a[i]);
        }
        else
        {
            while(!st.empty()&&st.top()>0&&st.top()<a[i]*-1)
            {
                st.pop();
            }


            if(st.empty()||st.top()<0)
            {
                st.push(a[i]);
            }
            if(st.top()==a[i]*-1)
            {
                st.pop();
            }

        }


    }
    stack<int> st1;
    while(!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
    while(!st1.empty())
    {
       cout<< st1.top()<< ' ';
       st1.pop();
    }
}
