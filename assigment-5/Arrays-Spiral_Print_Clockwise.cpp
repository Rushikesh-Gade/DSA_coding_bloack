// Take as input a 2-d array.Print the 2-D array in sprial form clockwise.


// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).


// Constraints
// Both M and N are between 1 to 100.


// Output Format
// All M * N integers separated by commas with 'END' written in the end(as shown in example).


// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int left=0,right=c-1,top=0,bottom=r-1;
    while(left<=right and top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            //top
            cout<<arr[top][i]<<", ";
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            //right
            cout<<arr[i][right]<<", ";
        }
        right--;
        if(top<=bottom){
            //right to left
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<", ";
            }
            bottom--;
        }
        if(left<=right){
            //bottom to top
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<", ";
            }
        }
        left++;
    }
	cout<<"END";
    return 0;
}