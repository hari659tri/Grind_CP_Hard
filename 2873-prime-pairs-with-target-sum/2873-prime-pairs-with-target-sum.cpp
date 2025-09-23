class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        vector<int>prime(n+1,1);
        prime[0]=prime[1]=0;

        for(int i=2;i<=sqrt(n);i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }

        // because we got prime array in sorted used two ponter approach 
        
         int start=1;
         int end=n;
         if(n==1) return {};

          while(start<=end){
            while(!prime[start]) start++;

            while(!prime[end]) end--;
            if(start>end) return ans;

            if(start+end==n){
                ans.push_back({start,end});
                start++;
                end--;

            }
            else if(start+end>n){
               end--;
            }
            else{
          start++;
            }
          }

         return ans;
    }
};