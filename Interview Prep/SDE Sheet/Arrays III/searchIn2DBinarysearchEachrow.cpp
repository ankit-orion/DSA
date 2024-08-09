#include <iostream>
#include <vector>

using namespace std;
int BinarySearchRow(vector<int>arr, int target){
    int start = 0;
    int end = arr.size();
    while(start<= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

pair<int, int> searchInMatrix(const vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        int ans = BinarySearchRow(matrix[i], target);
        if(ans != -1){
            return make_pair(i, ans);
        }
    }
    return make_pair(-1, -1);  // Return -1, -1 if the element is not found
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target = 11;

    pair<int, int> result = searchInMatrix(matrix, target);
    int row_index = result.first;
    int col_index = result.second;

    if (row_index == -1 && col_index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at position (" << row_index << ", " << col_index << ")" << endl;
    }

    return 0;
}
