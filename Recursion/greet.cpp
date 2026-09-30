#include<bits/stdc++.h>
using namespace std;
void fun(int n);
int main() {
    greet(10);
}
void fun(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    cout <<" hello" << endl;
    fun(n-1);
    
}