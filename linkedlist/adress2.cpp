#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};
int main() {
    Node* first = new Node();
    first->data = 100;
    // first->next = NULL;
    Node* second = new Node();
    second->data = 200;
    second->next = NULL;
    first->next = second;
    Node* third = new Node();
    third->data = 300;
    third->next = NULL;
    second->next = third;
    cout<< first->data << endl;
    cout<< second->data << endl;
    cout<< third->data << endl;
    return 0;
}