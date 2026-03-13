// Take as input a two-d array. Wave print it row-wise.


// Input Format
// Two integers M(row) and N(column) and further M * N integers(2-d array numbers).


// Constraints
// Both M and N are between 1 to 10.


// Output Format
// All M * N integers are seperated by commas with 'END' written in the end(as shown in example).


// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 12, 13, 14, 24, 23, 22, 21, 31, 32, 33, 34, 44, 43, 42, 41, END

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> a(N, vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>a[j][i];
        }
    }
    
    for(int i=0; i<M; i++){
        if(i%2==0){
        for(int j=0; j<N; j++){
            cout<<a[j][i]<<", ";
        }
         }
         else{
            for(int j=N-1; j>=0; j--){
                cout<<a[j][i]<<", ";
            }
         }
         
    }
    cout<<"END";

}