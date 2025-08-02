class Solution {
public:

    void dfs(vector<bool>&vis,vector<int>*adj,int node){

        vis[node]=true;

        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(vis,adj,it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {

       //  simply this question will be based on the count the number of 
      //components based on traversal of graph z 
        
        int n=isConnected.size();
        
        vector<int>adj[n];

          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(isConnected[i][j]){
                adj[i].push_back(j);
                adj[j].push_back(i);
               }
            }
          }
        

       int countOfComponent=0;
        vector<bool>vis(n,false);
      
        for(int i=0;i<n;i++){
            if(!vis[i]){
                countOfComponent++;
                dfs(vis,adj,i);
            }
        }

    
     return countOfComponent;

    }
};