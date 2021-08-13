/*
Q2
https://leetcode.com/problems/design-circular-queue/
*/
class MyCircularQueue
{
private:
    int head, rear, SIZE, cnt;
    vector<int> buffer;

public:
    MyCircularQueue(int k) : buffer(k, 0), head(0), rear(-1), SIZE(k), cnt(0)
    {
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;

        rear = (rear + 1) % SIZE;
        buffer[rear] = value;

        cnt++;

        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;

        head = (head + 1) % SIZE;
        cnt--;

        return true;
    }

    int Front()
    {
        if (isEmpty())
            return -1;
        return buffer[head];
    }

    int Rear()
    {
        if (isEmpty())
            return -1;
        return buffer[rear];
    }

    bool isEmpty()
    {
        return cnt == 0;
    }

    bool isFull()
    {
        return cnt == SIZE;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */