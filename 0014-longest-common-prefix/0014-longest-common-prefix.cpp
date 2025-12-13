class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
          
          string ans="";
        // Take first string as reference
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            bool flag=true;

            // Compare with all other strings
            for (int j = 1; j < strs.size(); j++) {
                
                if (ch!=strs[j][i]){
                    flag=false;
                    break;
                }
 
            }

            if(flag==true){
                ans+=ch;
            }
            else 
            break;
            
        }
        return  ans;// entire first string is common prefix
    }
};
