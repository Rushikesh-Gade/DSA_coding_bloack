#include <iostream>
using namespace std;
int main()
{
int arr[10] = {10, 20, 30, 40};
int n = 4;
// int position = 2;
int value = 25;
for(int i = n; i > 2; i--)
{
arr[i] = arr[i-1];
}
arr[2] = value;
n++;
for(int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
return 0;
}