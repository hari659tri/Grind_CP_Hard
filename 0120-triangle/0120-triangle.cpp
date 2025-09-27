class Solution {
public:
    
    int solve(vector<vector<int>>& triangle,int row,int col,int m, vector<vector<int>>&dp){

        if(row==m){
            return dp[row][col]=triangle[row][col];
        }
        if(dp[row][col]!=-1e5) return dp[row][col];

       int  ans=triangle[row][col]+min(solve(triangle,row+1,col,m,dp),solve(triangle,row+1,col+1,m,dp));
       return dp[row][col]=ans;
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        
        // we are go to memoized this solution to it number of changing parameters 2 show 2 d array will required 
        int row=0;
        int col=0;
        int n= triangle.size();
        
        // number of row =maximum number of column are prsented 
        //so...
        vector<vector<int>>dp(n,vector<int>(n,-1e5));
       
        int ans= solve(triangle,row,col,n-1,dp);

        return ans;
    }
};