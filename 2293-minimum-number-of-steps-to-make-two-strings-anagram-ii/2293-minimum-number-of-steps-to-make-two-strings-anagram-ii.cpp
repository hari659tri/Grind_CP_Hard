class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1, mp2;
        int n = s.size();
        int m = t.size();

        // count frequency of both strings
        for(int i=0; i<n; i++) mp1[s[i]]++;
        for(int j=0; j<m; j++) mp2[t[j]]++;

        int ans = 0;

        // count chars present in s but not in t
        // for(auto &it : mp1){
        //     char ch = it.first;
        //     if(mp2[ch] == 0){
        //         ans += mp1[ch];
        //     }
        // }

        // count chars present in t but not in s
        // for(auto &it : mp2){
        //     char ch = it.first;
        //     if(mp1[ch] == 0){
        //         ans += mp2[ch];
        //     }
        // }

        
        // above logic of my code will fail when we have an a duplicate characters...
        // so add the frequency diffrence times 
        unordered_set<char>st;
        for(auto &it:mp1)st.insert(it.first);
        for(auto&it:mp2) st.insert(it.first);

        for(auto it:st){
            ans+=abs(mp1[it]-mp2[it]);
        }
       

       return ans;
    }
};
