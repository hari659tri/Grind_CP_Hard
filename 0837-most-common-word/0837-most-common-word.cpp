class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char &ch:paragraph){
            if(ispunct(ch)) 
             ch=' ';

        }
        
        transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);

        stringstream ss(paragraph);
        string word;
        unordered_map<string,int>mp;
        while(ss>>word){
             mp[word]++;
        }

        unordered_set<string>st(banned.begin(),banned.end());

        string ans="";
        int a=INT_MIN;
        for(auto it:mp){
            string s=it.first;
            int x=it.second;
            if(st.find(s)==st.end()&&a<x){
                ans=s;
                a=x;
            }
        }

        return ans;

    }
};