class Solution {
public:
    vector<string> uncommonFromSentences(string A_s, string B_s) {
//         Method1
//         unordered_map<string,int> umap;
//         char A[100000],B[100000];
//         // if()
//         strcpy(A,A_s.c_str());
//         strcpy(B,B_s.c_str());
//         char* token=strtok(A," " );
//         while(token)
//         {

//             umap[token]+=1;
//              token=strtok(NULL," ");
//         }
//         token=strtok(B," ");
//         while(token)
//         {

//             umap[token]+=1;
//             token=strtok(NULL," ");
//         }
//         vector<string> ans;
//         for(auto x:umap)
//         {
//             if(x.second==1)
//                 ans.push_back(x.first);

//         }
//         return ans;
        unordered_map<string,int> umap;
        string word;
        istringstream iss(A_s);
        while(iss>>word)
        {
            umap[word]+=1;
        }
        istringstream  iss1(B_s);
        while( iss1>>word)
        {
            umap[word]+=1;
        }
        vector<string> ans;
        for(auto x:umap)
        {
            if(x.second==1)
                ans.push_back(x.first);
        }
        return ans;
    }
};
