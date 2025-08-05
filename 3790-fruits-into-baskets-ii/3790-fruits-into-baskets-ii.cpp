class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int i=0;
        int j=0;
        int n=fruits.size();
        unordered_set<int>st;
        int unplaced=0;
        int indx=-1;
        for(int i=0;i<n;i++){
            int f=fruits[i];
            int enter=false;
            for(int j=0;j<n;j++){
                if(f<=baskets[j]&&st.find(j)==st.end()){
                 st.insert(j);
                enter=true;
                break;
                }
            }
            if(enter==false){
                unplaced++;
            }
        }
     return unplaced;
    }
};