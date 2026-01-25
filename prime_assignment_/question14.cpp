#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= -N; i--) {
        int r = (i < 0) ? -i : i;

        for (int j = N; j >= r; j--) {
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * r - 1; j++) {
            cout << "  ";
        }

        int start = (r == 0) ? 1 : r;
        for (int j = start; j <= N; j++) {
            cout << j;
            if (j < N) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}