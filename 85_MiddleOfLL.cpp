// /*
// class Node {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// }; */

// class Solution {
//   public:
    
//     int findlength(Node* head){
//         int len=1;
//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }
    
//     int getMiddle(Node* head) {
//         // code here
//         int len = findlength(head);
//         int pos = len/2 + 1;
//         Node* temp = head;
//         while(pos!=1){
//             temp = temp->next;
//             pos--;
//         }
//         return temp->data;
//     }
// };