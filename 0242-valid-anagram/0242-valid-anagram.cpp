class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int m=t.size();
        
        unordered_map<char,int>mp;
        int n=s.size();

        if(m!=n)  
           return false;

        for(int i=0;i<n;i++){
         mp[s[i]]++;
         mp[t[i]]--;
        }
       

       for(auto it:s){
          if(mp[it]!=0) 
            return false;
       }

       return true;

    }
};