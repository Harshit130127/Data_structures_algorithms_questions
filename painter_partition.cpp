#include<iostream>

using namespace std;

long long paintPartition(int arr[], int n, int k) {  // function to find minimum time to paint all boards
    long long start = 0, end = 0;
    for(int i = 0; i < n; i++) {
        end += arr[i];
        if(arr[i] > start) {
            start = arr[i];
        }
    }

    long long ans = -1;

    while(start <= end) {  // binary search
        long long mid = start + (end - start) / 2;

        long long sum = 0;
        int painters = 1;
        for(int i = 0; i < n; i++) {  // allocate boards using mid as max length
            sum += arr[i];
            if(sum > mid) { // need to allocate to next painter
                painters++;  // increment painter count
                sum = arr[i];  // reset sum to current board length means this board is allocated to new painter
            }
        }

        if(painters <= k) {  // the comparison is because if painters used is less than k, it's also feasible
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}


int main(){

int n;
cout << "Enter the number of boards: ";
cin >> n;

int arr[n];
cout << "Enter the lengths of the boards: ";
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}

int k;
cout << "Enter number of painters: ";
cin >> k;

long long result = paintPartition(arr, n, k);
cout << "Minimum time to paint all boards is: " << result << endl;


}