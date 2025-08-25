class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int i=0;
        int j=n-1;
        int ans=INT_MIN;

          while(i<j){

            int h=min(height[i],height[j]);
     
              int area=h*(j-i);
              ans=max(ans,area);

              if(height[i]<=height[j]){
                i++;
              }
              else{
               j--;
              }
    
          }

          return ans;
    }
};