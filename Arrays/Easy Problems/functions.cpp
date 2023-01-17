#include<iostream>
using namespace std;
const int R = 4, C = 4;
void transpose(int arr[R][C]){
    // before transpose
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    // after transpose
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << arr[j][i] << " ";
        }
    }
}
int main(){
    int arr[R][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(arr);
}