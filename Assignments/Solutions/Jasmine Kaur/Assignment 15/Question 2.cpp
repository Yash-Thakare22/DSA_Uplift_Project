class MyCircularQueue {
public:
    vector <int> queue;
    int firstindex,size,cap;
    MyCircularQueue(int k) : queue(vector<int>(k)) ,firstindex(0) ,size(0) ,cap(k)
    {        
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        queue[(firstindex+size)%cap] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        firstindex = (firstindex+1)%cap;
        size--;
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : queue[firstindex];
    }
    
    int Rear() {
      return isEmpty() ? -1 : queue[(firstindex+size-1)%cap];          
    }
    
    bool isEmpty() {
        return !size;        
    }
    
    bool isFull() {
        return (size==cap);
    }
};
