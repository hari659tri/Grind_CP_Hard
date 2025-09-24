class Solution {
public:
    int maxProduct(int n) {
        
        string str=to_string(n);
        sort(str.begin(),str.end());
        int m=str.size();
        int a=str[m-1]-'0';
        int b=str[m-2]-'0';

        return a*b;
    }
};