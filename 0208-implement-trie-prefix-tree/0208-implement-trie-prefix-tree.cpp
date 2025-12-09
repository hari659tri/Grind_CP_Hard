class Trie {
public:
     struct TrieNode{
         
     bool isEnd;
     TrieNode*child[26];
     TrieNode(){
        isEnd=false;
        for(int i=0;i<26;i++){
            child[i]=NULL;        }
     }
     };

        TrieNode*root;
    Trie() {
        root=new TrieNode(); // constorctor is invoked when we are creating a new node
    }
    
    void insert(string word) {
        TrieNode*crowler=root;

        for(int i=0;i<word.size();i++){
            char ch=word[i];
            int idx=ch-'a';
            if(crowler->child[idx]==NULL){
                crowler->child[idx]=new TrieNode();
            }
            crowler=crowler->child[idx];
        }

        crowler->isEnd=true;

    }
    
    bool search(string word) {
        TrieNode*crowler=root;

        for(int i=0;i<word.size();i++){
            char ch=word[i];
            int idx=ch-'a';
            if(crowler->child[idx]==NULL){
                return false;
            }
            crowler=crowler->child[idx];
        }

       if(crowler!=NULL&&crowler->isEnd==true)
        return true;

        return false;
    }
    
    bool startsWith(string word) {
        TrieNode*crowler=root;
        int i=0;
        for(;i<word.size();i++){
            char ch=word[i];
            int idx=ch-'a';
            if(crowler->child[idx]==NULL){
                return false;
            }
            crowler=crowler->child[idx];
        }

       if(i==word.size())
         return true;

        return false;
    }

};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */