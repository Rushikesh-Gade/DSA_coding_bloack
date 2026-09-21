#include <iostream>
using namespace std;

int main() {
    int a = 10;          // integer variable
    int* ptr = &a;       // pointer storing the address of 'a'

    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr (address of a): " << ptr << endl;
    cout << "Address of ptr itself: " << &ptr << endl;

    return 0;
}
