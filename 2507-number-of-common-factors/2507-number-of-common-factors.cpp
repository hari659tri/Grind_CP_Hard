class Solution {
public:
    int commonFactors(int a, int b) {
        
        unordered_map<int,int>mp;
        int maxi=max(a,b);
         int cnt=0;
        for(int i=1;i<=maxi;i++){
            if(a%i==0) mp[i]=i;
            if(b%i==0) mp[i]=i;
             
             if(mp[i]!=0&&(a%mp[i]==0&&b%mp[i]==0)) cnt++;
        }

        return cnt;
    }
};