class Solution {
public:  

   bool valid(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    unordered_map<char,int>mp;
    int n=s1.size();
       for(int i=0;i<n;i++){
        mp[s1[i]]++;
        mp[s2[i]]--;
       }
      
       for(auto it:mp){
        if(it.second!=0) return false;
       }

       return true;
   }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;

        int n=words.size();
        string curr=words[0];
         ans.push_back(curr);
         for(int i=1;i<n;i++){

            if(valid(words[i],curr)==true){
              continue;
            }
            else{
                curr=words[i];
               ans.push_back(curr);
            }
         }

         return ans;
    }
};