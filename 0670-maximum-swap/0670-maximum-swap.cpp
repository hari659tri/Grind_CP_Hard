class Solution {
public:
    int maximumSwap(int num) {
        string s= to_string(num);

        vector<int>v(10,-1);
        
        int n=s.size();
        for(int i=0;i<n;i++){
            v[s[i]-'0']=i;
        }
        
        
        
        for(int i=0;i<n;i++){
            int curr=s[i]-'0';
            
            for(int d=9;d>curr;d--){
                if(v[d]>i){
                    swap(s[i],s[v[d]]);
                    return stoi(s);
                }
            }
        }
       
        return stoi(s);
    }
};