// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Code

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int mini = prices[0];
        int n = prices.size();
        for(int i =1;i<n;i++){
            int cost = prices[i] - mini;
            max_profit = max (max_profit,cost);
            mini = min(mini,prices[i]);
        }
        return max_profit;
    }
};

/*      TEST CASES

Input: prices = [7,1,5,3,6,4]
Output: 5

Input: prices = [7,6,4,3,1]
Output: 0

*/