// You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

#include<bits/stdc++.h>
using namespace std;

// Helper function to check if we can place k cows with minimum distance of 'minDist'
bool canPlaceCows(vector<int>& stalls, int k, int minDist) {
    int cowsPlaced = 1;  // Place first cow at first stall
    int lastPosition = stalls[0];
    
    for (int i = 1; i < stalls.size(); i++) {
        // If current stall is at least minDist away from last placed cow
        if (stalls[i] - lastPosition >= minDist) {
            cowsPlaced++;
            lastPosition = stalls[i];
            
            // If we've placed all k cows, return true
            if (cowsPlaced == k) {
                return true;
            }
        }
    }
    
    return false;
}

// Binary search function to find maximum minimum distance
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());
    
    int n = stalls.size();
    int left = 1;  // Minimum possible distance
    int right = stalls[n-1] - stalls[0];  // Maximum possible distance
    int answer = 1;
    
    // Binary search on the answer
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If we can place k cows with minimum distance 'mid'
        if (canPlaceCows(stalls, k, mid)) {
            answer = mid;  // Try for larger distance
            left = mid + 1;
        } else {
            right = mid - 1;  // Try for smaller distance
        }
    }
    
    return answer;
}

int main() {
    int n, k;
    cout << "Enter number of stalls: ";
    cin >> n;
    
    vector<int> stalls(n);
    cout << "Enter stall positions: ";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    
    cout << "Enter number of cows: ";
    cin >> k;
    
    int result = aggressiveCows(stalls, k);
    cout << "Maximum minimum distance between cows: " << result << endl;
    
    return 0;
}