// // DO IT AGAIN .....IT WAS POTD and Help taken...

// class Solution {
//     public:
//       int maxLength(string& s) {
//           stack<int> st;  
//           int maxlength = 0;
//           int last_invalid = -1;  
  
//           for (int i = 0; i < s.length(); i++) {
//               if (s[i] == '(') {
//                   st.push(i);  
//               } else {
//                   if (!st.empty()) {
//                       st.pop();  
//                       if (!st.empty()) {
//                           maxlength = max(maxlength, i - st.top());
//                       } else {
//                           maxlength = max(maxlength, i - last_invalid);
//                       }
//                   } else {
//                       last_invalid = i;  
//                   }
//               }
//           }
//           return maxlength;
//       }
//   };