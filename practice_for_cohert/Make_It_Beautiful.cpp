#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[0]== arr[i]){ 
            count++;  
        }
    }
    int ugly = 0;
    for(int i=0; i<n; i++){
        if(sum == arr[i]){ 
            ugly = 1;  
            if(i>0){
            swap(arr[i], arr[i-1]);
            ugly = 0;
            }
        }
        sum += arr[i];
    }
if(count == n){
   cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
}
    return 0;
}