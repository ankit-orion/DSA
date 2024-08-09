//^ you will be given column and rown number you have to print the value of pascal
//^ triangle at that index
#include <iostream>
#include<vector>
using namespace std;
// void printingRow(int i){
//     vector<int> ans;
//     int val = 1;
//     for(int j = 0; j <= i; j++){
//         ans.push_back(val);
//         val = val * (i - j) / (j + 1);
//     }
//     for(int i = 0; i < ans.size(); i++){
//         cout << ans[i] <<" ";
//     }
// }
void printingValue(int row, int col){
    int ans = 1;
    for(int j = 0; j < col; j++){
        ans = ans * (row - j) / (j + 1);
    }
    cout << ans << endl;
}
// int pascalValue(int row, int col)
// {
//     while(col >= 1){
//         row *= (row -1);
//         col *= (col - 1);
//         col--;
//     }
//     return row/col;
// }
int main()
{
    // int row, col;
    // cin >> row >> col;
    // cout << pascalValue(row, col);
    int row, col;
    cin >> row >> col;
    printingValue(row, col);
    return 0;
}