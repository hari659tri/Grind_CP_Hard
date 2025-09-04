class Solution {
public:
    bool vaildParenthesis(string &curr) {

        int cnt=0;
        for(auto it:curr){
            if(it=='('){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
            if(cnt<0) return false;
        }

        return cnt == 0 ? true : false;
    }

    void solve(vector<string>& ans, int n, string &curr) {

        if (curr.size() == 2*n) {
            if (vaildParenthesis(curr))
                ans.push_back(curr);
            return;
        }

        curr.push_back('(');
        solve(ans, n, curr);
        curr.pop_back();
        curr.push_back(')');
        solve(ans, n, curr);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {

        vector<string> ans;
          string curr="";
        solve(ans,  n, curr);
        return ans;
    }
};