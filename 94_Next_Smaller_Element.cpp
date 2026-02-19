// class Solution {
//   public:
//     vector<int> nextSmallerEle(vector<int>& arr) {
//         //  code here
        
//         // if we traverse array left to right then O(n^2)
//         // so we are traversing right to left
        
//         vector<int>ans(arr.size());
        
//         // stack to store elements to compare
//         stack<int>s;
        
//         // store -1 for the last element to compare as it is always -1
//         s.push(-1);
        
//         for(int i = arr.size()-1; i>=0; i--){
//             int curr = arr[i];
            
//             // pop all elements untill smaller one not find
//             while(s.top()>=curr){
//                 s.pop();
//             }
            
//             // as very next smaller one find so now put it in ans with respective index
//             ans[i] = s.top();
            
//             // put curr as it is not compared yet
//             s.push(curr);
//         }
//         return ans;
//     }
// };