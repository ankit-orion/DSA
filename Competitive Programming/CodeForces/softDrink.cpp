#include<iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int res = min((k*l)/nl, min(d, p/np));
    cout << res/n << endl;
}