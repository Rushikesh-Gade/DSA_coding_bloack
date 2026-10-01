#include<bits/stdc++.h>
using namespace std;

void printarray(int i,int arr[], int n){
    if(i==n){
        return;
    }
    cout<<arr[i]<<" ";
    printarray(i+1, arr, n);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printarray(0, arr, n);
    return 0;
    
}
