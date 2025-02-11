// class Solution {
//     public:
//       // Function to sort the array using bubble sort algorithm.
//       void bubbleSort(vector<int>& arr) {
//       // in every iteration  if condition is  if(arr[j]<arr[j+1]){swap(arr[j],arr[j+1]);}
//       // 1st largest gets its position and in the end array will be sorted in increasing order...
//       // in every iteration of outer loop one element gets its position
      
//           int n = arr.size();
//           for(int i=0; i<n-1; i++){
//               for(int j=0; j<n-1-i; j++){
//                   if(arr[j]>arr[j+1]){
//                       swap(arr[j],arr[j+1]);
//                   }
//               }
//           }
//       }
//   };