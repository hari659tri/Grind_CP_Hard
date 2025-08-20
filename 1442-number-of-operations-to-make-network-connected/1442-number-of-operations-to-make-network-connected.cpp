class Disjoint{

  public:
    
    vector<int>rank;
    vector<int>parent;
   Disjoint(int n){

       rank.resize(n,0);
       parent.resize(n);

       for(int i=0;i<n;i++){
        parent[i]=i;
       }

   }


   int findParent(int node){

    if(parent[node]==node){
        return node;
    }

    else{

        return parent[node]=findParent(parent[node]);
    }
   }



   void unionByRank(int u,int v){

    int upar=findParent(u);
    int vpar=findParent(v);

    if(rank[upar]<rank[vpar]){
        parent[upar]=vpar;

    }
    else if(rank[upar]>rank[vpar]){
      
      parent[vpar]=upar;
    }
    else{
    parent[vpar]=upar;
    rank[upar]++;
    }
   }


};








class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        int cntExtraEdges=0; // this is the that number of required edges which is a make cycle if both co,outer 
        // belong to the same component then they have surely th conncted and count it is as extra edges 
       
          Disjoint ds(n);
        
         for(int i=0;i<connections.size();i++){

            if(ds.findParent(connections[i][0])==ds.findParent(connections[i][1])){
                 cntExtraEdges++;
            }
            else{
                ds.unionByRank(connections[i][0],connections[i][1]);
            }
         }  
         
         int noofConnectedcompo=0;

         for(int i=0;i<n;i++){
            if(ds.findParent(i)==i){
                noofConnectedcompo++;
            }
         }


        return cntExtraEdges>=noofConnectedcompo-1?noofConnectedcompo-1:-1;

    }
};