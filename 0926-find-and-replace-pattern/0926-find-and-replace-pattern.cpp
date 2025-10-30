class Solution { 
public:  
     bool ismorphic(string str,string pattern){
        if(str.size()!=pattern.size()) return false;
        int n=str.size();
        unordered_map<char,char>mpsp,mpps;


        for(int i=0;i<n;i++){
            char ch1=str[i];
            char ch2=pattern[i];

            if(mpsp.find(ch1)!=mpsp.end()&&mpsp[ch1]!=ch2) return false;

            if(mpps.find(ch2)!=mpps.end()&&mpps[ch2]!=ch1) return false;

            mpsp[ch1]=ch2;
            mpps[ch2]=ch1;
            
        }

        return true;
     }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    // same isomorphic string concept here used ensure bijective function to ensure the isomorphic strign 
        vector<string>ans;
       for(auto it:words){
       if(ismorphic(it,pattern)){
        ans.push_back(it);
       }
       }

       return ans;
    }
};