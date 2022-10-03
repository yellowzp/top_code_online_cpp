#include <iostream>
#include <stack>
using namespace std;

class CQueue
{
private:
    stack<int> inStack, outStack;

    void in2out()
    {
        while (!inStack.empty())
        {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    CQueue() {}

    void appendTail(int value)
    {
        inStack.push(value);
    }

    int deleteHead()
    {
        if (outStack.empty())
        {
            if (inStack.empty())
            {
                return -1;
            }
            in2out();
        }
        int value = outStack.top();
        outStack.pop();
        return value;
    }
};

int main()
{
    CQueue obj = CQueue();
    obj.appendTail(10);
    obj.appendTail(1);
    obj.deleteHead();
    return 0;
}