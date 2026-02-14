#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n1 ,n2;
cin>>n1>>n2;
for(int n=n1; n<n2;n++){
int og=n;
int temp=n;
int sum=0;

//length
 int l=0;
    while(temp!=0){
       temp= temp/10;
        l++;
    }

    //power
while(n!=0){
    int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
   //compare
  if(og==sum){
        cout<<sum<<endl;
    } 
}    
return 0;
}