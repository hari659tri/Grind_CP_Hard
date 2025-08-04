class Solution {
public:
   
   void bfs(int r,int c,vector<vector<char>>& grid, vector<vector<int>>&vis){
       
       vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
       int delrow[]={0,-1,0,1};
       int delcol[]={-1,0,1,0};
       queue<pair<int,int>>q;
       q.push({r,c});
       
       while(!q.empty()){
           
           int r1=q.front().first;
           int c1=q.front().second;
           
           
           q.pop();
           for(int i=0;i<4;i++){
               int newr=delrow[i]+r1;
               int newc=delcol[i]+c1;
               
            if(newr<n&&newc<m&&newr>=0&&newc>=0&&!vis[newr][newc]&&grid[newr][newc]=='1'){
                   
                   vis[newr][newc]=1;
                   q.push({newr,newc});
                   
                   
               }
           }
           
       }
       
       
       
   }
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                
                if(!vis[r][c]&&grid[r][c]=='1'){
                    
                    bfs(r,c,grid,vis);
                    cnt++;
                }
            }
        }
        
        
        
        return cnt;
    }
};