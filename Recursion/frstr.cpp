#include<bits/stdc++.h>
using namespace std;
void greet(int n);
int main() {
    greet(5);
}
void greet(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    greet(n-1);
    
} 