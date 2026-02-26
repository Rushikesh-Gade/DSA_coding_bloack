#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<row;j++){
        if(j%2!=0){
             for(int i=col-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<col;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        

    }
    return 0;
}