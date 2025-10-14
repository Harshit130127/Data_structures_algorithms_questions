#include <limits.h>

int getSecondLargest(int *arr, int n) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN)
        return -1;

    return max2;
}
