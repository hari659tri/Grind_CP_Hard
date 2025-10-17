class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            int val='z'-ch+1;
            sum+=(val*(i+1));
        }
        return sum;
    }
};