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
    bool isPalindrome(ListNode* head) {
        if(!head)
            return 1;
        ListNode* slow,*fast,*mid;
            slow=fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        mid=slow;
        ListNode* prev=NULL;
        while(mid)
        {

            ListNode* temp=mid->next;
            temp=mid->next;
            mid->next=prev;
            prev=mid;
            mid=temp;

        }
        while(head&&prev)
        {
            if(head->val!=prev->val)
                return 0;
            head=head->next;
            prev=prev->next;
        }
        return 1;
    }
};
