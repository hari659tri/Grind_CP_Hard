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
        // brute force approach 
        vector<int>vec;
        int n=lists.size();
        for(int i=0;i<n;i++){
            ListNode*temp=lists[i];
            while(temp!=NULL){
                vec.push_back(temp->val);
                temp=temp->next;
            }
        }


        ListNode*head=new ListNode(-1);
        ListNode*dummy=head;
        sort(vec.begin(),vec.end());

        int m=vec.size();

        for(int i=0;i<m;i++){
            ListNode*temp=new ListNode(vec[i]);
            head->next=temp;
            head=temp;
        }

        return dummy->next;
        
    }
};