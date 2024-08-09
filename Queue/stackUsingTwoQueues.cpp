// #include <iostream>
// #include<algorithm>
// #include<queue>
// using namespace std;
// // in this implementation I've used two queues to implement stack
// class stack
// {
//     queue<int> q1;
//     queue<int> q2;

// public:
//     void push(int x)
//     {
//         q2.push(x);
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         swap(q1, q2);
//     }
//     int pop()
//     {
//         int n = q1.front();
//         q1.pop();
//         return n;
//     }
//     int top()
//     {
//         return q1.front();
//     }
// };
// int main()
// {
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     cout << "Top of the stack: " << s.top() << endl;
//     cout << "The deleted element is: " << s.pop() << endl;
//     cout << "Top of the stack after removing element: " << s.top() << endl;
// }
class MyQueue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (!s2.empty())
        {
            int n = s2.top();
            s2.pop();
            return n;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int n = s2.top();
            s2.pop();
            return n;
        }
    }
    int peek()
    {
        if (!s2.empty())
        {
            return s2.top();
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    bool empty()
    {
        return s2.size() == 0;
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