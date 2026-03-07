#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        int decimal = 0;
        int power = 0;

        while(n > 0) {
            int digit = n % 10;
            decimal += digit * pow(2, power);
            power++;
            n = n / 10;
        }

        cout << decimal << endl;
    }

    return 0;
}