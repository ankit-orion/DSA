#include<iostream>
using namespace std;
bool checkSorted(int arr[], int n, int i){
    if(i > n - 1)
    return true;
    if(arr[i] < arr[i - 1]) return false;
    checkSorted(arr, n, i + 1);
}
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++){
            cin >> arr[i];
    }
    checkSorted(arr, n, 1)? cout <<"array is sorted" : cout << "array is not sorted";
}