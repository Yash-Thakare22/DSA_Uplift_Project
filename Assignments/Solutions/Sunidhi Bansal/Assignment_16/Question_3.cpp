class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> input;
    stack<int> output;
    MyQueue() {
        input = {};
        output = {};
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        input.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(output.size() != 0) {
            int front = output.top();
            output.pop();
            return front;
        } else {
            if(input.size() == 0) {
                return -1;
            } else {
                while(input.size() != 0) {
                output.push(input.top());
                input.pop();
                }
                int front = output.top();
                output.pop();
                return front;
            }
            
        }
    }
    
    /** Get the front element. */
    int peek() {
        if(output.size() != 0) {
            return output.top();
        } else {
            if(input.size() == 0) {
                return -1;
            } else {
                while(input.size() != 0) {
                    output.push(input.top());
                    input.pop();
                }
                return output.top();
            }
        }
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (input.size() == 0 && output.size() == 0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */