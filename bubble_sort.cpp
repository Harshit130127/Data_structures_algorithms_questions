#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    bool swapped;
    
    // Outer loop: from n-2 to 0
    for (int i = n - 2; i >= 0; i--) {
        swapped = false;

        // Inner loop: compare adjacent elements 
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swap occurred, the array is already sorted
        if (!swapped)
            break;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
