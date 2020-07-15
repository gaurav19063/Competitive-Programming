int minIndexChar(string str, string patt)
{
    // Your code here
    unordered_map<char,bool> umap;
    for(auto x: patt)
    {
        umap[x]=1;
    }
    for(int i=0;i<str.size();i++)
    {
        if(umap.count(str[i])>0)
        return i;

    }
    return -1;
}
