class Solution {
public:
    // long long ans=0;
    // int n;  

    //   void findmax(string answerKey){
    //      long long  len=0;
    //     int i=0;
        
    //      while(i<n){
    //         if(answerKey[i]=='T'){
    //          len=1;
    //         i++;
    //         while(i<n&&answerKey[i]=='T'){
    //             len++;
    //             i++;
    //         }
    //         ans=max(ans,len);
    //         }
    //         else{

    //         len=1;
    //         i++;
    //         while(i<n&&answerKey[i]=='F'){
    //             len++;
    //             i++;
    //         }
    //         ans=max(ans,len);
       

    //         }
    //      }
    //   }
    // void solve(string answerKey,int k,int n,int idx){
    //     findmax(answerKey);

    //     if(idx>=n||k<=0) return ;
    //     //pick or not pick case i applied here

    //     answerKey[idx]=answerKey[idx]=='T'?'F':'T';
    //     solve(answerKey,k-1,n,idx+1);
    //     answerKey[idx]=answerKey[idx]=='T'?'F':'T'; //backtrack or undo the changes 
    //     solve(answerKey,k,n,idx+1);


    // }
    int maxConsecutiveAnswers(string answerKey, int k) {
         
        //  n=answerKey.size();
        //  solve(answerKey,k,n,0);
        //  return ans;
        int n=answerKey.size();
        int i=0;
        int j=0;
        int ans=0;
        int cntf=0;

        while(j<n){

            if(answerKey[j]=='F'){
                cntf++;
               
            }


            while(cntf>k){
               
                if(answerKey[i]=='F'){
                cntf--;
                }
            
            i++;
              
            }
             

            ans=max(ans,j-i+1);
            j++;
        }
   

   i=0;
   j=0;
   int cntT=0;

   while(j<n){

            if(answerKey[j]=='T'){
                cntT++;
               
            }


            while(cntT>k){
               
                if(answerKey[i]=='T'){
                cntT--;
                }
            
            i++;
              
            }
           

            ans=max(ans,j-i+1);
               j++;
        }
   

     
      return ans;
    }
};