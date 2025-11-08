class Solution {
public:
    string removeDuplicateLetters(string s) {
        
         int n=s.size();
          string ans="";
        vector<int>lastposi(26,0);
        vector<bool>tak(26,false);
        for(int i=0;i<n;i++)
        lastposi[s[i]-'a']=i;

           for(int i=0;i<n;i++){
            char ch=s[i];
            int idx=ch-'a';
            if(tak[idx]==true) continue;

            while(ans.size()>0&&ans.back()>ch&&lastposi[ans.back()-'a']>i){
                tak[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans+=s[i];
            tak[s[i]-'a']=true;
           }
        

       return ans;



    }
};