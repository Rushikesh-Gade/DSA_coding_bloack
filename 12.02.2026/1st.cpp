#include<iostream>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                break;
            }
        }
    }
}