// Question Link: https://leetcode.com/problems/design-circular-deque/

class MyCircularDeque {
  public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    deque<int> arr;
    int max, cur = 0;
    MyCircularDeque(int k) {
        max = k;
    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (cur < max) {
            arr.push_front(value);
            cur++;
            return true;
        }
        return false;
    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (cur < max) { //CONDITION;
            arr.push_back(value);
            cur++;
            return true;
        }
        return false;
    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (arr.size()) { //SIZE SHOULD NOT BE ZERO;
            arr.pop_front();
            cur--;
            return true;
        }
        return false;
    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (arr.size()) {
            arr.pop_back();
            cur--;
            return true;
        }
        return false;
    }

    /** Get the front item from the deque. */
    int getFront() {
        if (arr.size())
            return arr.front();
        else
            return -1;
    }

    /** Get the last item from the deque. */
    int getRear() {
        if (arr.size())
            return arr.back();
        else
            return -1;
    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return (arr.size() == 0);
    }

    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (cur == max); //CUR SHOULD BE EQUAL TO MAXIMUM SIZE[K]
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
