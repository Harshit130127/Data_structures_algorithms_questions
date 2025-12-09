#include<iostream>

using namespace std;


pair<int,int> twoSum(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int sum = arr[start] + arr[end];

        if (sum == target) {
            // Output indices in 1-based format
            return {start + 1, end + 1};
        }
        else if (sum < target) {
            start++;
        }
        else {
            end--;
        }
    }

    return {-1, -1};  // Return -1, -1 if no pair is found
}


int main(){

    int arr[]= {1,2,3,4,5,6,7,8,9};

    int n= sizeof(arr)/sizeof(arr[0]);
    int target=10;

    pair<int,int> ans=twoSum(arr,n,target);
    cout<<"Indices of the elements are: ("<<ans.first<<", "<<ans.second<<")"<<endl;
    return 0;
}