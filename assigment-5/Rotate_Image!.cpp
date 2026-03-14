// Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.




// Input Format
// First line contains a single integer N. Next N lines contain N space separated integers.


// Constraints
// N < 1000


// Output Format
// Print N lines with N space separated integers of the rotated array.


// Sample Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Sample Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 
// Explanation
// Rotate the array 90 degrees anticlockwise.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));

    // Input matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate 90 degrees anti-clockwise
    for (int col = N - 1; col >= 0; col--) {
        for (int row = 0; row < N; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << "\n";
    }

    return 0;
}