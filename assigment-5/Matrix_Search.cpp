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
