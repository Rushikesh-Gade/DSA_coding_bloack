#include<iostream>
using namespace std;
int main()
{
    int Units,bill=0;
    cin>>Units;
    if(Units<0)
    {
        return 0;
    }
    if(Units<=100)
    {
        bill=Units*2;
    }
    else if(Units>100 && Units<=200)
    {
        bill=Units*3;
    }
    else 
    {
        bill=Units*5;
    }
cout<<bill<<endl;
return 0;
}
