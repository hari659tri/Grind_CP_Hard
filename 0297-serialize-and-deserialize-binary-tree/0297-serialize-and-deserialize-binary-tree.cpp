/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        // apply level order traversal to do this 
        //data->string
        if(root==NULL) 
          return "";
        string s="";

        queue<TreeNode*>q;
        q.push(root);

         while(!q.empty()){
             TreeNode*curr=q.front();
             q.pop();

             if(curr==NULL){
                 s+="#,";
             }
             else{
               s+=to_string((curr->val))+",";
             }

             if(curr!=NULL){
                q.push(curr->left);
                q.push(curr->right);
             }

         }

         return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)
        return NULL;

        stringstream ss(data);
        string str;

          getline(ss,str,',');
          TreeNode*root=new  TreeNode(stoi(str));
          queue<TreeNode*>q;
           q.push(root);

           while(!q.empty()){
             TreeNode*node=q.front();
             q.pop();
            getline(ss,str,',');
             if(str=="#"){
                node->left=NULL;
             }
             else{
              TreeNode*newnode=new TreeNode(stoi(str));
              node->left=newnode;
              q.push(newnode);
             }
            
            getline(ss,str,',');
             if(str=="#")
               node->right=NULL;
               else{
                TreeNode*newnodex=new TreeNode(stoi(str));
                node->right=newnodex;
                q.push(newnodex);
               }
              
           }

         return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));