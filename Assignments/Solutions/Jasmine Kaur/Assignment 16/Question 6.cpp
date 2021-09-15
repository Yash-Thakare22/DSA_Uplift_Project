class MinStack {
public:
    /** initialize your data structure here. */
 
        public:
            stack<int>s1,s2; //here s1 is normal stack and s2 is for getMin()
    
    
    void push(int val) {
        if(s1.empty()){
            s2.push(val);
        }else if(val<=s2.top()){ //for min value ,so if smaller than s2.top()
            s2.push(val);
        }s1.push(val); //normal case 
    }
    
    void pop() {
        if(s2.empty()) return ;
        else if(s2.top() == s1.top()) s2.pop();
        s1.pop();
    }
    
    int top() {
        if(s1.empty()) return -1 ;
        return s1.top();
        
    }
    
    int getMin() {
        if(s1.empty())return -1;
        return s2.top();
        
    }
};
