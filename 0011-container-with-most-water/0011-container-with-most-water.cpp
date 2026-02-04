class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int i=0;
        int j=n-1;
       int ans=-2*1e9;
        while(i<j){
            int len=j-i;
            int h=min(height[i],height[j]);
            if(height[i]<height[j]){
             ans=max(ans,len*height[i]);
             i++;
            }
            else{
                ans=max(ans,len*height[j]);
                j--;
            }
           
           
        }

        return ans;
    }
};