#include<bits/stdc++.h>
using namespace std;

void reversestring(string &s,int i,int j){
    if(i>=j){
        return;
    }
    swap(s[i],s[j]);
    reversestring(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    reversestring(s,0,s.size()-1);
    cout<<"revrse string: "<<s<<endl;
}