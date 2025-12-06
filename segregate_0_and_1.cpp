#include<iostream>

using namespace std;

void segregate0and1(int arr[],int n){

    int start=0,end=n-1;

    while(start<end)
    {

    if(arr[start]==0){

        start++;
    }

else{

    if(arr[end]==0)
    {
        swap(arr[start],arr[end]);

    }

    else
        end--;
}
    }

}


int main(){

    int arr[]= {0,1,0,1,0,1,0,1};

    int n= sizeof(arr)/sizeof(arr[0]);
    segregate0and1(arr,n);


    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
}
