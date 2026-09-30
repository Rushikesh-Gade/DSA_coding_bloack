#include<bits/stdc++.h>
using namespace std;
void fun(int n);
int main() {
    fun(10);
}
void fun(int n) {
   
    cout << n << endl;
    cout <<" hello" << endl;
    fun(n-1);
    return;
    
}