// class Solution {
//   public:
  
// // // it shows TLE 
//     // int countWays(int n, int k) {
//     //     // code here
//     //     if(n==1){
//     //         return k;
//     //     }
//     //     if(n==2){
//     //         return k + k*(k-1);
//     //     }
//     //     int ans = (k-1)*(countWays(n-2, k) + countWays(n-1, k));
//     //     return ans;
//     // }
    
//     int countWays(int n, int k){
//         if (n == 1){ 
//             return k;
//         }
        
//         if (n == 2){ 
//             return k + k*(k-1);
//         }
        
//         int same = k;
//         int diff = k * (k - 1);
        
//         for (int i = 3; i <= n; i++) {
//             int new_same = diff;
//             int new_diff = (same + diff) * (k - 1);
//             same = new_same;
//             diff = new_diff;
//         }
//         return same + diff;
//     }
// };