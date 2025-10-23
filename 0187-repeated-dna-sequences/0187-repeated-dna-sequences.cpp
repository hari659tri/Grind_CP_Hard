class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_set<string>seen;
        unordered_set<string>res;
        int n=s.size();
          for(int i=0;i<n-9;i++){
            string curr="";
            for(int j=i;j<10+i;j++){
              curr+=s[j];
            }

            if(seen.find(curr)!=seen.end()) res.insert(curr);
            seen.insert(curr);
          }

          vector<string>ans(res.begin(),res.end());

          return ans;
    }
};