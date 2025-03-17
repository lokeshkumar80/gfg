// class Solution {
//     public:
//   //   A subarray is a contiguous part of an array. 
//   //   It consists of consecutive elements from the original 
//   //   array while maintaining their order.
  
//       int maxSubarraySum(vector<int> &arr) {
//           int max_so_far = INT_MIN ;
//           int max_ending_here = 0;
//           for(int num : arr){
//               max_ending_here += num;
//               max_so_far = max(max_ending_here, max_so_far);
//               if(max_ending_here < 0){
//                   max_ending_here = 0;
//               }
//           }
//           return max_so_far;
//       }
//   };