class Solution {
public:
    
    string convertToTitle(int columnNumber) {
        
        string ans="";
        int n=columnNumber;
       

        while(n>0){
            n--;
            int rem=n%26;
             ans+=rem+'A';
            n=n/26;
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};