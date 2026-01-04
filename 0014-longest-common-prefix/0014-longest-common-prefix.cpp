class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        int m=strs[0].size();

        for(int i=0;i<m;i++){
            char ch=strs[0][i];
            bool flag=true;
            for(int j=1;j<n;j++){
               if(ch!=strs[j][i]){
                flag=false;
                break;
               }
            }
           
           if(flag==true)
              ans+=ch;
        }

        return ans;
    }
};