#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5};
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
return 0;
}
