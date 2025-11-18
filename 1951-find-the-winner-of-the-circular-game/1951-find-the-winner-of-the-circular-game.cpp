class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int>fr;

         for(int i=1;i<=n;i++){
            fr.push_back(i);
         }

       int i=0;
         while(fr.size()>1){
            int idx=(i+k-1)%fr.size();

            fr.erase(fr.begin()+idx);
            i=idx;

         }
      
        return fr[0];

    }
};