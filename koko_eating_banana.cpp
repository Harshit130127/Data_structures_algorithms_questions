#include <iostream>
#include <vector>
#include <algorithm> // for max_element
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    long long sum = 0;
    int end = 0, start, mid, ans = 0;
    int n = piles.size();

    // calculate total bananas and maximum pile size
    for (int i = 0; i < n; i++) {
        sum += piles[i];
        end = max(end, piles[i]);
    }

    // starting speed = total bananas / total hours (minimum average speed)
    start = sum / h;
    if (!start) start = 1;  // ensure at least speed 1 to avoid division by zero

    //  binary search for minimum valid eating speed
    while (start <= end) {
        mid = start + (end - start) / 2; // current speed guess
        int total_hours = 0;

        // Calculate total hours needed for this speed
        for (int i = 0; i < n; i++) {
            total_hours += piles[i] / mid;
            if (piles[i] % mid)
                total_hours++;
        }

        // Step 4: Adjust range based on time
        if (total_hours > h) {
            start = mid + 1; // Koko too slow → increase speed
        } else {
            ans = mid;       // possible answer
            end = mid - 1;   // try to find smaller valid speed
        }
    }

    return ans;
}

int main() {
    int n, h;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter bananas in each pile: ";
    for (int i = 0; i < n; i++) cin >> piles[i];

    cout << "Enter total hours (H): ";
    cin >> h;

    cout << "Minimum eating speed Koko needs: " << minEatingSpeed(piles, h) << " bananas/hour" << endl;
}
