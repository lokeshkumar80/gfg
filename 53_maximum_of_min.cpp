// class Solution {
//     public:
//     // Solve Again POTD Problem....
//       vector<int> maxOfMins(vector<int>& arr) {
//           // // This code 1010/1115 shows TLE it takes O(n^3);
//           // int n = arr.size();
//           // vector<int>maxs;
//           // int maxofmin = INT_MIN;
//           // int i=0;
//           // while(i<n){
//           //     int left = 0;
//           //     int right = left + i;
//           //     while(right<n){
//           //         // as we know fn([left, right+1)) understand reson of indexing..
//           //         auto it = min_element(arr.begin()+left , arr.begin()+right+1);
//           //         int min = *it;
                  
//           //         if(min>maxofmin){
//           //             maxofmin = min;
//           //         }
//           //         left++;
//           //         right = left + i;
//           //     }
//           //     maxs.push_back(maxofmin);
//           //     maxofmin = INT_MIN;
//           //     i++;
//           // }
//           // return maxs;
          
//           // Code 2 : Need to solve again , revise , help taken by chat gpt ..
//           // POTD problem....
          
//           int n = arr.size();
//           vector<int> left(n), right(n);
//           stack<int> s;
  
//           // Step 1: Find the Previous Smaller Elements
//           for (int i = 0; i < n; i++) {
//               while (!s.empty() && arr[s.top()] >= arr[i]) {
//                   s.pop();
//               }
//               left[i] = (s.empty()) ? -1 : s.top();
//               s.push(i);
//           }
  
//           // Clear stack for the next pass
//           while (!s.empty()) s.pop();
  
//           // Step 2: Find the Next Smaller Elements
//           for (int i = n - 1; i >= 0; i--) {
//               while (!s.empty() && arr[s.top()] >= arr[i]) {
//                   s.pop();
//               }
//               right[i] = (s.empty()) ? n : s.top();
//               s.push(i);
//           }
  
//           // Step 3: Compute results using window sizes
//           vector<int> res(n + 1, INT_MIN);
//           for (int i = 0; i < n; i++) {
//               int len = right[i] - left[i] - 1;  // Window size
//               res[len] = max(res[len], arr[i]); // Store the max of min values
//           }
  
//           // Step 4: Fill the rest of the result array
//           for (int i = n - 1; i >= 1; i--) {
//               res[i] = max(res[i], res[i + 1]);
//           }
  
//           // Ignore the 0th index and return result
//           return vector<int>(res.begin() + 1, res.end());
//       }
//   };