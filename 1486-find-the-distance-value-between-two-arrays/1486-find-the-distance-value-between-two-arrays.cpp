class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
       
        int n=arr1.size();
        int m=arr2.size();
       //sort( arr1.begin(),arr1.end()),sort(arr2.begin(),arr2.end());
       int cnt=0;
         for(int i=0;i<n;i++){
             bool flag=false;
            for(int j=0;j<m;j++){

                if(abs(arr1[i]-arr2[j])<=d){
                    flag=true;
                    break;
                    }

            // if(abs(arr1[i]-arr2[j])>d){
            //     flag=true;
            //       break;
            //     }
                
            }
            if(flag==false) cnt++;
         }

         return cnt;
    }
};