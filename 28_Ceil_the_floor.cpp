// class Solution {
//     public:
//       vector<int> getFloorAndCeil(int x, vector<int> &arr) {
//           sort(arr.begin(), arr.end());
//           int n = arr.size();
//           vector<int>ans;
//           int floor = -1;
//           int ceil = -1;
          
//           // for floor and ceil
//           for(int i=0; i<n; i++){
//               if(arr[i]==x){
//                   floor = arr[i];
//                   ceil = arr[i];
//                   break;
//               }
//               else if(arr[i]>x){
//                   // here n==1 && arr[i]>x is handled
//                   if(i==0){
//                       floor = -1;
//                       ceil = arr[0];
//                       break;
//                   } else{
//                       floor = arr[i-1];
//                       ceil = arr[i];
//                       break;
//                   }
//               } // if we are here means arr[i]<x
//               else if(i==n-1){
//                   // here also n==1 && arr[i]<x is handled
//                   floor = arr[i];
//                   ceil = -1;
//               }
//           }
          
//           ans.push_back(floor);
//           ans.push_back(ceil);
//           return ans;
//       }
//   };