#include <iostream> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }
        for(int k=n-i;k>=1;k--){
            cout<<"* ";
        }
        cout <<endl;
    }

    return 0;
}   