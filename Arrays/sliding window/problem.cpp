#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int k;
    cin >> k;
    while (k--) {
        int h;
        cin >> h;
        int left = 0;
        int right = N - 1;
        int count = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] > h) {
                count = N - mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << count << endl;
    }
    return 0;
}

