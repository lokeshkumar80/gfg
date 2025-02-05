// class Solution {
//   public:
//     // Function to count the frequency of all elements from 1 to N in the array.
//     vector<int> frequencyCount(vector<int>& arr) {
//         // keep in mind here 1 based indexing is used for storing result : result[i] represents the freq of number i
//         vector<int>result;
//         // first sort the array to write the optimized code .....
//         sort(arr.begin(), arr.end());
//         int n = arr.size();
//         int s = 1;
//         int e = n;
//         int countnum = 0;
//         int i = 0;
        
//         while(i<n){
//             if(arr[i]==s){
//                 countnum++;
//                 if(i==n-1){
//                     result.push_back(countnum); // for adding occurence of the last number in the array to the result
//                 }
//                 i++;
//             }
//             else{
//                 result.push_back(countnum);
//                 countnum = 0;
//                 s++;
//             }
//         }
        
//         // for handling remaining numbers that are not in the array...
//         int m = result.size();
//         while(m<n){
//             result.push_back(0);
//             m++;
//         }
//         return result; 
//     }
// };