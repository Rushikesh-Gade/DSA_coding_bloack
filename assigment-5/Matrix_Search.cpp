// Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.


// Input Format
// First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.


// Constraints
// 1 <= N,M <= 30 0 <= A[i] <= 100


// Output Format
// Print 1 if the element is present in the matrix, else 0.


// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62
// Sample Output
// 0

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> a(N, vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M ; j++){
            cin>>a[i][j];
        }
    }
    int num,ans=0;
    cin>>num;
    for(int i=0; i<N ; i++){
        for(int j=0; j<M; j++){
          if(num == a[i][j]){
            ans=1;
          }
        }
    }
    cout<<ans;
    return 0;
}
