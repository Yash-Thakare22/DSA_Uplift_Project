class MyCircularDeque {

    /** Initialize your data structure here. Set the size of the deque to be k. */
    vector <int> dp;
    int front,rear,size;
    public:
    MyCircularDeque(int size): size(size),dp(size,0),front(-1),rear(0) { }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()) return false;
        if(front == -1){
            front=0;
            rear =0;
        }else front = ((front-1)%size+size)%size;
        dp[front] = value;       
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()) return false;
        if(front == -1){
            front=0;
            rear =0;
        }else rear = (rear+1)%size;
        dp[rear] = value;        
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()) return false;
        if(front == rear){
            front =-1;
            rear = -1;            
        }else front = (front+1)%size;
        return 1;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty()) return false;
        if(front == rear){
            front =-1;
            rear = -1;            
        }else rear = ((rear-1)%size +size)%size;
        return 1;
    }
    
    /** Get the front item from the deque. */
    int getFront() {        
        if(isEmpty()) return -1;
        return dp[front];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty()) return -1;
        return dp[rear];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return front == -1;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (front == (rear+1)%size);
    }
};
