#include<bits/stdc++.h>
using namespace std;

bool issortd(int i,int arr[],int n){
    if(i==n-1){
        return true;
    }
    if(i<i+1){
        return true;
    }else{
        return false;
    }
    issortd(i+1,arr,n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    issortd(0,arr,n);
    return 0;
}
