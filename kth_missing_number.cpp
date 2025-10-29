#include<iostream>

using namespace std;

int findKthPositive(int arr[], int k,int n) {
    int start = 0, end = n - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int missing = arr[mid] - (mid + 1);
        
        if (missing < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return start + k;
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
    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;

    int result = findKthPositive(arr, k,n);
    cout << "The " << k << "th missing number is: " << result << endl;

    return 0;
}