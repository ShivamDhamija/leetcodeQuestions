class MyCircularQueue {
public:
    vector<int>v;
    int front;
    int rear;
    bool empty=true;
    int n;
    int count;
    MyCircularQueue(int k) {
        v.resize(k);
        front=0;
        rear=-1;
        n=k;
        count=0;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        rear=(rear+1)%n;
        v[rear]=value;
        
        count++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        front=(front+1)%n;
        count--;
        return true;
    }
    
    int Front() {
        if(!isEmpty())
            return v[front];
        return -1;
    }
    
    int Rear() {
        if(!isEmpty())
            return v[rear];
        return -1;
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==n;
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