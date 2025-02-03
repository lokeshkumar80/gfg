// class Solution {
//   public:
//     vector<long long> factorialNumbers(long long n) {
//         vector<long long>arrfactnums ;
//         int i=0;
//         long long product = 1;
//         long long factnums;
//         // to find factorial num less than or eqaul to n 
//         while(product<=n){
//             i++;
//             product = i*product;
//         }
//         product = product/i;
//         i = i-1;
        
//         factnums = product;
//         while(i>=1){
//             arrfactnums.push_back(factnums);
//             factnums = factnums/i ;
//             i--;
//         }
        
//         // reverse the vector to show starting to end
//         reverse(arrfactnums.begin(), arrfactnums.end());
//         return arrfactnums;
//     }
// };