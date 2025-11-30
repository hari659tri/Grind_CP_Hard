/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         
         // inorder travesal are Left Root Right...
         if(root==NULL) 
          return {};
          TreeNode*curr=root;
          vector<int>ans;

          while(curr!=NULL){

            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode*leftchild=curr->left;
                while(leftchild->right!=NULL){
                    leftchild=leftchild->right;
                }
                leftchild->right=curr;
                TreeNode*temp=curr;
                curr=curr->left;
                temp->left=NULL;

            }
          }

      return ans;

    }
};