#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    int ans=(n%10)+sum_of_digits(n/10);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=sum_of_digits(n);
    cout<<"Sum of digits: "<<ans<<endl;
    return 0;
}