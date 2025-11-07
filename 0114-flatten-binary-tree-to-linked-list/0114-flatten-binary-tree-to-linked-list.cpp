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
    void pre(TreeNode* root,vector<int>&preorder){
        if(!root) return ;
        preorder.push_back(root->val);
        pre(root->left,preorder);
        pre(root->right,preorder);
        return;

    } 
    void flatten(TreeNode* root) {

        if(root==NULL) return;
         TreeNode*temp=root;
        vector<int>preorder;
        pre(root,preorder);
        int n=preorder.size();

        for(int i=1;i<n;i++){
            TreeNode*nnode=new TreeNode(preorder[i]);
            temp->left=NULL;
            temp->right=nnode;
            temp=nnode;
        }

    
        
    }
};