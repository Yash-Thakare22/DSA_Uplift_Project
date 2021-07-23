//Q1
class MyQueue {
public:
    stack<int>o,t; 
   
    MyQueue() {
    }
    
    void push(int x) {
        t.push(x); 
    }
    
    void reverse()
    {
        if(o.empty())
        {
           while(!t.empty())
           {
               o.push(t.top());
               t.pop();
           }
        }
    }
    
    int pop() {
        reverse();
        int c= o.top();
        o.pop();
        return c;
    }
    
    int peek() {
        reverse();
        return o.top();
    }
    
    bool empty() {
        return t.empty() && o.empty();
    }
};





