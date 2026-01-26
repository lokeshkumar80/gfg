// /*
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };
// */
// class Solution {
//   public:
//     Node* deleteNode(Node* head, int x) {
        
//         //Deletion at head....
//         if(x==1){
//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;
//             delete temp;
//             return head;
//         }
        
//         // for x > 1
//         Node* prev = NULL;
//         Node* curr = head;
//         while(x!=1){
//             prev = curr;
//             curr = curr->next;
//             x--;
//         }
        
//         // now curr is at required deletion position...
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//         return head;
//     }
// };