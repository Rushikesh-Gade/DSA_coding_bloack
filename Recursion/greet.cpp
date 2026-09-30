#include<bits/stdc++.h>
using namespace std;
void greet(int n);
int main() {
    greet(10);
}
void greet(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    cout <<" hello" << endl;
    greet(n-1);
    
}