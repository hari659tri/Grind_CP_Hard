class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        int n=pattern.size();
        int cntword=0;
        vector<string>vec;
        while(getline(ss,word,' ')){
            vec.push_back(word);
            cntword++;
        }

        if(cntword!=n) return false;

       unordered_map<string,char>mp;
       unordered_set<char>st;
       for(int i=0;i<n;i++){
        string str=vec[i];
        char ch=pattern[i];
        if(mp.find(str)==mp.end()&&st.find(ch)==st.end()){
           mp[str]=ch;
           st.insert(ch);
        }
        else if(mp[str]!=ch) return false;

       }
      
       
       return true;


    }
};