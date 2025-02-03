// class Solution {
//   public:
//     int minJumps(vector<int>& arr) {
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int jumps = 0;
//         int index = 0;
//         while(s<e){
//             if(arr[s] == 0){
//                 return -1;
//             }
//             else {
//                 index = s;
//                 // here we chooses max step first bcz we have to reach in min steps 
//                 s = s+arr[s];
                
//                 //handle the situation when updated s reaches e and more than e and arr[e] == 0
//                 // so here the condition of if( ) is very important ....
//                 if(s>=e){
//                     jumps++;
//                     return jumps;
//                 }
                
//                 // to handle which length of step reaches highest index
//                 int maxjumpVal = 0;
//                 int finalIndex = 0;
//                 for(int i=index+1; i<=s; i++){
//                     if(arr[i]+i > maxjumpVal){
//                         maxjumpVal = arr[i]+i;
//                         finalIndex = i;
//                     }
//                 }
//                 s = finalIndex;
                
//                 // for handle 0 situation which gives return -1 , to back by 1 
//                 if(arr[s] == 0){
//                     while(s > index+1){
//                         s = s-1;
//                         if(arr[s] != 0){
//                             break;
//                         }
//                     }
//                 }
//                 jumps++;
//             }
//         }
//         return jumps;
//     }
// };