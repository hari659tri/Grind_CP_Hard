class Solution {
public:

    int sum(vector<int>& weights){
        int sum =0;
        int n=weights.size();

         for(int i=0;i<n;i++){
            sum+=weights[i];
         }

         return sum;
    }

      bool fun(vector<int>& weights,int days,int mid){
        
         int cnt=1;
         int sum=0;
         int n=weights.size();
         

          for(int i=0;i<n;i++){

            sum+=weights[i];

            if(sum>mid){
                cnt++;
                sum=weights[i];
            }
           
          }
   
       if(cnt<=days) return true;
       return false;
      }
    int shipWithinDays(vector<int>& weights, int days) {

        int low=*max_element(weights.begin(),weights.end());
        int high=sum(weights);

        while(low<=high){

            int  mid=(low+high)/2;
          
           if(fun(weights,days,mid)==true){
              
               high=mid-1;
           }
           else{
    
           low=mid+1;
           } 

        }   
   
      return low;

    }
};