// class Solution {
//     // Function to find the leaders in the array.
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         int n = arr.size();
//         vector<int>ans;
//         stack<int>s;
//         s.push(arr[n-1]);
//         int i=n-1;
//         while(i>=0){
//             if(arr[i]>=s.top()){
//                 ans.push_back(arr[i]);
//                 s.pop();
//                 s.push(arr[i]);
//             }
//             i--;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };