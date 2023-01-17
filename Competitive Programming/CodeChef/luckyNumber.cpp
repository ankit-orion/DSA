#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
        cin >> n;
                    vector<int>arr;
	    while(n > 0){
	        int t = n%10;
            arr.push_back(t);
	        n = n /10;
	    }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 7){
                cout <<"yes" << endl;
                break;
            }
            else if(i == arr.size() - 1){
                cout <<"no" << endl;
            }
        }
	}
    return 0;
}
