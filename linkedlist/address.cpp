// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;          
    int* ptr = &a;       

    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr (address of a): " << ptr << endl;
    cout << "Address of ptr itself: " << &ptr << endl;

    return 0;
}
