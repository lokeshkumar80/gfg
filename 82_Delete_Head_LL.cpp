// /*
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */
// class Solution {
//   public:
//     Node *deleteHead(Node *head) {
//         // code here
//         Node* temp = head; // store head in temp node
//         head = head -> next; // move head to next node;
//         temp->next = NULL; // free temp
//         delete temp; // free memory
//         return head;
//     }
// };