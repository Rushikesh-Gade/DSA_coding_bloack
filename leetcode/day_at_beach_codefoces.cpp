#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    // min_right[i] will store the minimum value from index i to n-1
    vector<int> min_right(n + 1);
    min_right[n] = 2e9; // Infinity placeholder
    for (int i = n - 1; i >= 0; i--) {
        min_right[i] = min(h[i], min_right[i + 1]);
    }

    int blocks = 0;
    int current_max = 0;

    for (int i = 0; i < n; i++) {
        current_max = max(current_max, h[i]);
        
        // If the max seen so far is <= the min of everything that follows,
        // we can safely "close" a block here.
        if (current_max <= min_right[i + 1]) {
            blocks++;
        }
    }

    cout << blocks << endl;

    return 0;
}