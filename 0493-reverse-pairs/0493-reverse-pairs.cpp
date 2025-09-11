class Solution {
public:
  int cnt=0;
   void merge(vector<int>&nums,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;

    while(left<=mid&&right<=high){
        if(nums[left]<=nums[right]){
          temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }

    
     for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
     }
    

   }
  void countPairs(vector<int>&nums,int low,int mid,int high){

    
    int j=mid+1;
    for(int i=low;i<=mid;i++){
      while(j<=high&&nums[i]>(long long)2*nums[j]){
        j++;
         
    }
    cnt+=(j-(mid+1));
   
    }
  }

  void mergeSort(vector<int>& nums,int low ,int high){
     
     if(low>=high) return;

     int mid=low+(high-low)/2;
     mergeSort(nums,low,mid);
     mergeSort(nums,mid+1,high);
     countPairs(nums,low,mid,high);
     merge(nums,low,mid,high);


  }
    int reversePairs(vector<int>& nums) {
        
        // brite force 
        // this give to you an a TLE...
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //     if((long long)nums[i]>(long long)2*nums[j]) cnt++;
        //     }
        // }

        // return cnt;
        // time complexity O(n^2)
        //space is O(1)

        // optimized approach 
     int n=nums.size();
     mergeSort(nums,0,n-1);

     return cnt;

    }
};