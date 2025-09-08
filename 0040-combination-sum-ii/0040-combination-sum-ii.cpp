class Solution {
public: 

    void solve(vector<vector<int>>&ans,int n, vector<int>&temp,vector<int>& candidates,int target,int idx){ 
     
       
        if(target==0){
            ans.push_back(temp);
              return;
            }
       

      
       
       for(int i=idx;i<n;i++){
         
         if(i>idx&&candidates[i]==candidates[i-1]) continue;

         if(target<candidates[i]) break;
           
            temp.push_back(candidates[i]);
            solve(ans,n,temp,candidates, target-candidates[i],i+1);
            temp.pop_back();
        
       }

        return;
    }  

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         sort( candidates.begin(),candidates.end());
         vector<int>temp;
         int n= candidates.size();
         solve(ans,n,temp,candidates,target,0);
         return ans;
    }
};