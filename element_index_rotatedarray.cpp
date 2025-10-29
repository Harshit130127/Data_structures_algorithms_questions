#include <iostream>
using namespace std;

int element_search(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target) {
            return mid; // return index not value
        }
        else if(arr[mid] >= arr[start]) {  // left half is sorted
            if(arr[start] <= target && target < arr[mid])  // target in left half
                end = mid - 1;
            else    
                start = mid + 1;   // target in right half
        }
        else {  // right half is sorted
            if  (arr[mid] < target && target <= arr[end])  // target in right half
                start = mid + 1;
            else  // target in left half
                end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element" << endl;
    cin >> target;

    int result = element_search(arr, n, target);

    if(result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}
