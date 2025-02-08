// class Solution {
//     public:
//       // Function to search x in arr
//       // arr: input array
//       // X: element to be searched for
//       int search(vector<int>& arr, int x) {
//           int n = arr.size();
//           int ans = -1; // in case of not found
//           for(int i=0; i<n; i++){
//               if(arr[i]==x){
//                   ans = i;
//                   break;
//               }
//           }
//           return ans;
//       }
//   };