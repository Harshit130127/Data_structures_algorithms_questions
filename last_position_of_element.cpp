#include<iostream>
using namespace std;

void binary_search_first_position(int arr[], int n, int key) {   // to perform binary search
    int start = 0;
    int end = n - 1;
    int first=-1;
    int last=-1;
    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            last=mid;     // here first is used to store the first occurrence index
            start=mid+1;

        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    

    if(last == -1){
         cout << "Element not found in the array." << endl;
        }

    else{
        cout << "Last position of element is at index: " << last << endl;
}
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

    binary_search_first_position(arr, n, key);

    return 0;
}