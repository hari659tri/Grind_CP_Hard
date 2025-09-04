class Solution {
public:
    int findClosest(int x, int y, int z) {
        
        int m1=abs(x-z);
        int m2=abs(y-z);
       
        if(m1==m2)  return 0;
        return (m1<m2)?1:2;

        // time complexity -->O(1)
        // space complexity O(1)

    }
};