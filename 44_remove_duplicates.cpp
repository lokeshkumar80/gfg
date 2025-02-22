// class Solution {
//     public:
  
//       string removeDups(string &s) {
//           int i = 0;
//           string ans = "";
//           while(i < s.length()){
//               // here if condition is very important .. that is if the s[i] charcter is not in ans
//               // then push_back() it to ans so bcz of that a string of unique characters will be created
//               if(ans.find(s[i]) == string::npos){
//                   ans.push_back(s[i]);
//               }
//               i++;
//           }
//           return ans;
//       }
//   };