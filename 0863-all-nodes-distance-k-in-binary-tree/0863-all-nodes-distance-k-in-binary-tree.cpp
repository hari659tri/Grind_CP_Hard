/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  
   unordered_map<TreeNode*,TreeNode*>parent;

   void inordere(TreeNode* root){
     if(root==NULL) 
      return;
   
     if(root->left!=NULL)
      parent[root->left]=root;
      inordere(root->left);
      if(root->right!=NULL)
      parent[root->right]=root;
      inordere(root->right);
    }

    
    void solve(TreeNode* target,int k,vector<int>&ans){

        queue<TreeNode*>q;
        q.push(target);
        unordered_set<TreeNode*>st;
        st.insert(target);

        while(!q.empty()){
            int n=q.size();
            if(k==0)
            break;

            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                if(curr->left!=NULL&&!st.count(curr->left)){
                    st.insert(curr->left);
                    q.push(curr->left);
                }

                if(curr->right!=NULL&&!st.count(curr->right)){
                    st.insert(curr->right);
                    q.push(curr->right);
                }


                if(parent.count(curr)&&!st.count(parent[curr])){
                    st.insert(parent[curr]);
                    q.push(parent[curr]);
                    
                }

             

            }
               k--;
        }

  
  while(!q.empty()){
    ans.push_back(q.front()->val);
    q.pop();
  }


    }
  
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
         inordere(root);
         solve(target,k,ans);

         return ans;
    }
};