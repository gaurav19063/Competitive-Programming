/* Tree node class

struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
}; */

// Method that returns the bottom view.
void findBottomView(Node* root,map<int,map<int,int>>&m,int k,int h)
{
    if(root)
    {
        findBottomView(root->right,m,k+1,h-1);
        findBottomView(root->left,m,k-1,h-1);

      if(m.count(k)==0)
      {
          map<int,int> mp;
          mp.insert(make_pair(h,root->data));
          m.insert(make_pair(k,mp));
      }
      else
      {
          m[k].insert(make_pair(h,root->data));
      }
    }
}
vector <int> bottomView(Node *root)
{
   // Your Code Here
   map<int,map<int,int>> m;
  findBottomView(root,m,1,0);
   vector<int >v;
  for(auto x:m)
  {int i=0;
  for(auto y:x.second)
  {if(i==1)
  break;
  i++;

  v.push_back(y.second);
  }
  }
  return v;
}
