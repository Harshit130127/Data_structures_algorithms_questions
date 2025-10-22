#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {

    // Outer loop: one by one, move the boundary of the unsorted array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the first element is the smallest

        // Inner loop: find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the index of the new minimum element
            }
        } 

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    // Initialize the array
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements

    // Sort the array
    selectionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
