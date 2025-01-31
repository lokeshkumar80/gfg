// class Solution {
//   public:
//     int peakElement(vector<int> &arr) {
//         int n = arr.size();
//         // extreme conditions are made carefully as 1st and last element can also be peak  
//         // bcz before first element and after last element values are consideres negative infinity...
//         if (n == 1) return 0; // Single element always peak and index will be 0
//         for(int i = n-1; i>=0; i--){
//             if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])){
//                 return i;
//             }
//         }
//         // understand if condition carefully
//         return -1; // This line will not be executed if peak is guranteed 
//     }
// };