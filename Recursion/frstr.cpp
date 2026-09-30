#include<bits/stdc++.h>
using namespace std;
void greet(int n);
int main() {
    greet(5);
    int sum = 0;
}
void greet(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    sum += n;
    greet(n-1);
    // cout << n << " ";
} 