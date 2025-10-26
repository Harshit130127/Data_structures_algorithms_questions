#include<iostream>
using namespace std;


void binary_search_to_find_the_index_of_the_element_that_is_not_in_the_array(int arr[], int n, int key) {   // to perform binary search
    int start = 0;
    int end = n - 1;
    
    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {     // if the element is already present in the array and found at mid index 
            cout << "Element is already present in the array at index " << mid << endl;
            return;
        }


    else if (arr[mid] > key) {

    if (mid == 0) {  // mid-1 does not exist
        cout << "element can be fixed at index 0" << endl;
        return;
    }

    if(arr[mid-1] > key)
        end = mid - 1;

    else if(arr[mid-1] == key) {
        cout << "Element is already present in the array at index " << mid-1 << endl;
        return;
    }

    else {
        cout << "element can be fixed at index " << mid << endl;
        return;
    }
}


        else if (arr[mid] < key) {

    if (mid == n-1) {  // mid+1 does not exist
        cout << "element can be fixed at index " << n << endl;
        return;
    }

    if(arr[mid+1] < key)
        start = mid + 1;

    else if(arr[mid+1] == key) {
        cout << "Element is already present in the array at index " << mid+1 << endl;
        return;
    }

    else {
        cout << "element can be fixed at index " << mid+1 << endl;
        return;
    }
}

    }
}




int main(){


int arr[1000],n,key;   // here arr is the array, n is the size of the array and key is the element which is not in the array

cout<<"enter the size of the array:";
cin>>n;


cout<<"enter elements of the array:";
for (int i=0;i<=n-1;i++){

    cin>>arr[i];

}

cout<<"enter the element that is not in the array:";
cin>>key;

binary_search_to_find_the_index_of_the_element_that_is_not_in_the_array(arr,n,key);


}