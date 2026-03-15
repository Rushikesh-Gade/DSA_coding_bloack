// First line contains two integers m and n denoting the dimensions of the matrix Next m lines contains n integers each.


// Constraints
// 1 <= m*n <= 106


// Output Format
// Print the modified matrix


// Sample Input
// 2 2
// 1 0
// 0 0
// Sample Output
// 1 1
// 1 0

#include<iostream>
#include<vector>
using namespace std;
int main () {
	int m,n;
	cin>>m>>n;
	vector<vector<int>> a(m, vector<int>(n));
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int r,c;
	cin>>r>>c;
	for(int i=0; i<m; i++){
		c=i;
		for(int j=0; j<n; j++){
			r=j;
			if(a[i][j]==1){
				for(i=c; i<c+1; i++){
					for(j=r; j<n; j++){
						a[i][j]=1;
					}
				}
			}
		}
	}

		for(int i=0; i<m; i++){
		c=i;
		for(int j=0; j<n; j++){
			r=j;
			if(a[i][j]==1){
				for(i=c; i<c+1; i++){
					for(j=r; j<n; j++){
						a[j][i]=1;
					}
				}
			}
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
	cout<<endl;
	}
	return 0;
}