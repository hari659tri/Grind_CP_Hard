class Solution {
public:
    int romanToInt(string s) {
        
        // simple and best approach is that if the smaller number is before the large one then subtract the smaller one to get the corret value 
        // example 
        //CM=900 how M=1000 and c=100 so cm=1000-100=900
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        size_t  n=s.size();
        int ans=0;
        for(size_t i=0;i<n;i++){
            int curr=mp[s[i]];
            int nxt=(i+1==n?0:mp[s[i+1]]);
          if(curr<nxt){
           ans-=(curr);
          }else{
            ans+=curr;
          }

        }

        return ans;
    }
};