class Solution {
  private:

  int square(int num){
    int sum=0;

    while(num>0){
        int x=num%10;
        sum+=x*x;
        num=num/10;
    }

    return sum;
  }
public:
    bool isHappy(int n) {

        int slow=square(n);
        int fast=square(square(n));

        while(slow!=fast){
            slow=square(slow);
            fast=square(square(fast));

            if(slow==1||fast==1)  return true; 
            
            }
        
        return slow==1;
    }
};