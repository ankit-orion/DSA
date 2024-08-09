#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> firstNegative(vector<int> arr, int k){
    vector<int> ans;
    queue<int>q;
    int i = 0, j= 0;
    while(j < arr.size()){
        if(arr[j] < 0) q.push(arr[j]);
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(q.empty()) ans.push_back(0);
            else{
                ans.push_back(q.front());
                if(q.front() == arr[i]) q.pop();
            }
            i++;
            j++;
        }
    }
    return ans;
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