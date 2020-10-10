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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        stack<ListNode*> st;
        while(slow)
        {
            st.push(slow);
            slow=slow->next;
        }
        ListNode* ptr=head;
        ListNode* ptr2;
        while(!st.empty())
        {
            ptr2=st.top();
            st.pop();
            if(ptr==ptr2||ptr2==ptr->next)
                 ptr2->next=NULL;

            else
                ptr2->next=ptr->next;
            if(ptr!=ptr2)
            ptr->next=ptr2;
            ptr=ptr2->next;
        }
    }
};
