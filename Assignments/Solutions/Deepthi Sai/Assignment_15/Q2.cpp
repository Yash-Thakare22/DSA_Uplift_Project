
class MyCircularQueue {
    int front;
    int rear;
    int size;
    vector<int>arr;
    public:
    MyCircularQueue(int k):arr(k,0),size(k),front(-1),rear(-1) {   
    }
    bool enQueue(int value) 
    {
         if(!isFull())
         {
            if(front==-1)
            {
                front=0;
            }
            rear = (rear+1)%(size); //change
            arr[rear]=value;
             return true;
         }
        return false;
    }
    
    bool deQueue() 
    {
        if(!isEmpty())
        {
           int del=arr[front]; 
            if(front==rear)   //change
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%size; //change
            }

          return true;  
        }
        return false;
    }
    
    int Front() 
    {
        if(!isEmpty())
        {
    
           return arr[front]; 
        }
        return -1;
    }
    
    int Rear() {
        if(!isEmpty())
        {
           return arr[rear];
        }
        return -1;
    }
    
    bool isEmpty() 
    {
     
        if(front==-1)
             return true; 
        else 
           return false;
    }
    
    bool isFull() 
    {
       if(front==0 && rear==size-1)
            return true; 
        else if(front==rear+1)
            return true;
        else return false;
    }
};
