class DisjointSet{ // pascal case

    public:
    vector<int>parent,rank;
    DisjointSet(int n){
        parent.resize(n);
        rank.resize(n,0);

        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }

    //gives us ultimate parent or boss of the component or group 
   
    int findPar(int node){
        if(node==parent[node]) return node;

        return parent[node]=findPar(parent[node]);  // apply a path compression techniques

    }

    void  unionByRank(int u,int v){

       int ulp_u=findPar(u);
       int ulp_v=findPar(v);

       if(ulp_u==ulp_v) return ; //if they are belong to the same component

       if(rank[ulp_u]<rank[ulp_v]){
        parent[ulp_u]=ulp_v;
       }
       else if(rank[ulp_u]>rank[ulp_v]){
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
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        DisjointSet ds(n);

        int cntExtraEdges=0; // camel case include a best practices 

        for(auto it:connections){
            int u=it[0];
            int v=it[1];

            if(ds.findPar(u)==ds.findPar(v)){
                cntExtraEdges++;
            }
            else{
                ds.unionByRank(u,v);
            }
        }

       
       int numberOfConnectedCmp=0;
       for(int i=0;i<n;i++){
        if(ds.parent[i]==i){
            numberOfConnectedCmp++;
        }
       }
       
       int ans=numberOfConnectedCmp-1;
    
     return cntExtraEdges>=ans?ans:-1;
       

    }
};