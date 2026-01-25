#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= -N; i--) {
        int r = (i < 0) ? -i : i;

        for (int j = 1; j <= 2 * (N - r); j++) {
            cout << "  ";
        }

        for (int j = r; j >= 0; j--) {
            cout << j << " ";
        }

        for (int j = 1; j <= r; j++) {
            cout << j;
            if (j < r) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}