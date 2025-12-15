#include<iostream>

using namespace std;

int multiplication(int arr[], int n, int target){
    int start=0, end=n-1;

    while(start < end){
        int prod = arr[start] * arr[end];

        if(prod == target){
            cout<<"Pair found: ("<<arr[start]<<", "<<arr[end]<<")"<<endl;
            return 1;
        }
        else if(prod < target){
            start++;
        }
        else{
            end--;
        }
    }
}


int main (){
    int n, target;
    cout<<"Enter the size of array";
    cin>>n;

    cout<<"Enter the target multiplication value: ";
    cin>>target;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // multiplication(arr, n, target);
}