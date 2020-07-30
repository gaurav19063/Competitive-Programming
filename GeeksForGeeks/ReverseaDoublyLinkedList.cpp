
Node* reverseDLL(Node * head)
{
    //Your code here
   stack<int> st;
  Node* temp=head;
   while(head)
   {
       st.push(head->data);
       head=head->next;
   }
   head=temp;
   while(!st.empty())
   {
       temp->data=st.top();
       st.pop();
       temp=temp->next;

   }
   return head;

}
