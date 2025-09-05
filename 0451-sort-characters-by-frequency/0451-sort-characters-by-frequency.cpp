class Solution {
public:
    string frequencySort(string s) {
       
       priority_queue<pair<int,char>>pq;
       unordered_map<char,int>mp;
         string ans="";
         for(auto it:s){
            mp[it]++;
         }

         for(auto it:mp){
            pq.push({it.second,it.first});
         }

         while(!pq.empty()){
           int freq=pq.top().first;
           char ch=pq.top().second;
           for(int i=1;i<=freq;i++)
             ans=ans+(ch);
          pq.pop();
          
         }
   
       return ans;

  


    }
};