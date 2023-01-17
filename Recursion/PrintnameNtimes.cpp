#include<iostream>
using namespace std;
void printNTimes(int n){
    if(n <= 0)
    return;
    cout << "ankit" << endl;
    printNTimes(n - 1);
}
int main(){
    int n;
    cin >> n;
    printNTimes(n);
    return 0;
}