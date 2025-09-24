class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n<0) return false;
        long long a=abs((long long)n);
        if((a&(a-1))==0) return true;

        return false;

    }
};