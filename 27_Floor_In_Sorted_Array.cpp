// class Solution {
//     public:
  
//       int findFloor(vector<int>& arr, int k) {
//           int n = arr.size();
//           int ans = -1;
//           for(int i=0; i<n; i++){
//               if(arr[i]>k){
//                   ans = i-1;
//                   break;
//               }
//               else if(i == n-1){
//                   ans = i;
//               }
//           }
//           return ans;
//       }
//   };