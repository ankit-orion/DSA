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
int main(){
    int n;
    cin >> n;
    print1toN(1,n);
}