class Solution {
public:
    int scoreOfString(string s) {
        
    unordered_map<char,int>mp;
    for(auto it:s){
        mp[it]=(int)it;
    }
     int sum=0;
     int n=s.size();
     for(int i=0;i<n-1;i++){
        int a=mp[s[i]];
        int b=mp[s[i+1]];
        sum+=abs(a-b);
     }

     return sum;
    }
};