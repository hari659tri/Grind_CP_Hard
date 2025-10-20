class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        //firstly we can try to make the string s1 equal to s2
        for(int i=0;i<4;i++){
            int j=i+2;
            if(j<4)
            swap(s1[i],s1[j]);

            if(s1==s2) return true;
        }

        // secondly try to make s2 equal to s1 
        for(int i=0;i<4;i++){
            int j=i+2;
            if(j<4)
            swap(s2[i],s2[j]);

            if(s1==s2) return true;
        }

      return false;
    }
};