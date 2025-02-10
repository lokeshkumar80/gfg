// class Solution {
//     public:
//       void mergeArrays(vector<int>& a, vector<int>& b) {
//           // store size of m
//           int m = a.size();
          
//           // copy b to a
//           for(auto it:b){
//               a.push_back(it);
//           }
          
//           // now sort a
//           sort(a.begin(), a.end());
          
//           // now modify b as per requirements
//           int n = a.size();
//           int index = 0;
//           for(int i=m; i<n; i++){
//               b[index] = a[i];
//               index++;
//           }
          
//       // now modify a as per requirements 
//       // so some rules regarding erase
//       // vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
//       // Erase elements from index 2 to 4 (i.e., 3rd to 5th elements)
//       // vec.erase(vec.begin() + 2, vec.begin() + 5); // it is actually vec.erase(index = 2, index = 4)
//       // vec.erase(inclusive length, exclusive length);
//       //so  a.erase(a.begin()+m, a.begin()+n-1) does not give expected output
//           a.erase(a.begin()+m , a.begin()+n);
//       }
//   };