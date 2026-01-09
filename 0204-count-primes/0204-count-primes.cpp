class Solution {
public:
    int countPrimes(int n) {

        vector<bool>p(n+1,1);
        int ans=0;
        p[0]=0;
        p[1]=0;

        for(int i=2;i<=sqrt(n);i++){
            if(p[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    p[j]=0;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(p[i]==1) 
              ans++;
        }

        return ans;
        
    }
};