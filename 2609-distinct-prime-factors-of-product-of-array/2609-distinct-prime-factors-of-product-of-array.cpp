class Solution {
public:

//   bool prime(int n){
//     if(n==2) return true;
//      if(n%2==0) return false; //skip all even number to t.c->√n/2 from √n->√n/2 becomes 
//     for(int i=3;i*i<=n;i+=2){
//         if(n%i==0) return false;
//     }

//     return true;
//   }
    int distinctPrimeFactors(vector<int>& nums) {
        
    //     long long prod=1;
    //     int cnt=0;
    //     int n=nums.size();
    //     for(int i=0;i<nums.size();i++){
    //         prod*=nums[i];
    //     }

    // //    for(int i=2;i<=prod;i++){
    // //     if(prime(i)){
    // //         if(prod%i==0) cnt++;
    // //     }
    // //    }

    // // tc->O(n√n) due to time limit exceeded hence here i going to used an a sieveerastosthen algorithm 

    //  vector<bool>prime(prod+1,1);

    //  prime[0]=prime[1]=0; //0 and 1 are not a prime 

    //    for(int i=2;i*i<=prod;i++){
    //     if(prime[i]==1){
    //         for(int j=i*i;j<=prod;j+=i){
    //             prime[j]=0;
    //         }
    //     }
    //    }
     
    //  for(int i=0;i<=prod;i++){
    //     if(prime[i]==i) cnt++;
    //  }


    //    return cnt;

      set<int>st;
      
      for(int n:nums){

        // find all 2 factor 

         while(n%2==0){
            st.insert(2);
            n=n/2;
         }

          // Check for odd factors
          for(int i=3;i*i<=n;i+=2){
             while(n%i==0){
            st.insert(i);
            n/=i;
         }

          }
         
         
         if(n>1) st.insert(n);

      }

      return st.size();
    }
};