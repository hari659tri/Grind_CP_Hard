class Solution {
public:
   
   bool bs(vector<int>&v,int target){
    int i=0;
    int j=v.size()-1;

    while(i<=j){
        int mid=i+(j-i)/2;

        if(v[mid]==target) return true;

        else if(v[mid]<target) i=mid+1;
        else j=mid-1;
        
    }
    return false;
   }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();

      
    //   for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(matrix[i][j]==target) return true;
    //     }
    //   }

      //return false;
      bool ans=false;
      for(int i=0;i<m;i++){

        if(matrix[i][0]<=target&&target<=matrix[i][n-1]){
           ans= bs(matrix[i],target);
        }
      }

     
       //if(ans) return true;
     
     return ans==true?true: false;
      
    }
};