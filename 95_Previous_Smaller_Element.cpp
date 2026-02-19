// class Solution {
//   public:
//     vector<int> prevSmaller(vector<int>& arr) {
//         //  code here
        
//         // similar question of next smaller element
//         // if we traverse array right to left then O(n^2)
//         // so here we are traversing left to right
        
//         vector<int>ans(arr.size());
        
//         // stack to store elements to compare
//         stack<int>s;
        
//         // store -1 for the first element to compare as it is always -1
//         s.push(-1);
        
//         for(int i = 0; i<arr.size(); i++){
//             int curr = arr[i];
            
//             // pop all elements untill smaller one not find
//             while(s.top()>=curr){
//                 s.pop();
//             }
            
//             // as very previous smaller one find so now put it in ans with respective index
//             ans[i] = s.top();
            
//             // put curr as it is not compared yet
//             s.push(curr);
//         }
//         return ans;   
//     }
// };