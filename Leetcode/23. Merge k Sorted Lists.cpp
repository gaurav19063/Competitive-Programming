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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        queue<ListNode*> q;
            for(auto x:lists)
            {
                q.push(x);
            }
            while(q.size()!=1)
            {
                ListNode* l1=q.front();
                q.pop();
                ListNode*l2=q.front();
                q.pop();
                ListNode* merged_list=merge(l1,l2);
                q.push(merged_list);
            }
            return q.front();


    }
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        ListNode* new_list=new ListNode(0);
        ListNode* ptr=new_list;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                ptr->next=l1;
                l1=l1->next;
            }
            else{
                ptr->next=l2;
                l2=l2->next;
            }
            ptr=ptr->next;
        }
        while(l1)
        {
            ptr->next=l1;
            l1=l1->next;
            ptr=ptr->next;
        }
        while(l2)
        {
            ptr->next=l2;
            l2=l2->next;
            ptr=ptr->next;
        }
        return new_list->next;

    }
};
