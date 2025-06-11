// class Solution {
//   public:
//     // Function to find the majority elements in the array
//     vector<int> findMajority(vector<int>& arr) {
//     //     vector<int>ans;
        
//     //     int sum = 0;
//     //     for(int i=0; i<arr.size(); i++){
//     //         sum += arr[i];
//     //     }
        
//     //     int n = sum/3; // return integral value like 3.67 == 3
//     //     for(int j=0; j<arr.size(); j++){
//     //         if(arr[j]>n){
//     //             ans.push_back(arr[j]);
//     //         }
//     //     }
        
//     //     sort(ans.begin(), ans.end());
//     //     return ans;
    
//     // Understand problem first with given input output
    
//     vector<int>ans;
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     int j=0;
//     int count = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//         else if(count > n/3){
//             ans.push_back(arr[j]);
//             count=1;
//         }
//         else{
//             count = 1;
//         }
    
//         // special case
//         if(i==n-1 && count > n/3){
//             ans.push_back(arr[i]);
//         }
        
//         j++;
//     }
    
//     // special case
//     if(n==1){
//         ans.push_back(arr[0]);
//     }
    
//     // for increasing order
//     sort(ans.begin(), ans.end());
//     return ans;
//     }
// };