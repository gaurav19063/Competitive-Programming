class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowered, int n) {
        if(n==0)
            return 1;
        else if(flowered.size()==1)
        {

            return !flowered[0];
        }
        else if(flowered.size()==0)
        {
            return 0;
        }
        for(int i=0;i<flowered.size();i++)
        {
            if(i==0&&flowered[i]==0)
            {
            if(flowered[i+1]==0)
            { n--;
             // cout<<i;
             flowered[i]=1;
            }
            }
            else if(i==flowered.size()-1&&flowered[i]==0&&flowered[i-1]==0)
            {

                n--;
                flowered[i]=1;
            }
            else if(flowered[i]==0&&flowered[i-1]==0&&flowered[i+1]==0)
            {
                // cout<<i;
                n--;
                flowered[i]=1;
            }
             if(n==0)
             {  cout<<i;
                 return 1;
             }
        }
            return false;
    }
};
