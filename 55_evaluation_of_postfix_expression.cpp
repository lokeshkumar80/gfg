// class Solution {
//     public:
//     // just apply the rule of evaluation of postfix expression....
//       int evaluate(vector<string>& arr) {
//           int n = arr.size();
//           int a;
//           int b;
//           int result;
//           stack<int>ans;
//           int i=0;
//           while(i<n){
//               if(arr[i]=="+" || arr[i]=="-" || arr[i]=="*" || arr[i]=="/"){
//                   b = ans.top();
//                   ans.pop();
//                   a = ans.top();
//                   ans.pop();
//                   if(arr[i]=="+"){
//                       result = a + b;
//                       ans.push(result);
//                   }else if(arr[i]=="-"){
//                       result = a - b;
//                       ans.push(result);
//                   }else if(arr[i]=="*"){
//                       result = a * b;
//                       ans.push(result);
//                   }else{
//                       result = a / b;
//                       ans.push(result);
//                   }
//               }
//               else{
//                   a = stoi(arr[i]);
//                   ans.push(a);
//               }
//               i++;
//           }
//           return ans.top();
//       }
//   };