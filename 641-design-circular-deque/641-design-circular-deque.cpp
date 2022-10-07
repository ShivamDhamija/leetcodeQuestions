class MyCircularDeque {
public:
    vector<int>v;
    int front,rear,n;
    MyCircularDeque(int k) {
        v.resize(k);
        front=-1;
        rear=-1;
        n=k;
    }
    
    bool insertFront(int value) {
        if(front==-1)
        {
            front=0;
            rear=0;
            v[front]=value;
            
        }
        else
        {
            if(isFull())
                return false;
            if(front==0)
            front=n-1;
            else
                front-=1;
            v[front]=value;
        }
        return true;
    }
    
    bool insertLast(int value) {
     if(rear==-1)
     {
         rear=0;
         front=0;
         v[rear]=value;
     }
        else
        {
            if(isFull())
                return false;
            else
                rear=(rear+1)%n;
            v[rear]=value;
        }
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
            return false;
        if(rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
            front=(front+1)%n;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())
            return false;
        if(rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            if(rear==0)
                rear=n-1;
            else
            {
                rear-=1;
            }
        }
        return true;
    }
    
    int getFront() {
        if(isEmpty())
            return -1;
        else
        return v[front];
    }
    
    int getRear() {
        if(isEmpty())
            return -1;
        else
        return v[rear];
        
    }
    
    bool isEmpty() {
        if(rear==-1&&front==-1)
            return true;
        else
        return false;
    }
    
    bool isFull() {
        if((rear+1)%n==front)
            return true;
        else
        return false;
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