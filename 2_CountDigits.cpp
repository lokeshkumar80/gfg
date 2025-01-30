//  // Function to count the number of digits in n that evenly divide n
//     int evenlyDivides(int n) {
//         int ans = 0;
//         int m = n;
//         while(m!=0){
//            int d = m%10;
//             if(d==0){
//                 m = m/10; // This is important to update m here otherwise it becomes infinite loop.
//                 continue;
//             }
//             else if(n%d == 0){
//                 ans++;
//             }
//             m = m/10;
//         }
//         return ans;
//     }