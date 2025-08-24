class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        
        pair<int,int>p;

        int n=num.size();
      
      int i=0;
      int j=n-1;

      while(i<j){

        if(num[i]+num[j]==target){
            p.first=i;
            p.second=j;
            break;
        }
        else if(num[i]+num[j]<target){
           i=i+1;
        }
        else{
            j=j-1;
        }
      }


      return {p.first+1,p.second+1};

    }
};