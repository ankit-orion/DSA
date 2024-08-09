#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
//^ brute approach
// int main(){
//     vector<int>arr = {2,2,1,1,1,2,2,1,1};
//     int n = arr.size();
//     int ans;
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count > n/2){
//             ans = arr[i];
//             break;
//         }
//     }
//     cout << ans;
// }

//^ efficient approach
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 5, 2, 5, 8};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 1;
    int ans;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            if (count > n/2)
            {
                ans = arr[i];
                break;
            }
        }
        else{
            count = 1;
        }
    }
    cout << ans << endl;
    return 0;

}