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
  int findidx(int e,vector<int>& inorder){
    int n=inorder.size();
    int l=0;
   while(l<n){
    if(inorder[l]==e){
        return l;
    }
    l++;
   }

    return -1;
  }
    TreeNode*solve(vector<int>& preorder,vector<int>& inorder,int preorderSize,int &preorderidx,int inorderStart,int inorderend){
        if(preorderidx>=preorderSize) 
        return NULL;

        if(inorderStart>inorderend) 
        return NULL;

        int val= preorder[preorderidx];
        preorderidx++;
        TreeNode* root=new TreeNode(val);
        int idx=findidx(val,inorder);
        root->left=solve(preorder,inorder,preorderSize,preorderidx,inorderStart,idx-1);
        root->right=solve(preorder,inorder,preorderSize,preorderidx,idx+1,inorderend);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int preorderSize=preorder.size();
        int inorderSize=inorder.size();
        int preorderidx=0;
        int inorderStart=0;
        int inorderend=inorderSize-1;

          TreeNode*root=solve(preorder,inorder,preorderSize,preorderidx,inorderStart,inorderend);


        return root;
    }
};