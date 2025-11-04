class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26,0);
        for(auto it:tasks){
            v[it-'A']++;

        }
         int time=0;
        priority_queue<int>pq;

         for(auto it:v){
           if(it>0)
            pq.push(it);
         }

         while(!pq.empty()){
            vector<int>temp;
            for(int i=1;i<=n+1;i++){
             if(!pq.empty()){
                int f=pq.top();
                pq.pop();
                f--;
                temp.push_back(f);
             }

            }

            for(int i=0;i<temp.size();i++){
                if(temp[i]>0) pq.push(temp[i]);
            }

            if(pq.empty()){
               int a=(int)temp.size();
               time+=a;
            }
            else{
              time+=(n+1);
            }
         }

         return time;

}
};