#include <bits/stdc++.h>
using namespace std;
vector<int> rightindex(int arr[], int n)
{
    vector<int> v;
    stack<pair<int, int>> s;
    int pseudoIndex = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(pseudoIndex);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(pseudoIndex);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(v.begin(), v.end());
    // removinf stack elements
    return v;
}
vector<int> leftindex(vector<int>v1)
{
    int n = v1.size();
    vector<int> v1;
    stack<pair<int, int>> s1;
    int pseudoIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (s1.size() == 0)
        {
            v1.push_back(pseudoIndex);
        }
        else if (s1.size() > 0 && s1.top().first < arr[i])
        {
            v1.push_back(s1.top().second);
        }
        else if (s1.size() > 0 && s1.top().first >= arr[i])
        {
            while (s1.size() > 0 && s1.top().first >= arr[i])
            {
                s1.pop();
            }
            if (s1.size() == 0)
            {
                v1.push_back(pseudoIndex);
            }
            else
            {
                v1.push_back(s1.top().second);
            }
        }
        s1.push({arr[i], i});
    }
    return v1;
}
calc(vector<int>arr){
    vector<int> left = leftindex(arr, n);
    vector<int> right = rightindex(arr, n);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, (right[i] - left[i] - 1) * arr[i]);
    }
}
int main()
{
    int row, col;
    cin >> row, col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    vector<int>newarr;
    for(int j = 0; j < col; j++){
        newarr.push_back(arr[0][j]);
    }
    calc(newarr);
    cout << "finally the area of histogram " << maxi << endl;
    return 0;
}