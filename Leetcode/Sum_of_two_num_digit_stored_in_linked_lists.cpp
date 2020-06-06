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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* p=l1;
      ListNode*  q=l2;
        ListNode* r=NULL;
        int carry=0;
        while(p->next!=NULL && q->next!=NULL)
        {
            // cout<<p->val<<endl;
            // p=p->next;
            // p->data+=q->data
                int sum=p->val+q->val+carry;

            int digit=sum%10;
            carry=sum/10;
            p->val=digit;
            p=p->next;
            q=q->next;

        }
        if(p->next==NULL)
        {
            int sum=p->val+q->val+carry;
               // cout<<sum<<endl;
            int digit=sum%10;
            carry=sum/10;
            p->val=digit;
            q=q->next;




            while(q!=NULL)
            {
                int sum=q->val+carry;
                int digit=sum%10;
                // carry=sum/10;
                carry=sum/10;
                q->val=digit;
                p->next=q;
                p=q;
                q=q->next;
            }
            if(carry)
            {
                ListNode* node= new ListNode(carry);
                p->next=node;
            }

        }
        else if(q->next==NULL)
        {
            int sum=p->val+q->val+carry;
            int digit=sum%10;
            carry=sum/10;
            p->val=digit;
            cout<<(p->next!=NULL);
            while(p->next!=NULL)
            {
                p=p->next;

                int sum=p->val+carry;
                int digit=sum%10;
                carry=sum/10;
                p->val=digit;
            }




            if(carry)
            {
                cout<<carry;
                ListNode* node=new ListNode(carry);
                p->next=node;
            }

        }


        return l1;
    }


};
