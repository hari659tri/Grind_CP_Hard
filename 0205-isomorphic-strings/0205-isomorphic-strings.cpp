class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /// to ensure it is a isomorphic string we are going to ensure it is both that means one to one
        //and onto...
        if(s.size()!=t.size()) return false;
        unordered_map<char,char>mpst;
        unordered_map<char,char>mpts;
        int n=s.size();

        for(int i=0;i<n;i++){
            char ch1=s[i];
            char ch2=t[i];
            // s-->t mapping 
            if(mpst.find(ch1)!=mpst.end()&&mpst[ch1]!=ch2) return false;

           // t-->s mapping we are going to check
            
            if(mpts.find(ch2)!=mpts.end()&&mpts[ch2]!=ch1) return false;

            mpst[ch1]=ch2;
            mpts[ch2]=ch1;
        }

        return true;

    } 
};