// class Solution {
//     public:
//       void nextPermutation(vector<int>& arr) {
//           int n = arr.size();
//           vector<int>ans;
//           int cele = -1; // critical element
//           int index = -1;
//           for(int i=n-1; i>0; i--){
//               if(arr[i]>arr[i-1]){
//                   index = i-1;
//                   ans.push_back(arr[i]);
//                   ans.push_back(arr[i-1]);
//                   cele = arr[i-1];
//                   break;
//               }else{
//                   ans.push_back(arr[i]);
//               }
//           }
//           if(index != -1 && cele != -1){
//               sort(ans.begin(), ans.end());
//               for(int j=0; j<ans.size(); j++){
//                   if(ans[j]>cele){
//                       cele = ans[j];
//                       break;
//                   }
//               }
              
//               arr[index] = cele;
//               index++;
//               int k=0;
//               while(index<n){
//                   if(ans[k]!=cele){
//                       arr[index] = ans[k];
//                       index++;
//                       k++;
//                   }else{
//                       k++;
//                   }
//               }
//           }else{
//               sort(arr.begin(), arr.end()); // in case of no next permutation
//           }
          
//       }
//   };