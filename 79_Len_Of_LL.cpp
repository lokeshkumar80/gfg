// /*
// class Node {
//   public:
//     int data;
//     Node *next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     int getCount(Node* head) {
//         // Code here
//         Node* temp = head;
//         int len = 1; // as no. of nodes 1<=len<=4*10^4
//         while(temp->next != NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }
// };