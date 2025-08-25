/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
 public:
    ListNode *detectCycle(ListNode *head) {
        
        // unordered_map<ListNode*,bool>mp;
        // ListNode*temp=head;

        // while(temp!=NULL){

        //     if(mp.find(temp)!=mp.end()){
        //           return temp;
        //     }

        //         mp[temp]=true;
        //         temp=temp->next;
        // }

        // return NULL;

        // time complexity O(n)
        // space complexity O(n) storing all nodes address

     
      ListNode*slow=head;

      ListNode *fast=head;
     bool iscycle=false;
       while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;
            while(slow!=fast){
             slow=slow->next;
             fast=fast->next;

            }
            return slow;

        }
       }

       
      


  return NULL;
    }
};