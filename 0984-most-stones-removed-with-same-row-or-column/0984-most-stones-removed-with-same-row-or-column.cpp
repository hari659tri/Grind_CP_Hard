 class DisjointSet{

 vector<int>rank,parent;
 public:
 DisjointSet(int n){
    rank.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
   
 }
  
 int findUPar(int node){
    if(node==parent[node]){
        return node;
    }
    return parent[node]=findUPar(parent[node]);
   }

   void unionByRank(int u,int v){
    int ulp_u=findUPar(u);
    int ulp_v=findUPar(v);
    if(ulp_u==ulp_v) return;
    if(rank[ulp_u]<rank[ulp_v]){
     parent[ulp_u]=ulp_v;
    }
    else if(rank[ulp_v]<rank[ulp_u]){
        parent[ulp_v]=ulp_u;
    }
    else{
        parent[ulp_v]=ulp_u;
        rank[ulp_u]++;
    }
   }


};

 
 class Solution {
 public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int maxRow=0;
        int maxCol=0;
         for(auto it:stones){
            maxRow=max(maxRow,it[0]);
            maxCol=max(maxCol,it[1]);
         }

         DisjointSet ds(maxRow+maxCol+1);
         unordered_map<int,int>mp;


         for(auto it:stones){
            int nodeRow=it[0];
            int nodeCol=it[1]+maxRow+1;
            ds.unionByRank(nodeRow,nodeCol);
           mp[nodeRow]=1;
           mp[nodeCol]=1;

         }
        
         int cnt=0;

         for(auto it:mp){
            if(ds.findUPar(it.first)==it.first){
             cnt++;
            }
         }
     
      return n-cnt;

    }
};