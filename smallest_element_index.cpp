#include<iostream>

using namespace std;


int findSmallestElementIndex(int arr[], int n) {   
    if (n <= 0) {
        return -1; // Return -1 for empty array
    }

    int minindex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
    }
    return minindex;
}
    
int main(){

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result=findSmallestElementIndex(arr, n);

    cout << "Index of the smallest element: " << result << endl;
}