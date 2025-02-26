// class Solution {
//     public:
//       string expand(string s, int i, int j){
//           string ans = "";
//           int len = 0;
//           if(j==s.length()){
//               return ans;
//           }
//           while(i>=0 && j<s.length()){
//               if(s[i] == s[j]){
//                   j++;
//                   i--;
//               }
//               else{
//                   i++;
//                   j--;
//                   len = j-i+1;
//                   ans = s.substr(i,len);
//                   break;
//               }
//           }
//           if(i<0 || j>=s.length()){
//               i++;
//               j--;
//               len = j-i+1;
//               ans = s.substr(i,len);
//           }
//           return ans;
//       }
      
//       string longestPalindrome(string s) {
//           // using expansion for odd length and even length..
//           vector<string>ans;
//           vector<int>length;
//           int n = s.length();
//           string oddtemp = "";
//           string eventemp = "";
//           for(int i = 0; i<n; i++){
//               oddtemp = expand(s, i, i);
//               ans.push_back(oddtemp);
//               length.push_back(oddtemp.length());
//               eventemp = expand(s, i, i+1);
//               ans.push_back(eventemp);
//               length.push_back(eventemp.length());
//           }
//           auto it = max_element(length.begin(), length.end());
//           int index = distance(length.begin(), it);
//           return ans[index];
//       }
//   };