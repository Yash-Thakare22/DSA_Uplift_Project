/*

Ques4

https://leetcode.com/problems/implement-queue-using-stacks/

*/

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    /** Initialize your data structure here. */
    
    MyQueue() {       
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!st1.empty()) {
          st2.push(st1.top());
          st1.pop();
        }
        st2.push(x);
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
       int front=st1.top();
       st1.pop();
    return front;
    }
    
    /** Get the front element. */
    int peek() {
        return st1.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (st1.empty());
    }
};
