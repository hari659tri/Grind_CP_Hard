class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int>ans;

        int n=operations.size();

        for(int i=0;i<n;i++){

            if(operations[i]=="+"){
             
              int s=ans.back()+ans[ans.size()-2];
              ans.push_back(s);
            

            }
            else if(operations[i]=="D"){
             int a=ans.back();
             ans.push_back(2*a);
            }
            else if(operations[i]=="C"){
              ans.pop_back();
            }
            else{
            ans.push_back(stoi(operations[i]));
            }
            
        }
       
       int sum=accumulate(ans.begin(),ans.end(),0);

       return sum;
    }
};