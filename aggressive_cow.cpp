#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int getMaxMinDistance(int stalls[], int n, int k) {
    sort(stalls, stalls + n); // sort the stall positions

    int start = 1;
    int end = stalls[n - 1] - stalls[0];
    int mid, ans = 0;

    while (start <= end) {
        mid = start + (end - start) / 2;

        int count = 1;        // first cow placed at first stall
        int pos = stalls[0];  // last placed cow position

        for (int i = 1; i < n; i++) {
            if (pos + mid <= stalls[i]) {
                count++;         // place next cow
                pos = stalls[i]; // update last position
            }
        }

        if (count < k) {
            end = mid - 1; // not enough cows could be placed
        } else {
            ans = mid;     // possible answer
            start = mid + 1; // try for larger distance
        }
    }

    return ans;
}

int main() {
    int stalls[] = {1, 2, 8, 4, 9};
    int n = 5;
    int k = 3; // number of cows

    int result = getMaxMinDistance(stalls, n, k);
    cout << "Largest minimum distance between cows: " << result << endl;

    return 0;
}
