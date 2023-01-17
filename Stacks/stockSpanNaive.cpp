#include <bits/stdc++.h>
using namespace std;
void stockSpan(int arr[], int n){
    vector<int>v;
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i-1; j >= 0; j--){
            if(arr[i] >= arr[j]){
                count++;
                continue;
            }
            else{
                break;
            }
        }
        v.push_back(count);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
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
    stockSpan(arr, n);
}
