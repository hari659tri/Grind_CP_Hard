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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int top=0;
        int down=m-1;
        int left=0;
        int right=n-1;
        int dir=0;
        /*
        dir==0(left->right going)
        dir==1(top->down going)
        dir==2(right->left)
        dir==3(down->top)
        */
         
         while(top<=down&&left<=right){
              
            if(dir==0){
                //dir==0(left->right going)
                // row(top) is fixed 
                for(int i=left;i<=right&&head!=nullptr;i++){
                  ans[top][i]=head->val;
                  head=head->next;
                }  
       
            top++;
            }
    
       
          if(dir==1){
            // dir==1(top->down going)
            // colomun is fixed means (right)...
          for(int i=top;i<=down&&(head!=nullptr);i++){
           ans[i][right]=head->val;
            head=head->next;
          }
          right--;
          }

          if(dir==2){
            // dir==2(right->left)
            // fixed row(down)
            for(int i=right;i>=left&&head!=nullptr;i--){
              ans[down][i]=head->val;
              head=head->next;
            }
            down--;

          }

          if(dir==3){
         //dir==3(down->top)
         //coloumn(left) fixed
         for(int i=down;i>=top&&head!=nullptr;i--){
             ans[i][left]=head->val;
              head=head->next;
         }
          left++;
          }
          dir++;
          if(dir==4)
           dir=0;


        }
       
       return ans;

    }
};