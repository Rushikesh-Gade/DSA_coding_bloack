#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<long long> output(N, 1);

    // Prefix product
    long long prefix = 1;
    for (int i = 0; i < N; i++) {
        output[i] = prefix;
        prefix *= arr[i];
    }

    // Suffix product
    long long suffix = 1;
    for (int i = N - 1; i >= 0; i--) {
        output[i] *= suffix;
        suffix *= arr[i];
    }

    // Print result
    for (int i = 0; i < N; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}