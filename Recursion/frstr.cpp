#include<bits/stdc++.h>
using namespace std;
void greet(int n);
int main() {
    greet(5);
    int sum = 0;
    cout << "Sum: " << sum << endl;
}
void greet(int n) {
    int sum = 0;
    if(n == 0) {
        return;
    }
    cout << n << " ";
    sum += n;
    greet(n-1);
    // cout << n << " ";
} 