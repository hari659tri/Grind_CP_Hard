#include <bits/stdc++.h>
class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i == n)
            return 0;
        int sign = 1; // by default assume it + and check it
       
        if (s[i]=='+'||s[i] == '-') {
            if(s[i]=='-')
            sign = -1;

            i++;
        }

        long long num = 0;

        while (i < n && isdigit(s[i]) ){
           
                int digit = s[i] - '0';
                num = num * 10 + digit;
            

            if (sign == 1 && num > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
            i++;
        }

        return (int)(num * sign);
    }
};