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
    //   bool ans=false;
    //   for(int i=0;i<m;i++){

    //     if(matrix[i][0]<=target&&target<=matrix[i][n-1]){
    //        ans= bs(matrix[i],target);
    //     }
    //   }

     
       //if(ans) return true;
     
    // return ans==true?true: false;

     // time complexity O(mlogn) where m=no of row 
     // n=no of coloumn...
     //space complexity O(1)

     // optimized approach....

     // flatten a 2-D matrix into an a 1-D matrix in mind(Brain) not in really

      // now 
      int low=0;
      int high=m*n-1;

      while(low<=high){
        int mid=low+(high-low)/2;
       
       int row=mid/n;
       int col=mid%n;

       if(matrix[row][col]==target) return true;
       else if(matrix[row][col]<target) low=mid+1;
       else  high=mid-1;

      }

      return false;
      

      
    }
};