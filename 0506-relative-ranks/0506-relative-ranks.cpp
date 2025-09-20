class Solution {
public:
  
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return a.first>b.first;
    }

    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n=score.size();
        if(n==1) return {"Gold Medal"};
        // if(n==2) return {"Gold Medal","Silver Medal"};
        // if(n==3) return {"Gold Medal","Silver Medal"};
        vector<string>ans(n);
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({score[i],i});
        }

        sort(vec.begin(),vec.end(),cmp);
       if(n<=2){
         
         ans[vec[0].second]="Gold Medal";
       
       ans[vec[1].second]="Silver Medal";
       
       
       return ans;
       }
       else if(n<=3){
        ans[vec[0].second]="Gold Medal";
       
       ans[vec[1].second]="Silver Medal";
       
       ans[vec[2].second]="Bronze Medal";
       return ans;

       }
       
       ans[vec[0].second]="Gold Medal";
       
       ans[vec[1].second]="Silver Medal";
       
       ans[vec[2].second]="Bronze Medal";
      int r=4;
       for(int i=3;i<n;i++){
       
        ans[vec[i].second]=to_string(r);
        r++;
       }

       return ans;


    }
};