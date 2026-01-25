#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;


    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars;
        
        if (i <= N) {
            stars = N - i + 1;
        } else {

            stars = i - N + 1;
        }

        for (int j = 1; j <= 2 * N - 1; j++) {

            if (j <= stars || j >= 2 * N - stars) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}