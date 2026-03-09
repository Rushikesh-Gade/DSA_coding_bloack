#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, target;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    cin >> target;

    sort(arr.begin(), arr.end());
    set<vector<int>> s;

    for (int i = 0; i < N - 2; i++) {
        int l = i + 1, r = N - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == target) {
                s.insert({arr[i], arr[l], arr[r]});
                l++; r--;
            } else if (sum < target) l++;
            else r--;
        }
    }

    for (auto t : s)
        cout << t[0] << ", " << t[1] << " and " << t[2] << endl;
}