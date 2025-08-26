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
    ListNode* sortList(ListNode* head) {
        
        //brute force approach 
        if(head==NULL||head->next==NULL){
            return head;
        }

      priority_queue<int, vector<int>, greater<int>> pq;
     
      ListNode*temp=head;

       while(temp!=NULL){
        pq.push(temp->val);
        temp=temp->next;

       }
      
         temp=head;
    
        while(!pq.empty()&&temp!=NULL){
           temp->val=pq.top();
           temp=temp->next;
           pq.pop();
        }
     

      return head;



   

    }
};