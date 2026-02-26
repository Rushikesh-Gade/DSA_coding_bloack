#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    int left=0,right=col-1,top=0,bottom=row-1;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            cin>>arr[top][i];
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cin>>arr[i][right];
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cin>>arr[bottom][i];
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cin>>arr[i][left];
            }
            left++;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}