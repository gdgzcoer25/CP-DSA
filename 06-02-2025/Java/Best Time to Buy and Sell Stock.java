//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// test_cases:-
// example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
//code:-
class Solution {
    public int maxProfit(int[] prices) {
        int max_profit=0;
        int min_so_far=prices[0];
        for (int i =0;i<prices.length;i++){
            min_so_far=Math.min(min_so_far,prices[i]);
            int profit=prices[i]-min_so_far;
            max_profit=Math.max(profit,max_profit);
        }
        return max_profit;
    }
}
