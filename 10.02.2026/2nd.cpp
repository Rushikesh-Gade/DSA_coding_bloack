#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,8,4,5};
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
     sort(a.begin(), a.end());
    reverse(a.begin(),a.end());
   
    a.insert(a.end()-1,6);
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
return 0;
}
