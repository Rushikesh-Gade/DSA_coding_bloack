#include<bits/stdc++.h>
using namespace std;
void fun(int n);
int main() {
    fun(10);
}
void fun(int n) {
    if(n == 0) {
        return;
    }
    cout << n <<" ";
    
    fun(n-1);
    cout <<" hello" << endl;
    cout << n << " ";
    
    
}