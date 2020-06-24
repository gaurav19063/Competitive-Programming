class Solution {
public:
    void getvalues(string st,int &id,string &status,int &time)
    { int ind1=-1,ind2=-1;
        for(int i=0;i<st.size();i++)
        {
         if(st[i]==':'&&ind1==-1)
             ind1=i;
            else if(st[i]==':'&&ind1!=-1)
                ind2=i;
        }
     id=stoi(st.substr(0,ind1));
     status=st.substr(ind1+1,ind2-ind1-1);
     time=stoi(st.substr(ind2+1,st.size()-ind2));

    }

    vector<int> exclusiveTime(int n, vector<string>& logs) {

        int id,time;
        string status;
        vector<int> v(n,0);
        int sum;
        stack<int> st;

        for(int i=0;i<logs.size();i++)
        {

            getvalues(logs[i],id,status,time);
            if(status=="end")
                time++;

           if(!st.empty())
            {
               int  fid=st.top();
                v[fid]+=time-sum;
            }
            sum=time;
            if(status=="start")
               st.push(id);
            else
             st.pop();


        }
        return v;
    }
};
