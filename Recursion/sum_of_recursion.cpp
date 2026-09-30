#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int main() {
    int sum = sum(5);
    cout << "Sum: " << sum << endl;
    return 0;
}
int sum(int n) {
    if(n == 0) {
        return 0;
    }
    return n + sum(n-1);
}
