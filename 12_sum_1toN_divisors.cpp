// class Solution {
//   public:
//     // function of sum of devisors
//     int f(int m){
//         int add = 0;
//         for(int i=1; i<=m; i++){
//             if(m%i == 0){
//                add+=i;
//             }
//         }
//         return add;
//     }
    
//     int sumOfDivisors(int n) {
//         int sum = 0;
//         for(int i=1; i<=n; i++){
//             sum+=f(i);
//         }
        
//         return sum;
//     }
// };