#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int k;
    cout <<"Enter the value of K" << endl;
    cin >> k;
    {
        if(k <= n -1){
        for(int i = n -1; i >= n - k; i--){
        cout << arr[i] <<" ";
        }
        }
        else{
            cout <<"you cannot print " << endl;
        }
    }
    
}