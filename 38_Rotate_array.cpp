// class Solution {
//     public:
  
//       // Function to rotate an array by d elements in counter-clockwise direction.
//       void rotateArr(vector<int>& arr, int d) {
//           // // Code 1 : This code is also correct but we have to done this in in-place that is in O(1) extra space
//           // // convert this question to rotate an array by (n-d) elements in clockwise direction
//           // // will result in same as per the original question requirement.
//           // // or calculate new index as (index + n - d)%n rotate array counter-clockwise by d elements in the array
//           // int n = arr.size();
//           // int k = n-d;
//           // vector<int> temp(n);
//           // int newindex;
//           // for(int index = 0; index<n; index++){
//           //     newindex = (index+k)%n ;
//           //     temp[newindex] = arr[index];
//           // }
//           // arr = temp;
          
//       // // Code 2 : in O(1) space that is in-place
//           int n = arr.size();
//           d = d % n;  // Handle cases where d >= n
      
//           // Reverse first d elements
//           reverse(arr.begin(), arr.begin() + d);
      
//           // Reverse remaining n-d elements
//           reverse(arr.begin() + d, arr.end());
      
//           // Reverse the entire array
//           reverse(arr.begin(), arr.end());
  
//       }
//   };