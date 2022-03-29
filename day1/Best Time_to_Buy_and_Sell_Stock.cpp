//https://leetcode.com/submissions/detail/669017675/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0; // we take profit as 0 initially as it is better than loss
        int buy = prices[0]; //becoz first we will buy then only can sell
        for(int i=1;i<prices.size();i++) //we start from 2ns price
        {
            //basically we want to increase profit
            //profit(incr) = sell(either incr) - buy(either decr)
            //so to incr profit we are decreasing buying price
            int diff = prices[i]-buy;//if this diff is high this means we are buying at low //and selling at high price
            buy = min(buy,prices[i]); //we need to buy at least amount
            profit = max(profit,diff); //we need maximum profit
        }
        return profit;
    }
};