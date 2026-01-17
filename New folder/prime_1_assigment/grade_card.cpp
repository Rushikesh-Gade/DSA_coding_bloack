#include<iostream>
using namespace std;
int main()
{
    int Marks;
    cin>>Marks;
    if(Marks>=90)
    {
        cout<<"A"<<endl;
    }
    else if(Marks>=75 && Marks<90)
    {
        cout<<"B"<<endl;
    } 
    else if (Marks>=60 && Marks<75)
    {
        cout<<"C"<<endl;
    }
    else 
    {
        cout<<"Fail"<<endl;
    }
return 0;   
}