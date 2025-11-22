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
    int widthOfBinaryTree(TreeNode* root) {
        
        
        int ans=-1e9;
      queue<pair<TreeNode*,long long >>q;
      q.push({root,0});

      while(!q.empty()){
        int n=q.size();
        int l=q.front().second;
        int r=q.back().second;
        ans=max(ans,r-l+1);

        for(int i=0;i<n;i++){
            auto curr=q.front();
            long long  idx=curr.second;
            TreeNode*no=curr.first;
            q.pop();

            if(no->left!=NULL){
             q.push({no->left,(unsigned long long)2*idx+1});

          }

            if(no->right!=NULL){
                q.push({no->right,(unsigned long long)2*idx+2});
            }
        }
      }


     return ans;
    }
};