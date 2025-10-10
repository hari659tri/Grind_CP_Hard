class Solution {
public: 
     bool valid(vector<int>& position,int mid,int low,int n,int m){
       
       
        int pos=position[0]; /// placed first ball
         int cnt=1;
        for(int i=1;i<n;i++){
            if(position[i]-pos>=mid){
           
                pos=position[i];
                cnt++;
            }

        }

        return cnt>=m;
     }
    int maxDistance(vector<int>& position, int m) {

      int n=position.size();
      sort(position.begin(),position.end());
      int low=1;
      long long  high=position[n-1]-position[0];
      long long ans=0;
      while(low<=high){

        long long  mid=low+(high-low)/2;

        if(valid(position,mid,low,n,m)){
          ans=mid;
          low=mid+1;
        }
        else{
        high=mid-1;
        }
      }
    
       return ans;


    }
};