#include<iostream>
using namespace std;
int main()
{
    int A;
    cin>>A;
    if(A>=0 && A<=150)
    {
        if(A>=18)
        {
            cout<<"Eligible"<<endl;
        }
        else
        {
            cout<<"Not Eligible"<<endl;
        }
    }
return 0;
}