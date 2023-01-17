#include<bits/stdc++.h>
using namespace std;
int main(){
    // taking test case input
    int t;
    cin >> t;
    // mod value to divide at the end
    unsigned long long int mod = 1000000007;
    while(t--){
        int n;
        cin >> n;
        // ans for storing the result and print it at the end 
        unsigned long long int ans = 2022;
        for(int i = 1; i < n; i++){
            ans = (ans + 2022*((i+1)*(2*i+1)))%mod;
        }
        cout << ans << endl;
    }
    return 0;
}