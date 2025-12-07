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
    void s(TreeNode* root,vector<int>&inorder){
        if(root==NULL)
           return;

           s(root->left,inorder);
           inorder.push_back(root->val);
           s(root->right,inorder);

    }
    void s2(TreeNode* &root,vector<int>&inorder,int &i){

        if(root==NULL) 
          return;

          s2(root->left,inorder,i);
          if(root->val!=inorder[i]&&i<inorder.size()){
            root->val=inorder[i];
            i++;
          }
          else{
            i++;
          }

          s2(root->right,inorder,i);

    }
    void recoverTree(TreeNode* root) {
        vector<int>inorder;
        s(root,inorder);
        sort(inorder.begin(),inorder.end());
        int x=0;
        s2(root,inorder,x);

    }
};