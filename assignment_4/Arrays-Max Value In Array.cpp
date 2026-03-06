#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
	sort(arr,arr+n);
	max=arr[n-1];
	cout<<max;
		
    return 0;
}

