
// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
// // Code 1 :
// // This code takes more time than expected O(n^2)
//         int n = arr.size();
//         vector<int>majArr;
//         for(int i=0; i<n; i++){
//             int majority = 0; // majority 1 to hr kisi ke liye ho jayegi jb same element ka same se match hoga
//             for(int j=0; j<n; j++){
//                 if(arr[j] == arr[i]){
//                     majority++;
//                 }
//             }
//             majArr.push_back(majority);
//         }
//         auto max_maj = max_element(majArr.begin(), majArr.end());
//         int index = distance(majArr.begin(), max_maj);
//         if(n==1){
//             return arr[0];
//         }
//         if(majArr[index] == 1){
//             return -1;
//         }
//         else if(majArr[index] > n/2){
//             return arr[index];
//         }
//         else{
//             return -1;
//         }

// // code 2
// // Code 2
        // int n = arr.size();
        // int count = 1;
        // int majority = 0;
        // // int index = 0;
        // int majority_element;
        // sort(arr.begin(), arr.end());
        // if(n==1){
        //     return arr[0];
        // }
        // for(int i=1; i<n; i++){
        //     if(arr[i]==arr[i-1]){
        //         count++;
        //         if(i!= n-1){
        //         continue;
        //         }
        //     }
        //     if(count>majority){
        //          majority = count;
        //          majority_element = arr[i-1];
        //         //  index = i - (count-1);
        //          count = 1;
        //     }
        // }
        // if(majority>n/2){
        //     // return arr[index]; // on using index for return 1110/1111 cases are passed 
            // but on returning majority element directly all cases passed
        //     return majority_element;
        // }
        // else if(majority == 1){
        //     return -1;
        // }
        // else{
        //     return -1;
        // }
//  }
// };