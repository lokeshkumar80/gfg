// class Solution {
//   public:
//     string reverse(const string& str) {
//         // code here
        
//         stack<char>s;
//         string ans = "";
//         int i=0;
        
//         //put each character in stack
//         while(i<str.length()){
//             s.push(str[i]);
//             i++;
//         }
        
//         // now add each char from the top of stack to empty string
//         while(!s.empty()){
//             char ch = s.top();
//             s.pop();
//             ans += ch;
//         }
        
//         return ans;
//     }
// };