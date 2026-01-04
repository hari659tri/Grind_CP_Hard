class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bestBuy=prices[0];
        int n=prices.size();
        int maxiprofit=-1e9;

        for(int i=1;i<n;i++){
        maxiprofit=max( prices[i]-bestBuy,maxiprofit);
         bestBuy=min(bestBuy,prices[i]);
        }

        return maxiprofit<0?0:maxiprofit;
    }
};