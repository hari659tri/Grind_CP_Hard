class Solution {
public:
    string frequencySort(string s) {
       
       priority_queue<pair<int,char>>pq;
       unordered_map<char,int>mp;
         string ans;
         for(auto it:s){
            mp[it]++;
         }

         for(auto it:mp){
            pq.push({it.second,it.first});
         }

         while(!pq.empty()){
           int freq=pq.top().first;
           char ch=pq.top().second;
            for (int i = 0; i < freq; i++) {
            ans.push_back(ch); // add ch one by one
}
             pq.pop();
          
         }
   
       return ans;

  
     // time complexity O(N)
     //space complexity o(n)+O(n)due to taking a extra map each time and a priority queue each time to get the first max element then second max then third max show on then in this type problem used a max heap data structure.

    }
};