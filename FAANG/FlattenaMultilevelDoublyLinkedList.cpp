/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:


    Node* flatten(Node* head) {
        if(!head)
        return nullptr;

        Node* temp=new Node(0,NULL,NULL,NULL);
        Node* temp1=temp;
        // return temp;
        stack<Node*>s;
        s.push(head);
        while(!s.empty())
        {

            Node* nd=s.top();
            temp1->next=nd;
            nd->prev=temp1;
            temp1=temp1->next;

        s.pop();
        if(nd->next)
            s.push(nd->next);
        if(nd->child)
        {s.push(nd->child);
         nd->child=nullptr;
        }



        }
        temp= temp->next;
        temp->prev=nullptr;
        return temp;



    }
};
