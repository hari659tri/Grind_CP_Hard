class Solution {
public:
   static bool cmp(int&a,int&b){

    return a>b;
   }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
         priority_queue<pair<int,int>>pq;

         int n=difficulty.size();
         int m= worker.size();


           for(int i=0;i<n;i++){
            pq.push({profit[i],difficulty[i]}); // logn
           }

            sort(worker.begin(), worker.end(),cmp); // mlogm
        
        long long  total=0;

        int i=0;
        while(i<m&&!pq.empty()){
            if(pq.top().second>worker[i]) pq.pop(); // logn
            else{

           total+=pq.top().first; // O(1)
           i++;
            }
        }

        return  total;


    }
};