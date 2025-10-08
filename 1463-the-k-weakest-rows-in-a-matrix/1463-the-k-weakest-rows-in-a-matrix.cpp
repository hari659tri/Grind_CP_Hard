class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size();
        int m=mat[0].size();
         vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for(int i=0;i<n;i++){
            int numsolder=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==0) break;
                numsolder++;
            }

            pq.push({numsolder,i});
        }
      
      while(!pq.empty()&&k>0){
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
      }

      return ans;

    }
};