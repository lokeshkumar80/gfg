// class Solution {
//     public:
//       // Function to reverse words in a given string.
//       string reverseWords(string &s){
//           vector<string>check;
//           string temp = "";
//           string ansstring = "";
//           int n = s.length();
//           int i = 0;
//           int flag = 0;
          
//           // storing words in the vector string...
//           while(i<n){
//               if(s[i]!=' '){
//                   flag = 1; // is used for space just after words
//                   temp.push_back(s[i]);
//                   // for ensuring storing of the last word
//                   if(i==n-1){
//                       check.push_back(temp);
//                   }
//               }
//               else if(flag){
//                   // we are not storing any space..
//                   // here it is just the indication of words end...
//                   check.push_back(temp);
//                   temp = "";
//                   flag = 0;
//               }
//               // updating index ....
//               i++;
//           }
          
//           // Reverse the words in the vector...
//           int m = check.size();
//           int j = 0;
//           int e = m-1;
//           while(j<=e){
//               swap(check[j], check[e]);
//               j++;
//               e--;
//           }
          
//           // now form the required string...
//           int k=0;
//           while(k<m){
//               ansstring += check[k];
//               // Now adding space after each word except the last word ...
//               if(k<m-1){
//                   ansstring += ' ';
//               }
//               k++;
//           }
//           // cout<<ansstring;
//           return ansstring;
//       }
//   };