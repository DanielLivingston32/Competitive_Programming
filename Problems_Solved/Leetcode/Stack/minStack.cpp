class MinStack
{
public:
    stack<int> minStack;
    stack<int> container;
    int temp;

    MinStack()
    {
    }

    void push(int x)
    {
        if (!minStack.empty())
        {
            temp = minStack.top();
            if (x < temp)
            {
                minStack.push(x);
            }
            else
            {
                minStack.push(temp);
            }
        }
        else
        {
            minStack.push(x);
        }
        container.push(x);
    }

    void pop()
    {
        minStack.pop();
        container.pop();
    }

    int top()
    {
        return container.top();
    }

    int getMin()
    {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */