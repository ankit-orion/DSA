#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>arr,int k){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i = 0; i <= n - k; i++){
        int sum = 0;
        for(int j = i; j < i + k; j++){
            sum += arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int k;
    cin >> k;
    int ans = maxSubarray(arr, k);
    cout << ans;
    return 0;

}