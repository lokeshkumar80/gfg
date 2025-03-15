// class Solution {
//     public:
//       // Function to find the first non-repeating character in a string.
//       vector<int>freq(string s){
//           vector<int>freqcount;
//           int n = s.length();
//           int i=0;
//           while(i<26){
//               int count=0;
//               for(int j=0; j<n; j++){
//                   if(s[j]=='a'+i){
//                       count++;
//                   }
//               }
//               freqcount.push_back(count);
//               i++;
//           }
//           return freqcount;
//       }
      
//       char nonRepeatingChar(string &s) {
//           char ans = '$';
//           int n = s.length();
//           vector<char>ansarray;
//           vector<int>freqarray = freq(s);
          
//           int i=0;
//           while(i<26){
//               if(freqarray[i]==1){
//                   ans = 'a'+i;
//                   ansarray.push_back(ans);
//               }
//               i++;
//           }
          
//           int m = ansarray.size();
//           int index = INT_MAX ;
//           int posindex;
          
//           i=0;
//           while(i<m){
//               posindex = s.find(ansarray[i]);
//               index = min(index, posindex);
//               i++;
//           }
          
//           if(index != INT_MAX){
//               ans = s[index];
//               return ans;
//           }
//           return ans;
//       }
//   };