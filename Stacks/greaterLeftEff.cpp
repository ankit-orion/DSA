#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    vector<int> v;
    stack<int> s;
    // traversing array from right to left
    for (int i = 0; i < n; i++)
    {
        // first codintion if the stack is empty it meand there's no element on right of the array which
        // is greater the the current element also it handles the edge case
        // that last index of array will be -1 as there is no element greater
        // than the current ellement
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        // if top of stack is greater then we will push the top element
        else if (s.size() > 0 && s.top() > arr[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() > 0 && s.top() <= arr[i])
        {
            while (s.size() > 0 && s.top() <= arr[i])
            {
                /* code */
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    // reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n);
    return 0;
}