// Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.


// Input Format
// String


// Constraints
// Length of string should be between 1 to 1000.


// Output Format
// String


// Sample Input
// abcg
// Sample Output
// badf

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
    string s;
    getline(cin, s);

    for (int i=0; i<s.size(); i++){
        if(i%2==0){
			s[i]=s[i]+1;
		}
		else{
			s[i]=s[i]-1;
		}
    }
	cout<<s;
return 0;
}
