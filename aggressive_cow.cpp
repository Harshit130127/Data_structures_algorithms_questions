#include <iostream>
using namespace std;

// Function to manually sort stall positions (Bubble Sort)
void sortStalls(int stalls[], int totalStalls) {
    for (int i = 0; i < totalStalls - 1; i++) {
        for (int j = 0; j < totalStalls - i - 1; j++) {
            if (stalls[j] > stalls[j + 1]) {
                int temp = stalls[j];
                stalls[j] = stalls[j + 1];
                stalls[j + 1] = temp;
            }
        }
    }
}

// Function to check if cows can be placed with at least 'minDistance' between them
bool canPlaceAllCows(int stalls[], int totalStalls, int totalCows, int minDistance) {
    int cowsPlaced = 1;                 // place first cow in the first stall
    int lastPlacedPosition = stalls[0]; // position of last placed cow

    for (int i = 1; i < totalStalls; i++) {
        if (stalls[i] - lastPlacedPosition >= minDistance) {
            cowsPlaced++;
            lastPlacedPosition = stalls[i];
        }
        if (cowsPlaced == totalCows)    // successfully placed all cows
            return true;
    }
    return false; // can not place all cows with this distance
}

// Function to find the largest minimum distance between cows
int getMaxMinDistance(int stalls[], int totalStalls, int totalCows) {
    sortStalls(stalls, totalStalls); // sort the stalls in ascending order

    int left = 1;                               // smallest possible distance
    int right = stalls[totalStalls - 1] - stalls[0]; // largest possible distance
    int bestDistance = 0;

    while (left <= right) {
        int midDistance = (left + right) / 2;

        if (canPlaceAllCows(stalls, totalStalls, totalCows, midDistance)) {
            bestDistance = midDistance;   // possible answer
            left = midDistance + 1;       // try for a larger distance
        } else {
            right = midDistance - 1;      // try for a smaller distance
        }
    }
    return bestDistance;
}

int main() {
    int stalls[] = {1, 2, 8, 4, 9};
    int totalStalls = 5;
    int totalCows = 3;

    int answer = getMaxMinDistance(stalls, totalStalls, totalCows);
    cout << "Largest minimum distance between cows: " << answer << endl;

    return 0;
}
