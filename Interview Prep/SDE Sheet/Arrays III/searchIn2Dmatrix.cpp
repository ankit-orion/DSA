#include <iostream>
#include <vector>

using namespace std;

pair<int, int> searchInMatrix(const vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                return make_pair(i, j);  // Return the indices if the element is found
            }
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
    int target = 5;

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
