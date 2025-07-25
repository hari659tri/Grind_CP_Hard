class Solution {
public:   
     
     long long fun(vector<int>& piles,int k){
        int n=piles.size();

         long long hr=0;
         for(int i=0;i<n;i++){
           int a=ceil((double)piles[i]/k);
           hr+=a;
         }

         return hr;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        // here k is number of banana eats per hour i.e k=(noofbanana)/hour
        
        // brute force time complexity is O(max(arr)*n)
    //        int maxi=*max_element(piles.begin(),piles.end());
    //         int ans=-1;
    //        for(int i=1;i<=maxi;i++){

    //         long long hour=fun(piles,i);

    //         if(hour<=h) {
    //             ans=i;
    //             break;
    //         }

    //        }

    //    return ans;


    // optimal approach Binary search on answers

    int low=1;
    int high=*max_element(piles.begin(),piles.end());
     int ans=INT_MAX;

      while(low<=high){
        int mid=low+(high-low)/2;
         long long hour=fun(piles,mid);
        if(hour<=h){
           ans=min(ans,mid);
           high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
     
        return low;
    }
};