// class Solution {
//     public:
    
//           // Functions of 2nd Approach...
//           // int min_in_arr(vector<int>& nums){
//           //     auto min_it = min_element(nums.begin(), nums.end());
//           //     int minimum = *min_it;
//           //     int i = distance(nums.begin(), min_it);
//           //     nums.erase(nums.begin()+i);
//           //     return minimum;
//           // }
          
//           // vector<int> allmin_indices(vector<int>& arr, int min){
//           //     int n = arr.size();
//           //     vector<int>min_indices;
//           //     // Iterate to find all occurrences
//           //     for (size_t i = 0; i < n; i++) {
//           //         if (arr[i] == min) {
//           //             min_indices.push_back(i);
//           //         }
//           //     }
//           //     return min_indices;
//           // }
          
//           // int calarea(vector<int>& arr, vector<int>&min_indices){
//           //     int n = arr.size();
//           //     int m = min_indices.size();
//           //     int heremaxarea = 0;
//           //     int width;
//           //     int area;
//           //     int index;
//           //     for(int i=0; i<m; i++){
//           //         index = min_indices[i];
//           //         int fi = index;
//           //         int bi = index;
//           //         while(fi<n){
//           //             if(fi+1 < n && arr[index]<=arr[fi+1]){
//           //                 fi++;
//           //             }
//           //             else{
//           //                 break;
//           //             }
//           //         }
                  
//           //         while(bi>=0){
//           //             if(bi-1>=0 && arr[index]<=arr[bi-1]){
//           //                 bi--;
//           //             }
//           //             else{
//           //                 break;
//           //             }
//           //         }
//           //         // so now we can calculate width
//           //         width = (fi - bi) + 1 ;
//           //         area = width*arr[index];
//           //         if(area>heremaxarea){
//           //             heremaxarea = area;
//           //         }
//           //     }
//           //     // cout<<heremaxarea<<endl;
//           //     return heremaxarea;
//           // }
          
//       int getMaxArea(vector<int> &arr) {
//           // // Code Runs Successfully but shows TLE...1010/1112
//           // int n = arr.size();
//           // int height;
//           // int width;
//           // int area;
//           // int maxarea = 0;
//           // for(int i=0; i<n; i++){
//           //     for(width=2; width+i <= n; width++){
//           //         auto min_it = min_element(arr.begin()+i, arr.begin()+i+width);
//           //         height = *min_it;
//           //         area = height*width;
//           //         if(area>maxarea){
//           //             maxarea = area;
//           //         }
//           //     }
//           // }
//           // // for width = 1
//           // width = 1;
//           // auto max_it = max_element(arr.begin(), arr.end());
//           // height = *max_it;
//           // area = height*width;
//           // if(area>maxarea){
//           //     maxarea = area;
//           // }
//           // return maxarea;
          
//           // 2nd Approach --> Also give TLE
//           // int n = arr.size();
//           // vector<int>nums = arr;
//           // int maxarea = 0;
//           // int i=0;
//           // while(i<n){
//           //     int min = min_in_arr(nums);
//           //     vector<int>min_indices = allmin_indices(arr, min);
//           //     int area = calarea(arr, min_indices);
//           //     if(area>maxarea){
//           //         maxarea = area;
//           //     }
//           //     i++;
//           // }
//           // return maxarea;
              
//           stack<int> st; // Stack to store indices
//           int max_area = 0;
//           int n = arr.size();
      
//           for (int i = 0; i <= n; i++) {
              
//               int curr_height;
//               if (i == n) {
//                   curr_height = 0;  // Consider height as 0 at the end
//               } else {
//                   curr_height = arr[i];  // Normal case: use actual height
//               }
      
//               while (!st.empty() && arr[st.top()] > curr_height) {
//                   int height = arr[st.top()];
//                   st.pop();
      
//                   int width;
//                   if (st.empty()) {
//                       width = i;  // If the stack is empty, width is i (full width)
//                   } else {
//                       width = i - st.top() - 1;  // Otherwise, width is between i and the top index of the stack
//                   }
//                   max_area = max(max_area, height * width);
//               }
      
//               st.push(i);
//           }
      
//           return max_area;
//       }
//   };