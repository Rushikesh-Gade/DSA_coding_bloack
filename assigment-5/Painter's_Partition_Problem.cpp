// Given K painters to paint N boards where each painter takes 1 unit of time to paint 1 unit of boards i.e. if the length of a particular board is 5, it will take 5 units of time to paint the board. Compute the minimum amount of time to paint all the boards.

// Note that:

// Every painter can paint only contiguous segments of boards.
// A board can only be painted by 1 painter at maximum.

// Input Format
// First line contains K which is the number of painters. Second line contains N which indicates the number of boards. Third line contains N space separated integers representing the length of each board.


// Constraints
// 1 <= K <= 10
// 1 <= N <= 10
// 1<= Length of each Board <= 10^8


// Output Format
// Output the minimum time required to paint the board.


// Sample Input
// 2
// 2
// 1 10
// Sample Output
// 10

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	bool canpaint(vector<int>& boards, int k , long long m){
		int p=1;
		int t=0;
		for(int i=0; i<boards.size(); i++){
			if(boards[i]+t<=m){
				t+=boards[i];
			}
			else {
				p++;
				t=boards[i];
			}
		}
		return p<=k;
	}
	int main() {
	int k,n;
	cin>>k>>n;
	long long maxi=0;
	long long sum=0;
	vector<int> boards(n);

	for(int i=0; i<n; i++){
		cin>>boards[i];
	}

	for(int i=0; i<n; i++){
		sum+=boards[i];
		maxi=max(maxi,(long long)boards[i]);
	}
	long long s=maxi;
	long long e=sum;
	long long ans=0;
	while(s<=e){
		long long m=s+(e-s)/2;
		if(canpaint(boards,k,m)){
			ans=m;
			e=m-1;
		}
		else{
			s=m+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}