#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {    // to check if the array is sorted or not
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true;
}

void insertion_sort(int arr[], int n) {    // to sort the array using insertion sort
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            } else {
                break;
            }
        }
    }
}

void binary_search(int arr[], int n, int key) {   // to perform binary search
    int start = 0;
    int end = n - 1;
    
    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    cout << "Element not found in the array." << endl;
}

int main() {

    int arr[1000], n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    if(!isSorted(arr, n)) {     //this exclamation mark means NOT,if the output of isSorted is false then only the condition will be true
        cout << "Array is not sorted. Sorting now...\n";
        insertion_sort(arr, n);
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    binary_search(arr, n, key);

    return 0;
}
