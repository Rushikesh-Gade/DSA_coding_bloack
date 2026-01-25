#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int spaces = N / 2;
    int stars = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << "\t";
        }

        for (int j = 1; j <= stars; j++) {
            cout << "*";
            if (j < stars) {
                cout << "\t";
            }
        }
        cout << endl;

        if (i <= N / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }
    return 0;
}