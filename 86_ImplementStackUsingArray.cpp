class myStack {
    int top;
    int* arr;
    int size;
    
  public:
    myStack(int n) {
        // Define Data Structures
        this->top = -1;
        this->size = n;
        this->arr = new int[n];
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull() {
        // check if the stack is full
        if(top == size-1){
            return true;
        }else{
            return false;
        }
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(top == size-1){
            return;
        }else{
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        // removes an element from the top of the stack
        if (top == -1) {
            return;   // Stack is empty
        }
        top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(top==-1){
            return -1;
        }
        int top_element = arr[top];
        return top_element;
    }
};