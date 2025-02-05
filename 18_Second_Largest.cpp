// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int getSecondLargest(vector<int> &arr) {
        
//       //  //Code 1:
//       //  // for second largest element we can sort the array first then apply the same logic 
//       //  // as of largest element of the unsorted array
        
//         int n = arr.size();
//         sort(arr.begin(), arr.end());
//         int largest_element = INT_MIN;
//         vector<int>larArr;
//         larArr.push_back(-1); // to handle non existence of second largest element
//         for(int i=0; i<n; i++){
//             if(arr[i]>largest_element){
//                 largest_element = arr[i];
//                 larArr.push_back(largest_element);
//             }
//         }
//         int m = larArr.size();
//         int b = larArr[m-2]; // for second largest element
//         return b;
        
//       //  //Code 2: 
//       //  // we can also solve this question without sorting the array first and with creating any vector array
      
//         // int n = arr.size();
//         // int largest_element = INT_MIN;
//         // for(int i=0; i<n; i++){
//         //     if(arr[i]>largest_element){
//         //         largest_element = arr[i];
//         //     }
//         // }
//         // int second_largest = -1;
//         // for(int i=0; i<n; i++){
//         //     if(arr[i]<largest_element && arr[i]>second_largest){
//         //         second_largest = arr[i];
//         //     }
//         // }
//         // return second_largest;
        
//         // // Both codes submitted successfully ...
//     }
// };