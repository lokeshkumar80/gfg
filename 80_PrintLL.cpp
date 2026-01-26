// /*
// class Node {
//   public:
//     int data;
//     Node* next;

//     // Default constructor
//     Node() {
//         data = 0;
//         next = NULL;
//     }

//     // Parameterised Constructor
//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     vector<int> printList(Node *head) {
//         // code here
//         vector<int>LL;
//         Node* temp = head;
//         int val;
//         while(temp != NULL){
//             val = temp->data;
//             LL.push_back(val);
//             temp = temp->next;
//         }
//         return LL;
//     }
// };