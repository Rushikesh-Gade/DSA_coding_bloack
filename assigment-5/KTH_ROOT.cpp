#include <iostream>
using namespace std;

// Safe check: does mid^k <= n ?
bool check(long long mid, int k, long long n) {
    long long result = 1;
    for (int i = 0; i < k; i++) {
        if (result > n / mid) return false; // would overflow or exceed n
        result *= mid;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        int k;
        cin >> n >> k;

        long long low = 1, high = n, ans = 1;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (check(mid, k, n)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}