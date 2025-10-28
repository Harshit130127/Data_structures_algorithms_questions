#include<iostream>
using namespace std;

int minimum_element_index_in_rotated_array(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return arr[start];
}

int main() {
    int arr[] = {5, 6, 7, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The minimum element in the rotated sorted array is: ";
    int element = minimum_element_index_in_rotated_array(arr, n);
    cout << element << endl;
}
