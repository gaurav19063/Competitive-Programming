
//User function template for C++

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> v, int n) {
    //code here
    vector<pair<int,int>> vt;
    sort(v.begin(),v.end());
    int j=1;
    for(int i=0;i<v.size();i++)
    {
        while(v[i].second>=v[j].first&&j<v.size())
        {
            v[i].second=max(v[i].second,v[j].second);
            v[j].first=-1;
            v[j].second=-1;
            j++;
        }
        i=j-1;
        j=j+1;
    }
    for(auto x:v)
    {
        if(x.first!=-1)
        vt.push_back(x);
    }
    return vt;
}
