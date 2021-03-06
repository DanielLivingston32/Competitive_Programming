class CustomStack
{
public:
    vector<int> container;
    int size;
    int currSize;

    CustomStack(int maxSize)
    {
        size = maxSize;
        currSize = 0;
    }

    void push(int x)
    {
        if (currSize < size)
        {
            container.push_back(x);
            currSize++;
        }
    }

    int pop()
    {
        if (currSize)
        {
            int temp = container.back();
            container.pop_back();
            currSize--;
            return temp;
        }
        return -1;
    }

    void increment(int k, int val)
    {
        int i = 0;
        while (i < k and i < currSize)
        {
            container[i] += val;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */