#include<bits/stdc++.h>
using namespace std;
vector<int> firstNegative(vector<int> arr, int k){
    vector<int>res;
    int n = arr.size();
    for(int i = 0; i <= n - k; i++){
        bool flag = false;
        for(int j = i; j < i + k; j++){
            if(arr[j] < 0){
                res.push_back(arr[j]);
                flag = true;
                break;
            }
        }
        if(!flag){
            res.push_back(0);
        }
    }
    return res;
}
int main(){
    int n;
    cout <<"Enter the size of the array "<< endl;
    cin >> n;
    vector<int>arr;
    cout <<"Enter array elements "<< endl;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele); 
    }
    int k;
    cin >> k;
    cout <<"Enter window size "<< endl;
    vector<int> ans = firstNegative(arr, k);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }
    return 0;

}