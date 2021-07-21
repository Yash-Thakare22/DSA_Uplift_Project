Queue Implementation

#include <iostream>
#define SIZE 100
using namespace std;

class Queue{
    private: 
    int que[SIZE],front,rear;
    
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    
    bool isFull(){
        if(front==0 && rear==SIZE-1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front==-1)
        {
            return true;
        }
        else
            return false;
    }
    
    void enQueue(int ele){//add
        if(isFull())
        {
            cout<<"Queue Overflow or full";
            return;
        }
        else
        {
            if(front==-1) {
                front=0;
            }
            rear++;
            que[rear]=ele;
            cout<<"Inserted"<<endl;
        }
    }
    
    int deQueue(){//delete
        int del;
        if(isEmpty())
        {
            cout<<"Queue Underflow or empty"<<endl;
            return -1;
        }
        else
        {
            del=que[front]; 
            if(front>=rear)
            {
                front=-1;
                rear=-1;
            }
            else{
                front++;
            }
            cout<<"deleted";
            return del;
        }
    }
    
    void display(){
        int i;
        if(isEmpty()){
            cout<<"Queue underflow or empty"<<endl;
        }
        else
        {
            cout<<"Queue ele:";
            for(i=front;i<=rear;i++)
            {
                cout<<que[i]<<" ";
            }
        }
    }
    
    /* int peek()
    {
        return que[front];
    }*/
    
};

int main()
{
    Queue q;
    
    cout<<q.deQueue()<<endl;
    
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    
    q.enQueue(7);
    q.display();
    return 0;
}


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Circular Queue Implementation

#include <iostream>
#define SIZE 5
using namespace std;

class Queue{
    private: 
    int que[SIZE],front,rear;
    
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    
    bool isFull(){ 
        if(front==0 && rear==SIZE-1)
        {
            return true;
        }
        if(front==rear+1) //change
        {
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front==-1)
        {
            return true;
        }

        else
            return false;
    }
    
    void enQueue(int ele){//add 
        if(isFull())
        {
            cout<<"Queue Overflow or full";
            return;
        }
        else
        {
            if(front==-1) {
                front=0;
            }
            rear = (rear+1)%SIZE; //change
            que[rear]=ele;
            cout<<"Inserted"<<endl;
        }
    }
    
    int deQueue(){//delete 
        int del;
        if(isEmpty())
        {
            cout<<"Queue Underflow or empty"<<endl;
            return -1;
        }
        else
        {
            del=que[front]; 
            if(front==rear)   //change
            {
                front=-1;
                rear=-1;
            }
            else{
                front=(front+1)%SIZE; //change
            }
            cout<<"deleted";
            return del;
        }
    }
     
    void display(){ 
        int i;
        if(isEmpty()){
            cout<<"Queue underflow or empty"<<endl;
        }
        else
        {
            cout<<"Queue ele:";
            for(i=front;i!=rear;i=(i+1)%SIZE)
            {
                cout<<que[i]<<" ";
            }
        }
    }
    
    /* int peek()
    {
        return que[front];
    }*/ 
    
};

int main()
{
    Queue q;
    
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
  
    cout<<q.deQueue()<<endl;
    q.display();
    
    return 0;
}
