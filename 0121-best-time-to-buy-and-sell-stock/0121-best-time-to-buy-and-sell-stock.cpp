class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int maxprofit = 0;
       int minimum = INT_MAX;
       for(int i=0; i<n; i++){
        minimum = min(minimum,prices[i]);
        maxprofit=max(prices[i]-minimum,maxprofit);
       }
     return maxprofit;
    }
};