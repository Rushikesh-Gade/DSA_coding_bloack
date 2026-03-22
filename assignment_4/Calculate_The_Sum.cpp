#include<iostream>
using namespace std;

int main() {
	const long long mod = 1000000007LL;
	int n;
	cin >> n;

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		sum = (sum + x) % mod;
	}

	int no;
	cin >> no;
	for (int i = 0; i < no; i++) {
		int a;
		cin >> a;
	}

	while (no--) {
		sum = (sum * 2) % mod;
	}

	cout << sum << endl;
	return 0;
}