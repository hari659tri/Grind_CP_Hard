class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int dir=0;
        vector<vector<int>>ans(n,vector<int>(n,0));
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int num=1;
        /*
        dir==0(left->right going)
        dir==1(top->down going)
        dir==2(right->left)
        dir==3(down->top)
        */
         
         while(top<=down&&left<=right){
              
            if(dir==0){
                //dir==0(left->right going)
                // row(top) is fixed 
                for(int i=left;i<=right;i++){
                  ans[top][i]=num;
                 num++;
                }  
       
            top++;
            }
    
       
          if(dir==1){
            // dir==1(top->down going)
            // colomun is fixed means (right)...
          for(int i=top;i<=down;i++){
             ans[i][right]=num;
             num++;
          }
          right--;
          }

          if(dir==2){
            // dir==2(right->left)
            // fixed row(down)
            for(int i=right;i>=left;i--){
               ans[down][i]=num;
               num++;
            }
            down--;

          }

          if(dir==3){
         //dir==3(down->top)
         //coloumn(left) fixed
         for(int i=down;i>=top;i--){
            ans[i][left]=num;
            num++;
         }
          left++;
          }
          dir++;
          if(dir==4)
           dir=0;


        }
       
       return ans;
       // time complexkity is O(m*n)
       //space is O(m*n)
    }
};

/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int dir=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int down=n-1;
        int left=0;
        int right=m-1;
        vector<int>ans;
        /*
        dir==0(left->right going)
        dir==1(top->down going)
        dir==2(right->left)
        dir==3(down->top)
        */
/*
        while(top<=down&&left<=right){

            if(dir==0){
                //dir==0(left->right going)
                // row(top) is fixed 
                for(int i=left;i<=right;i++){
                 ans.push_back(matrix[top][i]);
                }  
       
            top++;
            }
    
       
          if(dir==1){
            // dir==1(top->down going)
            // colomun is fixed means (right)...
          for(int i=top;i<=down;i++){
            ans.push_back(matrix[i][right]);
          }
          right--;
          }

          if(dir==2){
            // dir==2(right->left)
            // fixed row(down)
            for(int i=right;i>=left;i--){
               ans.push_back(matrix[down][i]);
            }
            down--;

          }

          if(dir==3){
         //dir==3(down->top)
         //coloumn(left) fixed
         for(int i=down;i>=top;i--){
            ans.push_back(matrix[i][left]);
         }
          left++;
          }
          dir++;
          if(dir==4)
           dir=0;


        }


     return ans;
     // time complexity: O(M*N)
     // space comeplexity is extra space is O(M*N) to sotre the answer 

    }
};

*/