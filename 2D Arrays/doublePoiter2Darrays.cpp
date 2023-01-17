#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int **arr;
    arr = new int *[m];
    for(int i = 0; i < m; i++){
        arr[i] =new int[n];
    }
    for(int i = 0; i < m; i++){ 
        for(int j = 0; j < n; j++){
            arr[i][j] = i*2;
            cout<< arr[i][j] <<" ";
        }
    }
    return 0;
}