#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 6, 2, 7, 8, 7, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_element = arr[0], max_count = 1;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    cout << "Maximum occurred element is: " << max_element << endl;
    cout << "Frequency: " << max_count << endl;

    return 0;
}