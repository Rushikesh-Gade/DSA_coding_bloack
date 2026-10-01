#include<bits/stdc++.h>
using namespace std;

bool is_string_palindrome(string s,int i, int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return is_string_palindrome(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"rnter string: ";
    cin>>s;
    if(is_string_palindrome(s,0,s.size()-1)){
        cout<<"Not palindrome";
    }else{
        cout<<"palindrome";
    }
    return 0;
}