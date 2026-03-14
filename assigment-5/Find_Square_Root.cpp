// If x is not a perfect square, return floor(sqrt(x)).
// Note: DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY


// Input Format
// An integer A .


// Constraints
// 0 <= A <10000000000


// Output Format
// Squareroot of A.


// Sample Input
// 25
// Sample Output
// 5

#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
    int ans = 0;
    for (int i = 1; i * i <= A; i++) {
        ans = i;
    }
    return ans;
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}