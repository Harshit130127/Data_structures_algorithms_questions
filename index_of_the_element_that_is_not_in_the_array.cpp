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



        else if (arr[mid]>key){   // if key is less than mid element
                
            if(arr[mid-1]>key)   // if key is also less than mid-1 element
            end=mid-1;


            else if(arr[mid-1]==key){   // if key is equal to mid-1 element
            cout<<"Element is already present in the array at index "<<mid-1<<endl;
            return;
            }

            else{  // if key is greater than mid-1 element
            cout<<"element can be fixed at index"<<endl<<mid-1;
            return;}

        }

        else if (arr[mid]<key){   // if key is greater than mid element 

            if(arr[mid+1]<key)   // if key is also greater than mid+1 element
            start=mid+1;

            else if(arr[mid+1]==key){  // if key is equal to mid+1 element

            cout<<"Element is already present in the array at index "<<mid+1<<endl;
            return;
            }


            else{   // if key is less than mid+1 element
            cout<<"element can be fixed at index"<<endl<<mid+1;
            return;}


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