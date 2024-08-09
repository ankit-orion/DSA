#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int health[n];
	for(int i = 0; i < n; i++) cin >> health[i];
		int count_one=0;
		int count =0;
		for(int i = 0 ; i < n ; i++){

			if(health[i] ==
			 1){
				if(count_one%2==0){
					count++;
				}
				count_one ++;

			}
			else{
				count++;
			}
		}

		cout<<count << endl;

}
int main() {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
}