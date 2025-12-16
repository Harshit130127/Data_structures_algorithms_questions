#include<iostream>

using namespace std;

int twoEqualSumSubarray(int arr[], int n) {
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int prefix_sum = 0;

    for(int i = 0; i < n - 1; i++){
        prefix_sum += arr[i];   // Sum of the first subarray
        int ans= total_sum - prefix_sum;   // Sum of the second subarray

        if(prefix_sum == ans){
            cout << "Two equal sum subarrays found with sum: " << prefix_sum << endl;
            return 1;
        }
    }
    return 0;
}


int main (){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(!twoEqualSumSubarray(arr, n)){
        cout << "No two equal sum subarrays found." << endl;
    }
}