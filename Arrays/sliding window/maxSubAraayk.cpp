#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>&arr, int k){
    int i = 0, j = 0, sum = 0, maxi = INT_MIN;
    while(j < arr.size()){
        sum += arr[j];
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            maxi = max(maxi, sum);
            sum -= arr[i];
            i++;
            j++;
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