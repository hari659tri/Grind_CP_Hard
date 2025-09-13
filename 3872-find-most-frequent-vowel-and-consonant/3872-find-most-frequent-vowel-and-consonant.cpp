class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;

        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<int,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
         mp[s[i]]++;
        }

        int maxv=0;
        int maxc=0;
        for(auto it:mp){
            if(isVowel(it.first)){
                maxv=max(maxv,it.second);
            }
            else{
                maxc=max(maxc,it.second);
            }
        }

        return (maxv+maxc);
    }
};