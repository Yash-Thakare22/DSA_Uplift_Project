// Q5: https://leetcode.com/problems/min-stack/
class MinStack
{
public:
    /** initialize your data structure here. */
    MinStack() {}

    void push(int x)
    {
        data.push(x); // Push the data into the stack
        if (min.empty())
        {
            min.push(x);
        }
        else
        {
            if (x > min.top())
            {
                x = min.top();
            }
            min.push(x);
        }
    }

    void pop()
    {
        data.pop();
        min.pop();
    }

    int top()
    {
        return data.top();
    }

    int getMin()
    {
        return min.top();
    }

private:
    stack<int> data; //original data stack
    stack<int> min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */