#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = -N; i <= N; i++) {
        int k = abs(i);

        // decreasing part
        for (int j = N - k; j >= 0; j--) {
            cout << j << " ";
        }

        // increasing part
        for (int j = 1; j <= N - k; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}