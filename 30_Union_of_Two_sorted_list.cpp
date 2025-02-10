// class Solution {
//     public:
//       // a,b : the arrays
//       // Function to return a list containing the union of the two arrays.
//       vector<int> findUnion(vector<int> &a, vector<int> &b) {
          
//           // vector<int>ans; This gives error here for using copy we have initialize vector with size
//           //Segmentation Fault (SIGSEGV)
//           //timeout: the monitored command dumped core
//           //bin/bash: line 1:    32 Segmentation fault   
          
//           //Code 1 : it runs 1110/1120 but it shows TLE ( Time limit exceeds ) bcz of copy function runs high no of iteration 
//           // vector<int>ans(a.size()+b.size());
//           // copy(a.begin(), a.end(), ans.begin());
//           // copy(b.begin(), b.end(), ans.begin() + a.size());
          
//           // Code 2:
//           vector<int>ans;
//           for(auto it:a){
//               ans.push_back(it);
//           }
//           for(auto it:b){
//               ans.push_back(it);
//           }
//           sort(ans.begin(), ans.end());
//           int n = ans.size();
//           int i=0;
//           while(i<n-1){
//               if(ans[i]==ans[i+1]){
//                   ans.erase(ans.begin()+i);
//                   n = ans.size();
//                   continue;
//               }
//               i++;
//           }
//           return ans;
//       }
//   };