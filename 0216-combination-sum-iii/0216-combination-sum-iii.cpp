class Solution {
public: 
    void solve( vector<vector<int>>&ans,int k,int n,int i,int size,int sum,vector<int>&temp){
         
         // base case...
         if(sum>n) return;
         
        if(size==k){
           if(sum==n){
            ans.push_back(temp);
           }
            return;
        }

        if(i==10) return;

        temp.push_back(i);
        sum+=i;
        solve(ans,k,n,i+1,size+1,sum,temp);
        temp.pop_back();
        sum-=i;
        
         solve(ans,k,n,i+1,size,sum,temp);



    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
          int i=1;
          int size=0;
          int sum=0;
          solve(ans,k,n,i,size,sum,temp);

          return ans;
    }
};