// class Solution {
//     public:
          
//   // A person can take either 1 step or 2 steps at a time. So, 
//   // the number of ways to reach the nth step depends on how they reached the previous steps:
//   // If the last move was 1 step, they must have come from (n-1).
//   // If the last move was 2 steps, they must have come from (n-2).
//   // Thus, the recurrence relation is:
//   // ways(n)=ways(n−1)+ways(n−2)
//   // which is exactly the Fibonacci sequence.
  
//       int countWays(int n) {
//           if (n <= 1) return 1;
//           int prev2 = 1;
//           int prev1 = 1; 
//           int current;
//           for (int i = 2; i <= n; i++) {
//               current = prev1 + prev2;
//               prev2 = prev1;
//               prev1 = current;
//           }
//           return prev1;
//       }
//   };