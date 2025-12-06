#include<iostream>

using namespace std;


void twoSum(int arr[], int n, int target) {
    int start = 0, end = n - 1;

    while (start < end) {
        int sum = arr[start] + arr[end];

        if (sum == target) {
            cout << "Pair found: (" << arr[start] << ", " << arr[end] << ")" << endl;
            return;
        }
        else if (sum < target) {
            start++;
        }
        else {
            end--;
        }
    }

    cout << "No pair found\n";
}



int main(){

    int arr[]= {1,2,3,4,5,6,7,8,9};

    int n= sizeof(arr)/sizeof(arr[0]);
    int target=10;

    twoSum(arr,n,target);

    return 0;
}