
//User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
void addOne(Node* head, int &carry)
{
    if(head==NULL)
    carry=1;
    else
    {
        addOne(head->next,carry);
        int data=head->data+carry;
        head->data=data%10;
        carry=data/10;

    }
}

Node* addOne(Node *head)
{

    int carry=0;
    addOne(head,carry);
    if(carry)
  {  Node* nd =new Node(carry);
    nd->next=head;
    head=nd;}
    return head;
}
