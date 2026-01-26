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
//     Node *insertAtEnd(Node *head, int x) {
//         // Code here
        
//         // create new node
//         Node* newnode = new Node(x);
        
//         //if empty linked list
//         if(head == NULL){
//             head = newnode; 
//             return head;
//         }
        
        
//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         return head;
//     }
// };