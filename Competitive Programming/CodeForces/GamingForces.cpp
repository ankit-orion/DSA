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

			if(health[i] == 1){
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
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
}