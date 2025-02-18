// class Solution {
//     public:
//       vector<int> findTwoElement(vector<int>& arr) {
//           int n = arr.size();
//           vector<int>ans;
//           int a;
//           int b;
//           int diff;
//           int flag = 1;
//           int count = 1;
//           sort(arr.begin(), arr.end());
//           for(int i=0; i<n-1; i++){
//               if(arr[0]!=1){
//                   flag = 0;
//                   a = 1;
//               }
//               diff = arr[i+1]-arr[i];
//               if(diff!=0 && diff!=1){
//                   flag = 0;
//                   a = arr[i]+1;
//               }
//               else if(diff==0){
//                   count = 0;
//                   b = arr[i];
//               }
              
//           }
//           if(count==1 && flag==1){
//               a = 0;
//               b = 0;
//           }
//           else if(flag){
//               a = arr[n-1]+1;
//           }
//           ans.push_back(b);
//           ans.push_back(a);
//           return ans;
//       }
//   };