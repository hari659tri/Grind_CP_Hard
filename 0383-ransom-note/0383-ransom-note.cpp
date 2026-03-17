class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        // brute force 
        unordered_map<char,int>mp;
        for(auto it:magazine){
            mp[it]++;
        }
        for(auto it:ransomNote){
            mp[it]--;
        }

        for(auto it:ransomNote){
            if(mp[it]<0)
             return false;
        }

        
         return true;

    }
};