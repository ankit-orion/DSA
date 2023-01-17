#include<bits/stdc++.h>
using namespace std;
vector<int> stockSpan(int arr[], int n)
{
    stack<pair<int, int>> s; // creating the pair stack
    vector<int> v; // creating vector to store result
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
        {
            v.push_back(-1); // when the stack is empty push -1 to the vector
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first <= arr[i])
        {
            while (s.size() > 0 && s.top().first <= arr[i])
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
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i - v[i]; // subtract normal index from the vector index v[i]
    }
    return v;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int>res = stockSpan(arr, n);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] <<" ";
    }
    return 0;
}