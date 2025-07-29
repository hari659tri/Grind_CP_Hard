class Solution {
public:
   bool fun(vector<int>& bloomDay,int m,int k,int dayno){
      
      int  n=bloomDay.size();
      int noofbloom=0;
      int cnt=0;
      for(int i=0;i<n;i++){
        if(bloomDay[i]<=dayno) cnt++;
        else{
      noofbloom+=(cnt/k);
      cnt=0;
     
        }
      }
   
       noofbloom+=(cnt/k);
      return   noofbloom>=m ;


      
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        

        int n=bloomDay.size();

       if((long long)m*k>n) return -1;
       
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int mini=*min_element(bloomDay.begin(),bloomDay.end());


        //   for(int i=mini;i<=maxi;i++){

        //     if(fun(bloomDay,m,k,i)==true) return i;
        //   }


   // brute force did'nt work here apply it binary serach


   while(mini<=maxi){
    long long mid=(mini+maxi)/2;

    if(fun(bloomDay,m,k,mid)){
        maxi=mid-1;
    }
    else{
        mini=mid+1;
    }
   }
    
    return mini;

    }
};