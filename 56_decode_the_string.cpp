// class Solution {
//     public:
    
//       string decodedString(string &s) {
//           stack<int> numStack;          // Stack to store numbers (k values)
//           stack<string> strStack;  // Stack to store previous substrings
//           string currentString = "";    // Stores the current substring being built
//           int num = 0;                       // Stores the current number
      
//           for (char c : s) {
//               if (isdigit(c)) {
//                   num = num * 10 + (c - '0');  // Handle multi-digit numbers
//               } else if (c == '[') {
//                   numStack.push(num);          // Push the multiplier onto the stack
//                   strStack.push(currentString); // Push current substring
//                   num = 0;                     // Reset num for next use
//                   currentString = "";           // Reset currentString
//               } else if (c == ']') {
//                   int repeatTimes = numStack.top();
//                   numStack.pop();
                  
//                   string decodedString = strStack.top();
//                   strStack.pop();
                  
//                   // Correct way to repeat the string
//                   while (repeatTimes--) {
//                       decodedString += currentString;
//                   }
      
//                   currentString = decodedString;
//               } else {
//                   currentString += c;  // Append normal characters
//               }
//           }
//           return currentString;
//       }   
//   };
  