// class Solution {
//   public:
//     int maximumProfit(vector<int> &prices) {
//         int min_price = INT_MAX;
//         int max_profit = 0;
    
//         for (int price : prices) {
//             if (price < min_price)
//                 min_price = price;  // update the minimum price seen so far
//             else
//                 max_profit = max(max_profit, price - min_price);  // calculate max profit so far
//         }
//         return max_profit;
//     }
// };