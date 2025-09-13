class Solution {
public:
 
 vector<vector<int>>dir{{0,-1},{-1,0},{0,1},{1,0}};
  bool find(int i,int j,int idx,string&word,vector<vector<char>>& board,int m,int n){

     if(idx==word.size()) return true;
    if(i<0||i>=m||j<0||j>=n||board[i][j]=='#'){
        return false;
    }

    if(board[i][j]!=word[idx]){
        
        return false;
    }
    char temp=board[i][j];
   board[i][j]='#';
        //left
        if(find(i,j-1,idx+1,word,board,m,n)) return true;

        // right
        if(find(i,j+1,idx+1,word,board,m,n)) return true;
        
        // down 
        if(find(i+1,j,idx+1,word,board,m,n)) return true;
        // up
        if(find(i-1,j,idx+1,word,board,m,n)) return true;
    
       board[i][j]=temp;

       return false;
 
  }

    bool exist(vector<vector<char>>& board, string word) {
        
        int m=board.size();
        int n=board[0].size();
        int idx=0;
        int k=word.size();
       
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[0]&&find(i,j,0,word,board,m,n)){
                return true;
            }
        }

       }


        return false;

    }
};