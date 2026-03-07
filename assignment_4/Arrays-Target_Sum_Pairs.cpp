#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        int sum = arr[i] + arr[j];
        if(sum==target){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        cout<<arr[i]<<" and "<<arr[j]<<endl;
        }
     }
   }
        
	return 0;
}