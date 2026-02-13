// class Solution {
//   public:
//     // Function to delete middle element of a stack.
    
//     void solve(stack<int>& s, int k){
//         // we have created solve function to do the required operations...
        
//         if(k==0){
//             // k==0 to cover o-based indexing from top
//             s.pop();
//             return;
//         }
        
//         int temp = s.top();
//         s.pop();
        
//         solve(s, k-1);
        
//         s.push(temp);
//     }
    
//     void deleteMid(stack<int>& s) {
//         // code here..
//         int n = s.size();
        
//         // Middle element:- floor((size_of_stack+1)/2) (1-based indexing) from the bottom of the stack.
//         // from the top of the stack will be n/2 (o - based indexing)
        
//         int k = n/2;
//         solve(s, k);
//     }
// };