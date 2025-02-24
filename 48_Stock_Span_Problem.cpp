// class Solution {
//     public:
//       vector<int> calculateSpan(vector<int>& arr) {
//           // // Code 1 : TLE 1115/1116...
//           // int n = arr.size();
//           // vector<int>ans(n, 1); // create ans vector of size n and initialized with 1
//           // stack<int>indices;
          
//           // int count = 1;
//           // int index ;
//           // for(int i = n-1; i>=0; i--){
//           //     index = i-1;
//           //     indices.push(i);
//           //     while(index>=0 && arr[indices.top()]>=arr[index]){
//           //         count++;
//           //         index--;
//           //     }
//           //     ans[i] = count;
//           //     count = 1;
//           // }
//           // return ans;
          
//           // Code 2 : Succesfully submitted ..
//           int n = arr.size();
//           vector<int>ans(n, 1); // create ans vector of size n and initialized with 1
//           stack<int>s;
          
//           // Dry run on more and more cases to understand these logics
//           // and to find out logic think again and again on output or process ...
          
//           int count = 1;
//           for(int i = 1; i<n; i++){
//               s.push(i-1);
//               while(!s.empty() && arr[i]>=arr[s.top()]){
//                   count = count + ans[s.top()];
//                   s.pop();
//                   ans[i] = count;
//               }
//               count = 1;
//           }
//           return ans;
//       }
//   };