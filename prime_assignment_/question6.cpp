#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= 2 * N - 1; i++) {
        int curr_row;
        if (i <= N) {
            curr_row = i;
        } else {
            curr_row = 2 * N - i;
        }

        for (int j = 1; j <= N - curr_row; j++) {
            cout << "\t";
        }

        int val = curr_row;
        int total_nums = 2 * curr_row - 1;

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