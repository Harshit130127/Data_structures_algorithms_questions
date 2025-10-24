#include<iostream>
using namespace std;


void insertion_sort(int arr[], int n){

    for(int i=1;i<n;i++){

        {
for(int j=i;j>0;j--){

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }

}


        }
    }


    
}


int main(){

    int arr[1000];
    int n;
    cout<<"Enter number of elements: ";

    cin>>n;


    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

insertion_sort(arr,n);

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;



}