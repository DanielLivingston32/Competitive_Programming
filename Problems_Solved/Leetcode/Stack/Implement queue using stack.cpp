class MyQueue
{
public:
    /** Initialize your data structure here. */
    stack<int> store1;
    stack<int> store2;

    MyQueue()
    {
    }
    //     Transfer elements to store 2;
    void transfer()
    {
        while (!store1.empty())
        {
            store2.push(store1.top());
            store1.pop();
        }
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        store1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        if (store2.empty())
        {
            transfer();
        }
        int result = store2.top();
        store2.pop();
        return result;
    }

    /** Get the front element. */
    int peek()
    {
        if (store2.empty())
        {
            transfer();
        }
        int result = store2.top();
        return result;
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        if (store2.empty() and store1.empty())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
