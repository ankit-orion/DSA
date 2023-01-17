#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN; // 1
    int count = 1;
    int ele = arr[0];
    sort(arr, arr+n);
    for(int i = 0; i < n -1; i++){
        if(arr[i] == arr[i+1]){
            count++;
            maxi = max(maxi, count);
            ele = arr[i];
        }
        else{
            count = 1;
        }
    }
    cout << "count of maximum element is " << maxi << endl;
    cout << "max element is " << ele << endl;
}
// 6 6 4 4 2 2 2 
// count = 1;// maxi = 1,