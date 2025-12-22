#include <iostream>
using namespace std;

int maxDifferenceSuffix(int arr[], int n) {
    int maxSuffix = arr[n - 1];   // rightmost element
    int maxDiff = arr[n - 1] - arr[n - 2];

    for (int i = n - 2; i >= 0; i--) {
        maxDiff = max(maxDiff, maxSuffix - arr[i]);
        maxSuffix = max(maxSuffix, arr[i]);
    }
    return maxDiff;
}

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxDifferenceSuffix(arr, n);
    return 0;
}
