/* The function returns a  vector of strings
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
       vector<string> v;
       for(auto x: dict)
       {
           unordered_map<char,char> umap;
           if(x.size()!=pattern.size())
           continue;
           int flag=1;
           for(int i=0;i<x.size();i++)
           {
               if(umap.count(pattern[i])==0)
               {
                   umap[pattern[i]]=x[i];
                //   cout<<umap[x[i]]<<"";
               }
               else if(umap[pattern[i]]!=x[i])
               {
                //   cout<<"he"<<endl;
                   flag=0;
                   break;

               }

           }
           if(flag)
           v.push_back(x);
       }
       return v;
}
