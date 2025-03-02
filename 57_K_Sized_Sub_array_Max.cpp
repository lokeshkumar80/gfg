// class Solution {
//     public:
//       vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//           // code here
//           // Code 1: This code shows TLE ....1110/1111
//           // int n = arr.size();
//           // vector<int>ans;
//           // stack<int>maxs;
//           // int maximum = INT_MIN;
//           // if(k==1){
//           //     ans = arr;
//           //     return ans;
//           // }
//           // int i=0;
//           // int q = k-1;
//           // while(i<n){
//           //     if(i<q){
//           //         if(!maxs.empty() && arr[i]>maxs.top()){
//           //             maxs.pop();
//           //             maxs.push(arr[i]);
//           //         }
//           //         else if(maxs.empty()){
//           //             maxs.push(arr[i]);
//           //         }
//           //         i++;
//           //     }
//           //     else{
//           //         if(arr[i]>maxs.top()){
//           //             maxs.pop();
//           //             maxs.push(arr[i]);
//           //             ans.push_back(maxs.top());
//           //         }
//           //         else{
//           //             ans.push_back(maxs.top());
//           //         }
//           //         i++;
//           //         int p = 0;
//           //         maximum = INT_MIN;
//           //         int j = k;
//           //         while(j && i<n){
//           //             if(arr[i-p]>maximum){
//           //                 maximum = arr[i-p];
//           //             }
                      
//           //             if(arr[i-p]==maxs.top()){
//           //                 break;
//           //             }
//           //             else if(j==1){
//           //                 maxs.pop();
//           //                 maxs.push(maximum);
//           //             }
//           //             j--;
//           //             p++;
//           //         }
//           //     }
//           //     // i++;
//           // }
//           // return ans;
          
//           // code 2: Using deque..
          
//           int n = arr.size();
//           if (n == 0 || k == 0) return {};
  
//           vector<int> result;
//           deque<int> dq;  // Stores indices of array elements
  
//           for (int i = 0; i < n; i++) {
//               // Remove elements not within the window
//               if (!dq.empty() && dq.front() < i - k + 1) {
//                   dq.pop_front();
//               }
  
//               // Remove elements smaller than the current element
//               while (!dq.empty() && arr[dq.back()] < arr[i]) {
//                   dq.pop_back();
//               }
  
//               // Add the current index
//               dq.push_back(i);
  
//               // Store the maximum for the window
//               if (i >= k - 1) {
//                   result.push_back(arr[dq.front()]);  // Front of the deque is the max
//               }
//           }
  
//           return result;
//       }
//   };