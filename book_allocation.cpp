#include<iostream>
using namespace std;

int findMinPages(int arr[], int k, int n) {
    if(k > n) return -1; // Not enough books for each student

    int start = arr[0], end = 0;
    for(int i = 0; i < n; i++) {  // calculate total pages and max pages
        end += arr[i];
 
        if(arr[i] > start) {
            start = arr[i];
        }
    }

    int ans = -1;
 
    while(start <= end) {  // binary search
        int mid = start + (end - start) / 2;

        int page = 0, count = 1;
        for(int i = 0; i < n; i++) {  // allocate books using mid as max pages
            page += arr[i];
            if(page > mid) { // need to allocate to next student
                count++;
                page = arr[i];
            }
        }

        if(count <= k) {  // feasible to allocate within k students because if count is less than k, it's also feasible
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    int arr[n];
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of students: ";
    cin >> k;

    int result = findMinPages(arr, k, n);
    cout << "Minimum possible maximum pages is: " << result << endl;

    return 0;
}
