#include<iostream>

using namespace std;

int search(int arr[],int n,int x){

    for(int i=0;i<n;i++){

        if(arr[i]==x){
            return i;
        }
    }

    return -1;

}


int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element to be searched: ";
    cin>>x;
    int result=search(arr,n,x);
    if(result==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index: "<<result<<endl;
    }
}