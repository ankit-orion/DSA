#include<iostream>
using namespace std;
void print1toN(int i, int n){
    /*if(n >= 2)
    print1toN(n - 1);
    cout << n;
    */
   if(i > n)
   return;
   cout << i <<" ";
   print1toN(i + 1, n);
}
int sumOfN(int sum, int n){
    if(n < 1) return sum;
    sumOfN(sum + n, n - 1);
}
int main(){
    int n;
    cin >> n;
    print1toN(1,n);
    cout << endl;
    cout << sumOfN(0, n);
}