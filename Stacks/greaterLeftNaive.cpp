#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[], int n){
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > arr[i]){
                ans.push_back(arr[j]);
                break;
            }
        }
        if(j == -1){
            ans.push_back(-1);
        }
    }
            for(int i = 0 ; i < n; i++){
        cout << ans[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    solve(arr, n);
}