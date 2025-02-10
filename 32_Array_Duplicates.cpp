// class Solution {
//     public:
//       vector<int> findDuplicates(vector<int>& arr) {
//           vector<int>ans;
//           sort(arr.begin(), arr.end());
//           int n = arr.size();
//           int count=1;
//           for(int i=0; i<n-1; i++){
//               if(arr[i]==arr[i+1]){
//                   count++;
//                   if(i==n-2){
//                       ans.push_back(arr[i]);
//                   }
//               }
//               else{
//                   if(count>1){
//                   ans.push_back(arr[i-1]);
//                   }
//                   count=1;
//               }
//           }
//           return ans;
//       }
//   };