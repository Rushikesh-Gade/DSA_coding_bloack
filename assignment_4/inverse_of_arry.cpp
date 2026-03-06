#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],b[n],j=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[a[i]]=i;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}