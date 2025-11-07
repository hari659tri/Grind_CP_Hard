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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;

        vector<int>vec;

        while(list1!=NULL||list2!=NULL){

            if(list1!=NULL){ 
               vec.push_back(list1->val);
                list1=list1->next;
                }

            if(list2!=NULL) {
                vec.push_back(list2->val);
                list2=list2->next;
                }
        }


        int n=vec.size();
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
         
            ListNode* nnode= new ListNode(vec[i]);
            temp->next=nnode;
            temp=nnode;
        }
       
        return dummy->next;

    }
};