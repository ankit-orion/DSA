#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int> arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    int input;
    for(int i = 0; i < n; i++){
      cin>> input;
      arr.push_back(input);
    }
    //vector<int> arr2 = {8,10,5,7,9};
    cout<<"The Largest element in the array is: "<<sortArr(arr)<<endl;
    cout <<"size of the vector is "<< arr.size() << endl;
    cout <<"capacity of the vector is "<< arr.capacity() << endl;
    return 0;
}
