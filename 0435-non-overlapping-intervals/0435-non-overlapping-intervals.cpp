class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        
        int i=0;
        int j=1;
        int cnt=0;
        int n=intervals.size();

        while(j<n){
           auto currs=intervals[i];
           auto curre=intervals[j];

           int si=currs[0];
           int ei=currs[1];

           int sj=curre[0];
           int ej=curre[1];

             
            if(ei<=sj){  // non overlapping intervals it is...
                i=j;
                j++;
            }
            else if(ei<=ej){
            j++;
            cnt++;
            }
            else if(ei>ej){
                i=j;
                j++;
                cnt++;
            }


        }

        return cnt;
    }
};