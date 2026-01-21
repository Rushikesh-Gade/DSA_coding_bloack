#include<iostream>
using namespace std;
int main()
{
    int Salary,Experience ;
    cin>>Salary>>Experience;
    if (Experience < 0 || Experience > 100 || Salary < 1) 
    {
        return 0;
    }
    int bonus=0;
        if(Experience>=5)
        {

            bonus=(Salary * 10) / 100;
        }
cout<<bonus<<endl;
return 0;
}