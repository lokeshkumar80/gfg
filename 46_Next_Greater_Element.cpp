// class Solution {
//     public:
    
//       // Function to find the next greater element for each element of the array.
//       // this is the function define by me.....
      
//       // Code 1 : Shows TLE for last test case 1110/1111
//       // int nextgreaterelement(vector<int>&arr, int currentelement, int index){
//       //     int n = arr.size();
//       //     int anselement = -1;
//       //     while(index<n){
//       //         if(arr[index]>currentelement){
//       //             anselement = arr[index];
//       //             break; // we have to choose next nearest greater element
//       //         }
//       //         index++;
//       //     }
//       //     return anselement;
//       // }
      
//       // vector<int> nextLargerElement(vector<int>& arr) {
//       //     int n = arr.size();
//       //     vector<int>ans;
//       //     int anselement;
//       //     int i=0;
//       //     while(i<n){
//       //         anselement = nextgreaterelement(arr, arr[i], i+1);
//       //         ans.push_back(anselement);
//       //         i++;
//       //     }
//       //     return ans;
//       // }
      
//       // Code 2 : This code also shows TLE for the last case 1110/1111
//       // vector<int> nextLargerElement(vector<int>& arr) {
//       //     int n = arr.size();
//       //     vector<int>ans;
//       //     int anselement = -1;
//       //     int i=0;
//       //     int index = 0;
//       //     while(i<n){
//       //         if(i+1<n && arr[i+1] > arr[index]){
//       //             anselement = arr[i+1];
//       //             ans.push_back(anselement);
//       //             anselement = -1;
//       //             index++;
//       //             i = index;
//       //         }
//       //         else if(i==n-2 || i==n-1){
//       //             ans.push_back(anselement);
//       //             index++;
//       //             i = index;
//       //         }
//       //         else{
//       //             i++;
//       //         }
//       //     }
//       //     return ans;
//       // }
      
//       // // Code 3 : same issue shows TLE for last case
//       //     vector<int> nextLargerElement(vector<int>& arr) {
//       //     int n = arr.size();
//       //     vector<int> ans;
//       //     int i;
      
//       //     for (int index = 0; index < n; index++) {
//       //         i = index+1;
//       //         while (i<n) {
//       //             if(arr[i]>arr[index]){
//       //                 ans.push_back(arr[i]);
//       //                 break;
//       //             }
//       //             else if(i==n-1){
//       //                 ans.push_back(-1);
//       //             }
//       //             i++;
//       //         }
//       //     }
          
//       //     ans.push_back(-1); // for last element as in while loop for i=index+1 becomes i=n for last element
//       //     // so for last element we can not enter in the loop....
          
//       //     return ans;
//       // }
      
//       // // This code runs successfully...
//       vector<int> nextLargerElement(vector<int>& arr) {
//           int n = arr.size();
//           vector<int> ans(n, -1); // Initialize with -1 (default if no greater element)
//           stack<int> s; // Stack to keep track of indices
      
//           for (int i = 0; i < n; i++) {
//               // Pop elements from stack if the current element is greater
//               while (!s.empty() && arr[i] > arr[s.top()]) {
//                   ans[s.top()] = arr[i]; // Assign the next greater element
//                   s.pop();
//               }
//               s.push(i); // Push current index to stack
//           }
//           return ans;
//       }
      
//   };