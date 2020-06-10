// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int *w,int *v,int n,int W)
{
    if(W==0 || n<0)
    return 0;
  else if(w[n]>W) return knapsack(w,v,n-1,W);
  else return max(knapsack(w,v,n-1,W),v[n]+knapsack(w,v,n-1,W-w[n]));
}
int main() {
    // cout<<"Hello World!";
    int w[]={10,20,30};
    int v[]={60,100,120};
    int W=50;
    int n=sizeof(w)/sizeof(w[0]);
    cout<<knapsack(w,v,n-1,W);
}
