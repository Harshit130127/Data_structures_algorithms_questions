#include<iostream>
using namespace std;

int peak_index_using_binary_search(int arr[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end){

        int mid = (start + end) / 2;

        if(mid > 0 && mid < n - 1){

            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                cout << "the peak index is" << endl;
                return mid;
            }
            else if(arr[mid] < arr[mid - 1]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if(mid == 0) start = mid + 1;
            else end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[1000];
    int n;

    cout << "enter the size of the array" << endl;
    cin >> n;

    cout << "enter the elements of the array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int peak_index = peak_index_using_binary_search(arr, n);
    cout << peak_index << endl;

    return 0;
}
