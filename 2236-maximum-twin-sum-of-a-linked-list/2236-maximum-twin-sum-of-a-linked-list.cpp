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
    int pairSum(ListNode* head) {
        
        //brute force approach...
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }

        int n=v.size();
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            int a=v[i];
            int b=v[n-i-1];
            maxi=max(maxi,(a+b));

        }
   
        return maxi;
    }
};