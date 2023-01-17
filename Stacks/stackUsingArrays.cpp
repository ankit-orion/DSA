#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    int *data;
    int capacity;
    int top;
public:
    MyStack(int c)
    {
        data = new int [c];
        capacity = c;
        top = -1;
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int element)
    {
        if (top == capacity - 1)
        {
            cout << "stack is full" << endl;
            return;
        }
        data[++top] = element;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        else
        {
            int res = data[top];
            top--;
            return res;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        else
        {
            return data[top - 1];
        }
    }
};
int main()
{
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(30);
    s.push(40);
    s.push(35);
    // s.push(48);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}