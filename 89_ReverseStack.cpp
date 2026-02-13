// class Solution{ 
//   public:
  
//     void solve(stack<int> &st, int target, int pos){
//         // Base condition and required operation
//         if(st.size() == pos){
//             st.push(target);
//             return;
//         }
        
//         // step1
//         int temp = st.top();
//         st.pop();
        
//         //step2: recursive call
//         solve(st, target, pos);
        
//         //step3: backtracking
//         st.push(temp);
//     }
    
//     void reverseStack(stack<int> &st) {
//         // code here
//         int n = st.size();
//         for(int i=0; i<n; i++){
//             int target = st.top();
//             st.pop();
//             int pos = i;
//             solve(st, target, pos);
//         }
//     }
// };