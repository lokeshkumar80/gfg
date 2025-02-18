// class Solution {
//     public:
//       // Function to find the smallest positive number missing from the array.
//       int missingNumber(vector<int> &arr) {
//           int n = arr.size();
//           sort(arr.begin(), arr.end());
//           int diff;
//           int flag = 1;
//           int ans;
//           // int s=0;
//           // int e = n-1;
//           // int mid = s + (e-s)/2 ;
//           // int diff1;
//           // int diff2;
//           // while(s<=e){
//           //     // mid update
//           //     mid = s + (e-s)/2 ;
//           //     if(arr[mid]<=0){
//           //         s = mid+1;
//           //     }
//           //     else if(mid+1 <= n-1 && mid-1 >= 0){
//           //         diff1 = arr[mid] - arr[mid-1];
//           //         diff2 = arr[mid+1] - arr[mid];
                  
//           //     }
              
              
              
              
//           // }
//           for(int i=0; i<n; i++){
//               if(arr[i]>0){
//                   if(flag){
//                       if(arr[i]!=1){
//                           ans = 1;
//                           return ans;
//                       }
//                   }
//                   flag = 0;
//                   if(i+1<n){
//                       diff = arr[i+1]-arr[i];
//                       if(diff!=0 && diff!=1){
//                           ans = arr[i]+1;
//                           return ans;
//                       }
//                   }
//               }
//           }
//           // if we are out of this loop means there is no break in the pattern 
//           // so the missing smallest positive number is arr[n-1]+1 if arr[n-1] is positive
//           // otherwise return 1;
//           if(arr[n-1]>0){
//               ans = arr[n-1]+1;
//               return ans;
//           }
//           else{
//               ans = 1;
//               return ans;
//           }
//       }
//   };