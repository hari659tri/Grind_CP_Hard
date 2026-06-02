class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        string ans="";
        string s=strs[0];
        int n=s.size();
        int m=strs.size();

        for(int i=0;i<n;i++){
             char ch=s[i];
            for(int j=1;j<m;j++){
           
               if(i==n||ch!=strs[j][i]) 
                  return ans;
            }

            ans+=ch;
        }

        return ans;
    }
};