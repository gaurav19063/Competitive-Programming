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
    ListNode* swapPairs(ListNode* head) {
        ListNode* a,*b,*c,*temp;
        // a=head;
        if(!head||!head->next)
            return head;
       if(head->next)
       {


           b=head;
           c=head->next;
           head=c;
           b->next=c->next;
           c->next=b;
       }
        temp=head;
        // return temp;


       a=b;
        while(1)
        {   b=a->next;
            if(b==nullptr||b->next==nullptr)
                return temp;

            c=b->next;
         b->next=c->next;
         c->next=b;
         a->next=c;
//
         a=b;


        }
        return temp;
    }
};
