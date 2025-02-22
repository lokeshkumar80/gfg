// class Solution {
//     public:
//       // Function to check if a string is a palindrome.
//       bool isPalindrome(string& s) {
//           int i=0;
//           int j=s.length()-1;
//           while(i<=j){
//               if(s[i]!=s[j]){
//                   return false;
//               }
//               i++;
//               j--;
//           }
//           // if we are out of the loop means the string is palindrome...
//           return true;
//       }
//   };