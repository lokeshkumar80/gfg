// class myQueue {
//     // define your queue
//     vector<int>arr;
//     int front = -1;
//     int rear = -1;
//   public:
  
//     void enqueue(int x) {
//         // insert x into queue
//         if(isEmpty()){
//             arr.push_back(x);
//             rear++;
//             front++;
//         }else{
//             arr.push_back(x);
//             rear++;
//         }
//     }

//     void dequeue() {
//         // remove front element from queue
//         if(isEmpty()){
//             return;
//         }else if(front == rear){
//             front = -1;
//             rear = -1;
//             arr.clear();
//         }else{
//             front++;
//         }
//     }

//     int getFront() {
//         // return the front element of the queue
//         if(isEmpty()){
//             return -1;
//         }else{
//             return arr[front];
//         }
//     }

//     int getRear() {
//         // return the rear element of the queue
//         if(isEmpty()){
//             return -1;
//         }else{
//             return arr[rear];
//         }
//     }

//     bool isEmpty() {
//         // check whether queue is empty
//         if(front == -1 && rear == -1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     int size() {
//         // return size of the queue
//         if(isEmpty()){
//             return 0;
//         }
//         return rear - front + 1;
//     }
// };