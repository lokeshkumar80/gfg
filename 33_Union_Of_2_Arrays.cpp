// class Solution {
//     public:
//       // Function to return the count of number of elements in union of two arrays.
//       int findUnion(vector<int>& a, vector<int>& b) {
          
//           //Code 1 : This code is correct but give TLE so set
//           // int ans = -1;
//           // //merge b to a
//           // for(auto it:b){
//           //     a.push_back(it);
//           // }
          
//           // // sort array a to remove duplicates // that is for unique elements in union       
//           // sort(a.begin(), a.end());
//           // int n = a.size();
//           // int i=0;
//           // while(i<n-1){
//           //     if(a[i]==a[i+1]){
//           //         a.erase(a.begin()+i);
//           //         n = a.size();
//           //         continue;
//           //     }
//           //     i++;
//           // }
//           // // return size of the union array
//           // ans = a.size();
//           // return ans;
          
//           // Code 2 : Using set
//           unordered_set<int> unionSet(a.begin(), a.end());  // Insert elements of `a`
//           unionSet.insert(b.begin(), b.end());  // Insert elements of `b`
//           return unionSet.size();
//       }
//   };