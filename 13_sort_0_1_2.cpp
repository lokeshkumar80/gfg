// class Solution {
//   public:
//     void sort012(vector<int>& arr) {
//         int n = arr.size();
//         // using two pointer approach
//         // s and e are the pointers which stores 0 and 2 respectively ;
//         int s =0 ;
//         int e = n-1;
//         int index = 0;
//         // Condition in while(index<=e) is catch ( That is when we reached index = e
//         // no need to move forward bcz all 0, 1, 2 are sorted on this step)
//         while(index<=e){
//             if(arr[index]==0){
//                 swap(arr[s],arr[index]);
//                 s++;
//             }
//             else if(arr[index]==2){
//                 swap(arr[e],arr[index]);
//                 e--;
//                 // catch
//                 // after this we can't do index update
//                 continue;
                
//             }
//             // update index
//             index++;
//         }
//     }
// };