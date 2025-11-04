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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode*temp=head->next;
        ListNode*t2=dummy;
        long long sum=0;
        

        while(temp!=NULL){
           if(temp->val==0){
             ListNode*nwnode=new ListNode(sum);
             t2->next=nwnode;
             t2=nwnode;
             sum=0;
           }

           sum+=temp->val;
           temp=temp->next;
        }

        return dummy->next;
    }
};