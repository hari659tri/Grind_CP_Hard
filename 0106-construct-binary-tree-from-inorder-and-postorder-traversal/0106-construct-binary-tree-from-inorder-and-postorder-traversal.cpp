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

    TreeNode*solve(vector<int>& inorder,vector<int>& postorder,int n,int m,int& idx,int s,int e){
        if(idx<0)
          return NULL;
          if(s>e)
          return NULL;

          int val=postorder[idx];
          idx--;
         TreeNode*root=new TreeNode(val);
          int id=findidx(val,inorder);

          root->right=solve(inorder,postorder,n,m,idx,id+1,e);
          root->left=solve(inorder,postorder,n,m,idx,s,id-1);
          

          return root;


    }
  
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n=inorder.size();
        int m=postorder.size();
        int idx=m-1;
        int s=0;
        int e=n-1;

        return solve(inorder,postorder,n,m,idx,s,e);


    }
};