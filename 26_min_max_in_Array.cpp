// class Solution {
//     public:
//       pair<int, int> getMinMax(vector<int> arr) {
//           int n = arr.size();
//           int min = INT_MAX;
//           int max = INT_MIN;
//           for(int i=0; i<n; i++){
//               if(arr[i]<min){
//                   min = arr[i];
//               }
//               if(arr[i]>max){
//                   max = arr[i];
//               }
//           }
//           // Keep in mind ...How to return pair...
//           return {min, max} ;
//       }
//   };