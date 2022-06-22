class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minVal=INT_MAX;
        
        for(int j=0; j<prices.size(); j++){
            profit=max(profit,prices[j]-minVal);
            minVal=min(prices[j],minVal);
        }
        
        return profit;
    }
};