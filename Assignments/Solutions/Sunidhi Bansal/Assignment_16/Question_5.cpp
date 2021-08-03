class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> arr;
    MinStack() {
        stack = {};
        arr = {};
    }
    
    void push(int val) {
        stack.push_back(val);
        arr.push_back(val);
    }
    
    void pop() {
        if(stack.size() != 0) {
            stack.pop_back();    
        }
    }
    
    int top() {
        if(stack.size() != 0) {
            return stack[stack.size() - 1];
        }
        return -1;
    }
    
    int getMin() {
        if(stack.size() != 0) {
            int min = stack[0];
            for(int i = 0; i < stack.size(); i++) {
                if(min > stack[i]) {
                    min = stack[i];
                }
            }
            return min;
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */