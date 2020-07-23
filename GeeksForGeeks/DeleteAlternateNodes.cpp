/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;

	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    struct Node* temp=head;
    // temp=temp->next;

    while(temp)
    {
        // if()
      if(temp->next!=NULL)
      {
        //   temp->data=temp->next->data;

          temp->next=temp->next->next;

      }
      temp=temp->next;


    }


}
