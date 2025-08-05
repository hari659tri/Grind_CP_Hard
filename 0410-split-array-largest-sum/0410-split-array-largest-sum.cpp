class Solution {
public:
   
    bool isPossible(vector<int> &arr,int page,int student){
       
       int noofstudnet=1;
       int cntstudent=0;
       
       int n=arr.size();
       int curr=0;
       //int store=0;
       for(int i=0;i<n;i++){
             if (arr[i] > page) return false;
          if(curr+arr[i]<=page){
             curr+=arr[i];
          }
          else{
             noofstudnet++;
             curr=arr[i];
          }
          
        
       }
       
       if(student>=noofstudnet) return true;
       
       
       return false;
   }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n=arr.size();
        if(k>n) return -1;
        
        int low=*max_element(arr.begin(),arr.end());
        
        int high=accumulate(arr.begin(),arr.end(),0);
        
        int ans=-1;
        while(low<=high){
            
            int mid=low+(high-low)/2;
            
            if(isPossible(arr,mid,k)){
                ans=mid;
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
          
            
        }
        
        return ans;
    }
    int splitArray(vector<int>& nums, int k) {
        
        return  findPages(nums,k);
    }
};