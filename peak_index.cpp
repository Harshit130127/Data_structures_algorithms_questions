#include<iostream>
using namespace std;

int peak_index_using_binary_search(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while(start < end) {  // strictly < is important
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1; 
        } else {
            end = mid;
        }
    }

    return start; // start == end = peak index
}

int main() {
    int arr[1000];
    int n;

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peak_index = peak_index_using_binary_search(arr, n);
    cout << "Peak index: " << peak_index << endl;

    return 0;
}
