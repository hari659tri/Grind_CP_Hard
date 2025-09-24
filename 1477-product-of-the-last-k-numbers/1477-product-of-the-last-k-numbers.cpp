class ProductOfNumbers {
public:
     vector<int>numbers;
    
     ProductOfNumbers() {
         
     }
    
    void add(int num) {
        numbers.push_back(num);
    }
    
    int getProduct(int k) {
        int ans=1;
        for(int i=numbers.size()-k;i<numbers.size();i++){
            ans*=numbers[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */