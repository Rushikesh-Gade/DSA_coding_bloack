#include<iostream>
using namespace std;
int main()
{
    int n;
    int m=0;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
        cout<<" \t";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            
            m++;
        cout<<m<<"\t" ;
        }
        cout<<endl;
    }
}