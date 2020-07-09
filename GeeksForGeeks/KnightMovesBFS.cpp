#include <iostream>
#include<queue>
using namespace std;
int minStepsforKnight(pair<int,int> s,pair<int,int> t,int n)
{

int visited[n+1][n+1]={0};
int xc[]={-2,-2,-1,-1,2,1,2,1};
int yc[]={-1,1,2,-2,-1,-2,1,2};
queue<pair<int,int>> q;
q.push(s);
visited[s.first][s.second]=1;
int level=0;
 int x,y;
 queue<int> dis;
 dis.push(0);
while(!q.empty())
{
    pair<int,int> front=q.front();
    // level++;
    q.pop();
   level=dis.front();
   dis.pop();

        x=front.first;
        y=front.second;
    for(int i=0;i<8;i++)
    {
        int xt=x+xc[i];
        int yt=y+yc[i];
        if(xt<=n&&yt<=n&&xt>=0&&yt>=0&&visited[xt][yt]==0)
        {
            // cout<<xt<<" "<<yt<<" "<<t.first<<" "<<t.second<<endl;
             if(xt==t.first&&yt==t.second)
            return level+1;
            q.push(make_pair(xt,yt));
            visited[xt][yt]=1;
            dis.push(level+1);

        }


    }


}

return -1;
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int tx,ty;
    cin>>tx>>ty;
    cout<<minStepsforKnight(make_pair(x,y),make_pair(tx,ty),n);
}
