#include<iostream>
using namespace std;


int element_search(int arr[],int n,int target)
{

int start=0;
int end=n-1;

int ans=-1;

while(start<=end){

int mid=(start+(end-start))/2;


if(arr[mid]==target){
    ans=mid;
    return mid;
}

else if(arr[mid]>=arr[0]){

    if(arr[start]<=target && arr[mid]>=target)
end=mid-1;

else
start=mid+1;

}

else{
if(arr[mid]<=target && arr[mid]>=target){

    start=mid+1;
}
  else  end=mid-1;
}




}


}