// class Solution {
//   public:
  
//     void InsertInsorted(stack<int> &st, int target){
        
//         // Base Case
//         if(st.empty() || st.top() < target){
//             st.push(target);
//             return;
//         }
        
//         // step1
//         int temp = st.top();
//         st.pop();
        
//         // step2 : recursion
//         InsertInsorted(st, target);
        
//         //step3 : backtracking
//         st.push(temp);
//     } 
    
//     void sortStack(stack<int> &st) {
//         // code here
        
//         // Base Condition
//         if(st.empty()){
//             return;
//         }
        
//         // Step 1 ... first pop out each element untill st.empty() is true (checked in Base Condition)
//         int target = st.top();
//         st.pop();
        
//         // step 2 : recursion for step 1
//         sortStack(st);
        
//         // step 3: insert each element in sorted stack...
//         InsertInsorted(st, target);
//     }
// };