#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int t;
    // cin >> t;
    // while(t--){
        unsigned long long int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        vector<unsigned long long int>sum;
        if(n >= m){
            for(int i = 0; i < n; i++){
                if(i > m){
                    break;
                }
                else{
                    if(b[i] >= a[i]){
                        sum.push_back(b[i]);
                    }
                    else{
                        sum.push_back(a[i]);
                    }
                }
            }
            for(int i = m; i < n; i++){
                sum.push_back(a[i]);
            }
        }
        for(int i = 0; i < n; i++){
            cout << sum[i] <<" ";
        }
    // }
    return 0;
}