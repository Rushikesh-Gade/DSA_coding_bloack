#include<iostream>
using namespace std;
void fullarr(int arr[],int n,int a){
	int brr[n];
	 for(int i=0;i<n;i++){
		 int s=i-a;
	if(i-a<0){
		s=n-i-a;
	}
		 brr[i]=arr[i]+arr[s];
	 }
	 for(int i=0;i<n;i++){
		 arr[i]=brr[i];
	 }
	 
}
int main() { 
	int n,a,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int no;
	cin>>no;
	for(int i=0;i<no;i++){
		cin>>a;
		fullarr(arr,n,a);

	}
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<sum<<endl;

	return 0;
}