class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    
        // here we can use the variable sliding window...
        // int i=0;
        // int j=0;
        // int n=nums.size();
        // unordered_map<int,bool>mp;
        // while(j<n){

        //     while(abs(i-j)>k){
        //         i++;
                  
        //     }
           
        //    if(mp[nums[j]]){
        //     if(abs(i-j)<=k&&i!=j) 
        //        return true;
        //    }
             
            
        //     if(nums[i]==nums[j]&&i!=j){
        //         return true;
        //     }

        //     mp[nums[j]]=true;
        //     j++;
          
        // }
    
 
        //  return false;
    
       
         int n=nums.size();
         int l=0;
         int r=0;  
         unordered_set<int>st;

         // you need to return true when the element is in that range of given and then return true if element in not 
         // in the range 

         while(r<n){
           
           if(r-l>k){
             st.erase(nums[l]);
             l++;
             
           }

           if(st.count(nums[r])&&l!=r) 
             return true;

           st.insert(nums[r]);
            r++;

         }


        
         return false;



    }
};