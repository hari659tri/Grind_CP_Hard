class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        long long ans=0;
        vector<bool>prime(n,1);
        prime[0]=0;
        prime[1]=0;

        for(long long i=2;(long long)i*i<=n;i++){
            if(prime[i]==1){
                for(long long j=(long long)i*i;j<n;j+=i){
                    prime[j]=0;
                }
            }
        }


        for(int i=2;i<n;i++){
            if(prime[i]) ans++;
        }
       
        return ans;
    }
};