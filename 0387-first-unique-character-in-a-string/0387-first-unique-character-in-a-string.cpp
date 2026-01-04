class Solution {
public:
    int firstUniqChar(string s) {
        // brute force approchah

        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<s.size();i++){
           mp[s[i]].first=i;
           mp[s[i]].second++;
        }

        for(auto &it:s){
            if(mp[it].second==1)
            return mp[it].first;
        }

        return -1;
    }
};