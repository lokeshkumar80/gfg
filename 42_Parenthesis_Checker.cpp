// class Solution {
//     public:
//       bool isBalanced(string& s) {
//           // this can be solved using stack concept ....
//           int n = s.length();
//           string ans = "";
//           int i=0;
          
//           while(i<n){
//               if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                   ans.push_back(s[i]);
//               }
//               else if((s[i]==')' && ans[ans.length()-1]=='(') || (s[i]=='}' && ans[ans.length()-1]=='{') || (s[i]==']' && ans[ans.length()-1]=='[')){
//                   ans.pop_back();
//               }
//               else{
//                   return false;
//               }
//               i++;
//           }
          
//           if(ans.length()==0){
//               return true;
//           }
//           else{
//               return false;
//           }
//       }
//   };