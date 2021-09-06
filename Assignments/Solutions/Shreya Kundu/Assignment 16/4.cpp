class MyQueue {
    int n;
    stack<int>s1;
    stack<int>s2;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        n=0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
        n++;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
       
        if(s1.empty()&& s2.empty())
            return -1;
        else if(s2.empty())
        while(!s1.empty()){
               
                s2.push(s1.top());
                s1.pop();
            }
        int y=s2.top();
        n--;
        s2.pop();
        return y;
    }
    
    /** Get the front element. */
    int peek() {
         if(s1.empty()&& s2.empty())
            return -1;
        else if(s2.empty())
        while(!s1.empty()){
               
                s2.push(s1.top());
                s1.pop();
            }
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.empty()&& s2.empty())
            return true;
        else
            return false;
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
