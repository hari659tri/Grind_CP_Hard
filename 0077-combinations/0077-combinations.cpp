class Solution {
public:
    vector<vector<int>>ans;
     vector<int>temp; 
     void solve(int start,int n,int &k){

        if(k==0){
            ans.push_back(temp);
            return ;
        }


      if(start>n) return ;

      temp.push_back(start);
      k=k-1;
      solve(start+1,n,k);
      temp.pop_back();
      k=k+1;
      solve(start+1,n,k);
     }
    vector<vector<int>> combine(int n, int k) {
        
        int start=1;
        solve(start,n,k);

        return ans;

    }
};