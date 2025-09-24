class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prd = 1;
        int res = 0;
        while(n>0){
            int ld = n%10;
            sum = sum + ld;
            prd = prd*ld;
            n = n/10;
        }
        res = prd-sum;
        return res;
    }
};