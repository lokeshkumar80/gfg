class myQueue {

  public:
    int size;
    int* arr;
    int front = -1;
    int rear = -1;
    
    myQueue(int n) {
        // Define Data Structures
        this->size = n;
        arr = new int[size];
    }

    bool isEmpty() {
        // check if the queue is empty
        if(front==-1 && rear==-1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull() {
        // check if the queue is full 
        if(rear - front + 1 >= size){ // this condition is very important if we use dequeue somewhere then front move forward
        // but that place is empty now so we have to check with front and rear.
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(front==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear] = x;
        }else if(rear>=size-1){
            return;
        }else{
            rear++;
            arr[rear]=x;
        }
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(front==-1 && rear ==-1){
            return;
        }else if(front == rear){
            // that is only element
            // so queue become empty
            arr[front]=-1;
            front = -1;
            rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    int getFront() {
        // Returns the front element of the queue.
        if(front==-1 && rear ==-1){
            return -1; // if queue is empty.
        }else{
            return arr[front];
        }      
    }

    int getRear() {
        // Return the last element of queue
        if(front==-1 && rear ==-1){
            return -1; // if queue is empty
        }else{
            return arr[rear];
        } 
    }
};