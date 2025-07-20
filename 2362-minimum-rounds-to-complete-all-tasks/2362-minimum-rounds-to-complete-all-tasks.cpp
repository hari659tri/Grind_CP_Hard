class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;//-->>{task,count}
       //  we are greedly larger taks i.e 3 first greedly due to it is greedy problem 
        for(auto it:tasks){
            mp[it]++;
        }

       int round=0;
        for(auto it:mp){
            int cnt=it.second;
            if(cnt==1) return -1;


            if(cnt%3==0){
           round+=cnt/3;
            }
            else{
                round+=(cnt/3)+1;
            }
        }

        return round;

    }
};