#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }

        for (int j = 1; j <= 2 * (N - i) - 1; j++) {
            cout << "\t";
        }

        int startVal = (i == N) ? i - 1 : i;

        for (int j = startVal; j >= 1; j--) {
            cout << j;
            if (j > 1) {
                cout << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}