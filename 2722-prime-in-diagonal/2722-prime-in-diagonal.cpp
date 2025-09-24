class Solution {
public:
     
     bool prime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return false;
        }

        return true;
     }
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int maxi=0;
        int n=nums.size();  // number of rows 
        for(int i=0;i<n;i++){
            if(prime(nums[i][i])){
                maxi=max(maxi,nums[i][i]);
            }
            if(prime(nums[i][n-i-1])){
                maxi=max(maxi,nums[i][n-i-1]);
            }
        }
        return maxi;
    }
};