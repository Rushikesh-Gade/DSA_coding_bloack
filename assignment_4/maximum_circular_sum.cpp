// Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

// A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].


// Input Format
// First line contains integer t which is number of test case.
// For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.


// Constraints
// 1<=t<=100
// 1<=n<=1000
// |Ai| <= 10000


// Output Format
// Print the maximum circular sum for each testcase in a new line.


// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
// Explanation
// Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)

#include<iostream>
using namespace std;

int kadaneMax(int arr[], int n) {
	int cur = arr[0], best = arr[0];
	for (int i = 1; i < n; i++) {
		cur = max(arr[i], cur + arr[i]);
		best = max(best, cur);
	}
	return best;
}

int kadaneMin(int arr[], int n) {
	int cur = arr[0], best = arr[0];
	for (int i = 1; i < n; i++) {
		cur = min(arr[i], cur + arr[i]);
		best = min(best, cur);
	}
	return best;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		int total = 0;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			total += arr[i];
		}

		int normalMax = kadaneMax(arr, n);
		int minSub = kadaneMin(arr, n);
		int circularMax = total - minSub;

		if (normalMax < 0) {
			cout << normalMax;
		} else {
			cout << max(normalMax, circularMax);
		}

		if (t) {
			cout << "\n";
		}
	}

	return 0;
}