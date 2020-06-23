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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return nullptr;
        int nodes=0;
        ListNode* temp=head;
        while(temp)
        {
            nodes+=1;
            temp=temp->next;
        }
        if(nodes==1)
            return nullptr;
        int i=1;
        temp=head;
        int flag=0;
        while(i<nodes-n)
        {
            flag=1;
            temp=temp->next;
            i++;

        }
        if(nodes-n==0)
        {
            head=head->next;
            return head;
        }
        temp->next=temp->next->next;
        cout<<i<<flag;
       return head;
    }
};
