#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void init_code(){
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
}
int main(){
	init_code();
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k > 1){
            cout << k-1 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}