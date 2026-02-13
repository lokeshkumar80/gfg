// // User function Template for C++

// class Solution {
//   public:
//     void solve(stack<int> &st, int target){
//         // Base condition and required operation
//         if(st.empty()){
//             st.push(target);
//             return;
//         }
        
//         // step1
//         int temp = st.top();
//         st.pop();
        
//         //step2: recursive call
//         solve(st, target);
        
//         //step3: backtracking
//         st.push(temp);
//     }
    
//     stack<int> insertAtBottom(stack<int> st, int x) {
//         // using recursion 
//         solve(st, x);
//         return st;
//     }
// };