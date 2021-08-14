/*

Ques1

https://leetcode.com/problems/implement-stack-using-queues/

*/

class MyStack {
public:
    queue <int> q1;
    queue <int> q2;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front()); 
            q1.pop();
        }
        swap(q1,q2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int curr=q1.front();
        q1.pop();
        return curr;
    }
    
    /** Get the top element. */
    int top() {
     return q1.front();   
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
       return q1.empty(); 
    }
};
