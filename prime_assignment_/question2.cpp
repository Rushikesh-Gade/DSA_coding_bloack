#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int row = 1; row <= N; row++) {
        for (int space = 1; space <= N - row; space++) {
            cout << "\t";
        }

        int val = row;
        int total_nums = 2 * row - 1;

        for (int j = 0; j < total_nums; j++) {
            cout << val;

            if (j < total_nums / 2) {
                val++;
            } else {
                val--;
            }

            if (j < total_nums - 1) {
                cout << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}