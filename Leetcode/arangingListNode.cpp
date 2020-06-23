/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* root) {
  	ListNode* odd=NULL;
ListNode* even=NULL;
	ListNode* odd_temp=NULL;
	ListNode* even_temp=NULL;
	int flag1=0;
	int flag2=0;
	ListNode* nd;
    int i=0;

while(root)
{ ListNode* temp=root;
root=root->next;
temp->next=nullptr;
    if(i==0)
    {

        even=temp;
        even_temp=even;
    }
    else if(i==1)
    {

        odd=temp;
        odd_temp=odd;
    }
    else if(i&1)
    {


        odd_temp->next=temp;
        odd_temp=odd_temp->next;

    }
    else{
 even_temp->next=temp;
 even_temp=even_temp->next;
    }
    i++;
}
        if(even_temp)
even_temp->next=odd;
        else even=nullptr;
return even;


    }
};
