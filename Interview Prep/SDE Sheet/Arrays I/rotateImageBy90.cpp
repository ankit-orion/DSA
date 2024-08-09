#include <iostream>
#include<vector>
using namespace std;
void rotate(int *arr, int n)
{
    vector<int> res;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i - n - 1; j >= 0; j--)
        {
            res.push_back(arr[j]);
        }
        ans.push_back(res);
        res.clear();
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotate((int*)arr, n);
    return 0;
}