#include <iostream>
using namespace std;

// Function to find square root using binary search
int squareRoot(int n) {
    int start = 0, end = n;
    int ans = -1;

    while(start <= end) {
        int mid = (start + end) / 2;
        long long sq = 1LL * mid * mid;  // prevent overflow

        if(sq == n) {
            return mid;  // perfect square
        }
        else if(sq < n) {
            ans = mid;   // store possible answer
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = squareRoot(n);
    cout << "Square root (floor value) is: " << result << endl;

    return 0;
}
