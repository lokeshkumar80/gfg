// class Solution {
//     public:
//       // Solve this problem again...as it was POTD Problem and help is taken by chat gpt to understand the problem ...
//       Solution() {
  
//       }
  
//       // input q = 7, queries = [[1,5], [1,2], [1,8], [4], [3], [2], [4]]
//       // For understanding the problem carefully ....
//       // Step	Query	Stack Content	Top Element (peek())	Minimum Element (getMin())
//       // 1   	    1 5	    [5]	                5	                    5
//       // 2	    1 2	    [5, 2]	            2	                    2
//       // 3	    1 8	    [5, 2, 8]	        8	                    2
//       // 4	    4	    [5, 2, 8]	        - (unchanged)	        2 (output)
//       // 5	    3	    [5, 2, 8]	        8 (output)	            2
//       // 6	    2	    [5, 2]	            2	                    2
//       // 7	    4	    [5, 2]	            - (unchanged)	        2 (output)
//       // output: [2, 8, 2]
      
//       stack<int> mainStack;  // Stack to store elements
//       stack<int> minStack;   // Stack to store the minimum element
      
//       // Add an element to the top of Stack
//       void push(int x) {
//           // code here
//           mainStack.push(x);
//           // Push to minStack only if it is empty or x is the new minimum
//           if (minStack.empty() || x <= minStack.top()) {
//               minStack.push(x);
//           }
//       }
  
//       // Remove the top element from the Stack
//       void pop() {
//           // code here
//           if (!mainStack.empty()) {
//               // If top of mainStack is same as minStack, pop from minStack too
//               if (mainStack.top() == minStack.top()) {
//                   minStack.pop();
//               }
//               mainStack.pop();
//           }
//       }
  
//       // Returns top element of the Stack
//       int peek() {
//           // code here
//           if (mainStack.empty()) {
//               return -1;
//           }
//           else{
//               return mainStack.top();
//           }
//           return mainStack.top();
//       }
  
//       // Finds minimum element of Stack
//       int getMin() {
//           // code here
//           if (minStack.empty()){
//               return -1;
//           }
//           else{
//               return minStack.top(); 
//           }
//       }
//   };