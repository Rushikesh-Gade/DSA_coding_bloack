#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N % 2 == 0 || N <= 0 || N >= 10) {
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N  ) 
            {  
                cout << "*";
            } else if(i%2==0 && j%2==0){
                cout << "*";
            }else{
                cout<<" ";
            }

            if (j < N) {
                cout << "\t";
                
            }
        }
        cout << endl;
    }
    return 0;
}
