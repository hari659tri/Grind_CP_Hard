class Solution {
public: 
    bool valid(vector<int>& quantities,int mid,int n){

        int cnt=0;
        int m=quantities.size();
        for(int i=0;i<m;i++){
            cnt+=(quantities[i]/mid);
            if(quantities[i]%mid!=0){
                cnt++;
            }
        }
       
        

        return cnt<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int m=quantities.size();
        int low=1; //*min_element(begin(quantities),end(quantities));
        int high=*max_element(begin(quantities),end(quantities));
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(valid(quantities,mid,n)==true){
                ans=mid;
                high=mid-1;
            }
            else{
              low=mid+1;
            }
        }

         return ans;
    }
};