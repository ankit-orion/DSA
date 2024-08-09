#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
long long fact(int n){
    if (n == 1)
    return 1;
    else 
    return n*fact(n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int  n;
        cin >> n;
        long long result;
        long long int ans = 1;
        while(ans <= n){
            result = ((result%MOD)*ans)%MOD;
            ans++;
        }
        cout << result << endl;
    }
    return 0;
}