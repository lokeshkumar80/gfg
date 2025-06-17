
// class Solution {
//   public:
//     int maximumProfit(vector<int> &prices) {
//         // code here
//         int n = prices.size();
//         int profit = 0;
//         int TotalProfit = 0;
//         bool bflag = false;
//         bool sflag = true;
//         int Buy = 0;
//         int Sell = 0;
//         for(int i=0; i<n; i++){
//             // Buy
//             if(sflag && i+1 < n && prices[i]<prices[i+1]){
//                 Buy = prices[i];
//                 bflag = true;
//                 sflag = false;
//             }
            
//             // Sell
//             if((bflag && prices[i]>Buy && i+1 < n && prices[i]>prices[i+1]) || (bflag && i==n-1 && prices[i]>Buy)){
//                 Sell = prices[i];
//                 bflag = false;
//                 sflag = true;
//                 profit = Sell - Buy;
//                 TotalProfit+=profit;
//             }
//         }
//         return TotalProfit;
//     }
// };