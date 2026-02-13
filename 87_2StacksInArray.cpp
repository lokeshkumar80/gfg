class twoStacks {
    int top1;
    int top2;
    int n = 100; // use large constant as per constraints bcz here used constructor is non parameterized....
    int* arr = new int[100];
    
  public:

    twoStacks() {
        top1 = -1;
        top2 = n;
    }
    

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = x;
        }
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = x;
        }        
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        // code here
        if(top1 == -1){
            return -1;
        }
        
        int peek1 = arr[top1];
        top1--;
        
        return peek1;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2 == n){
            return -1;
        }
        
        int peek2 = arr[top2];
        top2++;
        
        return peek2;
    }
};