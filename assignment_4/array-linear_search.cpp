#include <iostream>
using namespace std;

int findIndex(int arr[], int n, int m) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int N;
    cin >> N;  

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  
    }

    int M;
    cin >> M; 

    int result = findIndex(arr, N, M);
    cout << result << endl;  

    return 0;
}