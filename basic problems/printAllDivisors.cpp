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
int hypo(int base, int height){
    int pytha;
    pytha = (int)sqrt((base*base + height*height));
    return pytha;
}
int main() {
	init_code();
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1, x2, y1, y2;
	    cin >> x1 >>y1 >> x2 >> y2;
	    int distanceBOB = hypo(x1, y1);
	    int distanceALEX = hypo(x2, y2);
	    if(distanceBOB > distanceALEX) cout <<"ALEX" << endl;
	    else if(distanceALEX > distanceBOB) cout <<"BOB" << endl;
	    else cout << "EQUAL" << endl;
	}
	return 0;
}
