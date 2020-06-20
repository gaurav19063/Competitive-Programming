/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void findLevelOrder(Node* root,map<int,vector<int>> &m,int k)

{
    if(root==nullptr)
    {   if(m.count(k)>0)
        m[k].push_back(-1);
        else
        {
            vector<int> v;
            v.push_back(-1);
            m.insert(make_pair(k,v));
        }
    }
    else
    {
        if(m.count(k)>0)
        m[k].push_back(root->data);
        else
        {
            vector<int> v;
            v.push_back(root->data);
            m.insert(make_pair(k,v));

        }
        findLevelOrder(root->left,m,k+1);
        findLevelOrder(root->right,m,k+1);

    }
}

void printSpiral(Node *root)
{
    //Your code here
    map<int ,vector<int>> m;
    findLevelOrder(root,m,1);
    int i=0;
    for(auto x:m)
    {
        i++;
        if(i&1)

        { for(auto it=x.second.rbegin();it<x.second.rend();it++)
        if(*it!=-1)
            cout<<*it<<" ";

        }
        else{
         for(auto y: x.second)
         if(y!=-1)
            cout<<y<<" ";
        }

    }

}
