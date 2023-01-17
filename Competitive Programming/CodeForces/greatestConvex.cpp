#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    return 1;
    return n * factorial(n - 1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int first = factorial(k - 1);
        //cout <<"first facotrial " <<first << endl; 
        int second = factorial(k- 2);
        //cout <<"second fact "<< second << endl;
        int ans = first + second;
        //cout << "div value "<< div << endl;
        if(ans % k == 0){
            cout << k-1 << endl;
        }
        else{
            cout <<"-1" << endl;
        }
    }
    return 0;
}