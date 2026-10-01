#include<bits/stdc++.h>
using namespace std;

bool issortd(int i,int arr[],int n){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
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
    if(issortd(0,arr,n)){
        cout<<"sorted";
    }else{
        cout<<"not sorted";
    }
    return 0;
}
