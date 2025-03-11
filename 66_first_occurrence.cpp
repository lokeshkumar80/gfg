// // Function to locate the occurrence of the string x in the string s.
// class Solution {
//     public:
//     // without using the inbuilt function...
//       int firstOccurence(string &txt, string &pat) {
//           int n = txt.size();
//           int m = pat.size();
//           int ans = -1;
//           int i=0;
//           while(i+m<=n){
//               if(txt.substr(i, m) == pat){
//                   ans = i;
//                   break;
//               }
//               i++;
//           }
//           return ans;
//       }
//   };
  