class Solution {
public:
    vector<int> minOperations(string boxes) {
         vector<int>ans;
         int n=boxes.size();
         int cnt=0;
         for(int i=0;i<n;i++){
            int idx=i;
             cnt=0;
            for(int j=0;j<n;j++){
              if(boxes[j]=='1')
              cnt+=abs(j-idx);
            }
            ans.push_back(cnt);
         }

         return ans;
    }
};