/* a Node of the doubly linked list */


/*
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
*/
void swap(Node* a,Node* b)
{
int temp=a->data;
a->data=b->data;
b->data=temp;
}
Node* partition(Node *l, Node *h){
    //Your code goes here
    // int pivot=
    // cout<<h->next->data<<"hi";
    // cout<<l->data<<"h";
    if(l==h)
    return l;
    Node* temp=l;
    Node* temp2=l->next;
    while(temp2!=h)
    {


        if(temp2->data<l->data)
        {
            temp=temp->next;
            swap(temp,temp2);
        }
        temp2=temp2->next;


    }
    if(temp2->data<l->data)
    {
        temp=temp->next;
        swap(temp,temp2);

    }

    swap(l,temp);
    return temp;

}
