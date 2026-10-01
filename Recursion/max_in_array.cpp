#include<bits/stdc++.h>
using namespace std;

int maxelement(int i,int arr[],int n){
    if(i==n-1){
        return arr[i];
    }
    int ans = maxelement(i+1,arr,n);
    return max(arr[i],ans);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"max jo hai"<<maxelement(0,arr,n)<<endl;
    return 0;
}