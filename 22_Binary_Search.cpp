// class Solution {
//     public:
//       int binarysearch(vector<int> &arr, int k) {
//           int n = arr.size();
//           int s=0;
//           int e=n-1;
//           int mid = s + (e-s)/2;
//           int ans = -1 ; // -1 for in case of not found
//           while(s<=e){
//               if(arr[mid]==k){
//                   ans = mid; // store ans 
//                   e = mid - 1; // for finding smallest index
//               }
//               else if(k > arr[mid]){
//                   // move right
//                   s = mid + 1;
//               }
//               else{
//                   // move left
//                   e = mid - 1;
//               }
//               mid = s + (e-s)/2 ;
//           }
//           // if we come out of this loop ....means target not found...
//           return ans;
//       }
//   };