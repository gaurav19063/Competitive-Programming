/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if(!head)
           return nullptr;
        Node* head1=head;
        vector<Node*> v;
        Node* root=nullptr;
        Node* root_temp=nullptr;
        int i=0;
        map<Node*,int> m;
        while(head)
        {
            m.insert(make_pair(head,i));
          if(i==0)
          {
        root=new Node(head->val);
           root_temp=root;

          }
            else
            {
        root_temp->next=new Node(head->val);
            root_temp=root_temp->next;

            }
            i++;



            v.push_back(root_temp);
            head=head->next;
        }
        root_temp=root;
        i=0;
          while(head1)
            {
               if(head1->random!=NULL)

              {
                  int index=m[head1->random];
                  root_temp->random=v[index];

              }
              head1=head1->next;
              root_temp=root_temp->next;


            }


    return root;
    }


};
