class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int n=digits.size();
        int cnt;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j||k==i||k==j)continue;
                    int num=digits[i]*100+digits[j]*10+digits[k];
                    if(num>=100&&num%2==0){
                        st.insert(num);
                    }
                }
            }
        }

          cnt=(int)st.size();

        return cnt;
    }
};