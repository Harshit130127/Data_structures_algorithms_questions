#include<iostream>

using namespace std;

void peak_index_using_binary_search(int arr[],int n){

int start=0;
int end=n-1;

while(start<=end){

int mid=(start+(start-end))/2;


if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){


    cout<<"the peak index is"<<mid<<endl;

}


else if (arr[mid]<arr[mid-1]){

    end=mid-1;
}

else if (arr[mid]<arr[mid+1]){
    start=mid+1;
}

}




}