// class Solution{   
//     public:
//         pair<int, int> get(int a, int b){
//             a = a+b;
//             b = a-b;// from this a = 2b // a+b-b = a 
//             a = a-b; // a-(a-b) = b // also 2b - b
//             pair<int, int>ans = {a, b};
//             return ans;
//         }
//     };