// // POTD Problem : Understand it and learn Dynamic Programming and solve it again 

// class Solution {
//     public:
//   // Code 1 : it is brute force technique...it shows TLE bcz O(n^3);
//       // bool isPalindrome(const string &s) {
//       //     int left = 0, right = s.length() - 1;
//       //     while (left < right) {
//       //         if (s[left] != s[right]) return false;
//       //         left++;
//       //         right--;
//       //     }
//       //     return true;
//       // }
      
//       // int countPS(string &s){
//       //     int n = s.length();
//       //     vector<string> substrings;
//       //     int palindromeCount = 0;
      
//       //     for (int i = 0; i < n; i++){ // Start index
//       //         string temp = "";
//       //         for (int j = i; j < n; j++) { // End index
//       //             temp += s[j];  // Append character to form substring
//       //             if (temp.length() >= 2 && isPalindrome(temp)) {
//       //                 palindromeCount++;
//       //             }
//       //         }
//       //     }
//       //     return palindromeCount;
//       // }
      
//       Code 2 : Using Dynamic Programming...
      
//       int countPS(string &s) {
//           int n = s.length();
//           if (n < 2) return 0; // No palindromes of length >= 2 in single char strings
      
//           vector<vector<bool>> dp(n, vector<bool>(n, false));
//           int count = 0;
      
//           // Fill the DP table
//           for (int len = 1; len <= n; len++) { // Length of substring
//               for (int i = 0; i <= n - len; i++) {
//                   int j = i + len - 1; // End index
      
//                   if (s[i] == s[j]) {
//                       if (len == 1) dp[i][j] = true; // Single character (base case)
//                       else if (len == 2) dp[i][j] = true; // Two characters (base case)
//                       else dp[i][j] = dp[i + 1][j - 1]; // Expand from the middle
      
//                       // Count palindromes of length >= 2
//                       if (len >= 2 && dp[i][j]) count++;
//                   }
//               }
//           }
//           return count;
//       }
//   };