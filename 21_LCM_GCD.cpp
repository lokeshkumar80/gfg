// class Solution {
//     public:
//       vector<int> lcmAndGcd(int a, int b) {
//           vector<int>ans;
//           // initialization of LCM
//           int LCM = min(a,b);
//           while(LCM<=a*b){
//               if(LCM%a == 0 && LCM%b == 0){
//                   ans.push_back(LCM);
//                   break;
//               }
//               else{
//                   LCM = LCM + min(a,b);
//               }
//           }
//           // Initialization Of GCD
//           int GCD = min(a,b);
//           int temp;
//           a = max(a, b);
//           while(GCD>=1){
//               if(a%GCD == 0){
//                   ans.push_back(GCD);
//                   break;
//               }
//               else{
//                   temp = GCD;
//                   GCD = a%GCD;
//                   a = temp;
//               }
//           }
//           return ans;
//       }
//   };