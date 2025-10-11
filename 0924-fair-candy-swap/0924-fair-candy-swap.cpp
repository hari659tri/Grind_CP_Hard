class Solution {
public:

 int binarSearch(int target,vector<int>& bobSizes){
    int low=0;
    int high=bobSizes.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(bobSizes[mid]==target){
            return mid;
        }
        else if(bobSizes[mid]>target){
           high=mid-1;
        }
        else{
            low=mid+1;
        }

    }

    return -1;
 }

  


    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
          
          /*  best problem for ever this is....
          we want the sumofa==sumofb so how to do this 
          intitially suma!=sumb
          but after swap they become equal i.e 
          let x number of candy have the alice 
          and y is the number of candy have the bob
          suma-x+y=sumb+x-y
     y=(sumb-suma)/2+x 

     //assume y as a target and apply binary search on the bob array 

          */ 
 
     int suma=0;
     int sumb=0;

       for(auto it:aliceSizes) suma+=it;
       for(auto it:bobSizes) sumb+=it;

       sort(bobSizes.begin(),bobSizes.end());

       int half=(sumb-suma)/2;

       for(auto it:aliceSizes){
        int temp=binarSearch(half+it,bobSizes);

        if(temp!=-1){
            return {it,bobSizes[temp]};
        }
       }
    
      return {};
    }
};