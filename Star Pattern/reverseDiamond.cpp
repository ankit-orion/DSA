// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << "*" << endl;
    }
    for(int i = 0; i < n; i++){
        cout << "*"<< endl;
    }
}