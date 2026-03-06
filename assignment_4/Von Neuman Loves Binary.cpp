#include<iostream>
using namespace std;
int decimal(int n){
	int temp=n,l=0,dec=1;
	while(temp!=0){
		temp=temp/10;
		l++;
	}
	int arr[l];
	for(int i=0 ;i<l;i++){
		int remain=n%10;
		arr[i]=remain;
		n=n/10;
	}
	for(int i=l-2;i>=0;i--){
		if(arr[i]==0){
			dec=dec*2;
		}
		else{
			dec=dec*2+1;
		}
	}
	return dec;

}
int main() {
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		int n=arr[i];
		int number = decimal(n);
		cout<<number<<endl;
	}
	return 0;
}