#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> prices(N);
        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }
        int M;
        cin >> M;

        sort(prices.begin(), prices.end());

        int left = 0, right = N - 1;
        int best_i = 0, best_j = 0;

        while (left < right) {
            int sum = prices[left] + prices[right];
            if (sum == M) {
                best_i = prices[left];
                best_j = prices[right];
                left++;
                right--;
            } else if (sum < M) {
                left++;
            } else {
                right--;
            }
        }

        cout << "Deepak should buy roses whose prices are "
             << best_i << " and " << best_j << ".\n\n";
    }

    return 0;
}