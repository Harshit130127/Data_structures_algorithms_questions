#include<iostream>

using namespace std;

int pairDifference(int arr[], int n, int k) {
    int start=0,end=1;

    while(end<n){
        int diff=arr[end]-arr[start];

        if(diff==k){
            cout<<"Pair found: ("<<arr[start]<<", "<<arr[end]<<")"<<endl;
            return 1;
        }
        else if(diff<k){
            end++;
        }
        else{
            start++;
        }

        if(start==end){
            end++;
        }
    }

    return 0;
}


int main (){
    int n,k;
    cout<<"Enter the size of array and the difference value: ";
    cin>>n>>k;

    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    pairDifference(arr,n,k);

}