#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void printLinkedList(Node* head)
{
    while(head)
    {cout<<head->data<<" ";
    head=head->next;
    }
}
bool isLoop(Node* head)
{
    if(!head||!head->next)
    return 0;
    Node* ptr1=head;
    Node* ptr2=head;
    while(ptr1&&ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
        if(ptr1==ptr2)
        return 1;
    }
    return 0;
}
int main() {
    // cout<<"Hello World!";
    Node* head=NULL;
    Node* temp=NULL;

    int n;
    cin>>n;
    Node* temp2=NULL;
    while(n--)
    {
        int d;
        cin>>d;
        if(n==6)
        {
            temp2=temp;
        }

        if(!head)
        {
           temp=new Node(d);
            head=temp;

        }
        // temp
        else{
            temp->next=new Node(d);
            temp=temp->next;
        }

    }
    // cout<<temp->data<<" "<<temp2->data<<endl;
    temp->next=temp2;

    // printLinkedList(head);
    cout<<isLoop(head);

}
