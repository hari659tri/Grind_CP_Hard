class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // process first k size window
         deque<int>dq;
         vector<int> ans;
        for(int i=0;i<k;i++){
       
           while(!dq.empty()&&nums[i]>=nums[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
           
        }

        // store the answer of first k size procesed window...
   
       ans.push_back(nums[dq.front()]);


      // procees rest of window's

      for(int i=k;i<nums.size();i++){
        // remove out of window  element
        if(i-dq.front()>=k){
            dq.pop_front();
        }

        // again repeate the same step for the insert element 

        while(!dq.empty()&&nums[i]>=nums[dq.back()]){
            dq.pop_back();
        }
          dq.push_back(i);
           

        // store the answer according to the finding
        ans.push_back(nums[dq.front()]);
      }
       

     return ans;
         
    }
};