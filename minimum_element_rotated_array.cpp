#include<iostream>

using namespace std;

int minimum_element_index_in_rotated_array(int arr[],int n){

int ans=arr[0];
int start=0;

int end=n-1;

while(start<=end)

{
int mid=(start+(end-start))/2;

    if(arr[mid]>=arr[0]){
        start=mid+1;
    }

    else{

        ans=arr[mid];
        end=mid-1;
    }

}
return ans;

}

int main(){


int arr[]={5,6,7,1,2,3,4};


int n=sizeof(arr)/sizeof(arr[0]);

cout<<"The minimum element in the rotated sorted array is: ";

int element=minimum_element_index_in_rotated_array(arr,n);
cout<<element<<endl;

}