// void push(stack<int>& s, int a) {
//     // Your code goes here
//     s.push(a);
// }

// bool isFull(stack<int>& s, int n) {
//     // Your code goes here
//     if(s.size()==n){
//         return true;
//     }else{
//         return false;
//     }
// }

// bool isEmpty(stack<int>& s) {
//     // Your code goes here
//     if(s.size() == 0){
//         return true;
//     }else{
//         return false;
//     }
// }

// int pop(stack<int>& s) {
//     // Your code goes here
//     if(!isEmpty(s)){
//         int temp = s.top();
//         s.pop();
//         return temp;
//     }else{
//         return -1;
//     }
// }

// int getMin(stack<int>& s) {
//     // Your code goes here
//     stack<int>ans;
//     while(!isEmpty(s)){
//         int temp = s.top();
//         s.pop();
//         if(!ans.empty()){
//             if(ans.top() > temp){
//                 ans.push(temp);
//             }
//         }else{
//             ans.push(temp);
//         }
//     }
    
//     return ans.top();
// }