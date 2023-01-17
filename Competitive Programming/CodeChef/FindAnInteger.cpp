#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    for(int i = 1; i <= 1e18; i++){
	        if(((i+y)%x == 0)&&((i+x)%y) == 0)
	        cout << i << endl;
	    }
	}
	return 0;
}
