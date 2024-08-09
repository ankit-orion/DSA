#include<bits/stdc++.h>
using namespace std;
int t;
cin >> t;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int c = n;
        int mx = 1;
        map<int, int> mp;
        for(int i = 2; i <= n; ++i){
            if(c%i==0){
                int cnt = 0;
                while(c%i== 0){
                    cnt += 1;
                    c /= i;
                    mp[i] = cnt;
                    if(cnt > mx){
                        mx = cnt;
                    }
                }
            }
            if(c != 1){
                mp[c] = 1;
            }
            int res= 0;
            for(int i = 0; i < mx; i++){
                int now = 1;
                for(auto it:mp){
                    if(it.ss > 0){
                        mp[it.ff] -= 1;
                        now *= it.ff;
                    }
                }
                res += now;
            }
        }
        cout << res << endl;
    }
    return 0;
}