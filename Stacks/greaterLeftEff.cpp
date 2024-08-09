//^ this program includes the solution of stock span
//^ by using stack only we are not using any set here
//^ we are jsut pushing the index of the element which is greater to the left
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    vector<int> v;
    stack<int> s;
    // traversing array from right to left
    for (int i = 0; i < n; i++)
    {
        //^ first codintion if the stack is empty it meand there's no element on right of the array which
        //~ is greater the the current element also it handles the edge case
        //* that last index of array will be -1 as there is no element greater
        //? than the current ellement
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        //^ if top of stack is greater then we will push the top element
        else if (s.size() > 0 && arr[s.top()] > arr[i])
        {
            v.push_back(s.top());
        }
        //^ here instead of comparing the top element we are comparing the top element with its corresponding element in the array
        //^ as we have stored the index in the stack
        else if (s.size() > 0 && arr[s.top()] <= arr[i])
        {
            while (s.size() > 0 && arr[s.top()] <= arr[i])
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
        //! here instead of pushing the element itself we are pushing the index of the greater element
        s.push(i);
    }


    // reverse(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

//^ subtracting the index of the vector with the original index
        for (int i = 0; i < v.size(); i++)
    {
        v[i] = i - v[i];
    }

//* hence printing the span of the prices
        for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


}
using namespace std;
int main()
{
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = 7;
    solve(arr, n);
    return 0;
}