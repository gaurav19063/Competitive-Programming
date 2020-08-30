int Solution::anytwo(string A) {

    unordered_map<char ,int> umap;
    int n=A.size();
    for(int i=0;i<n;i++)
    umap[A[i]]++;
    if(umap.size()==1)
    {
    if(A.size()>2)
    return 1;
    return 0;
    }

    string s;
    for(int i=0;i<n;i++)
    {
        if(umap[A[i]]>1)
        s.push_back(A[i]);
    }
    string s2=s;
    reverse(s.begin(),s.end());
    if(s==s2)
    return 0;
    return 1;
}
