#include <iostream>
#include <vector>
using namespace std;

long long trapWater(vector<int>& height) {
    int n = height.size();
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    long long water = 0;

    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;
        }
    }
    return water;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;   // number of test cases

    while (T--) {
        int N;
        cin >> N;   // number of towers
        vector<int> height(N);

        for (int i = 0; i < N; i++) {
            cin >> height[i];
        }

        cout << trapWater(height) << "\n";
    }

    return 0;
}