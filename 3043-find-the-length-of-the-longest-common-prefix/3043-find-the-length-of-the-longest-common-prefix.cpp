struct TrieNode{
  
 TrieNode*child[10];

  TrieNode(){
    for(int i=0;i<10;i++){
    child[i]=NULL;
   }

  }
   
  
};

class Solution {
public:
   
    void insert(int val,TrieNode*root){
        string s=to_string(val);
        TrieNode*crowl=root;

        for(auto it:s){
            int idx=it-'0';
             
             if(crowl->child[idx]==NULL){
                crowl->child[idx]=new TrieNode();
               
             }
              crowl=crowl->child[idx];
        }
    }

    int search(int val,TrieNode*root){
        string s=to_string(val);
        TrieNode*crowl=root;
        int len=0;

        for(auto it:s){
            int idx=it-'0';

            if(crowl->child[idx]!=NULL){
                len++;
                crowl=crowl->child[idx];
            }
            else{
                break;
            }
        }
        return len;
    }
     
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        TrieNode*root=new TrieNode();
        int ans=0;
        for(auto it:arr1){
          insert(it,root);
        }

        for(auto it:arr2){
            ans=max(ans,search(it,root));
        }

        return ans;
    }
};