Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Mainly the following three basic operations are performed in the stack:

Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
Peek or Top: Returns top element of stack.
isEmpty: Returns true if stack is empty, else false.

Implementing Stack

#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX 1000
 
class Stack {
    int top;
 
public:
    int a[MAX]; // Maximum size of Stack
 
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << " Element Pushed\n";
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        cout << " Element Popped\n";
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Empty Stack\n";
        return 0;
    }
    else {
        int x = a[top];
        cout << "Peek Element\n";
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 

int main()
{
    class Stack s;
    s.push(7);
    s.push(22);
    s.push(30);
    s.pop();
    
    return 0;
}


Valid Parentheses - Balanced Parentheses

#include <bits/stdc++.h>
using namespace std;
 
// function to check if brackets are balanced
bool BalancedBracket(string expr)
{ 
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
 
        
        if (s.empty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}
 
// Driver code
int main()
{
    string expr = "{()}[]";
 
    // Function call
    if (BalancedBracket(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
