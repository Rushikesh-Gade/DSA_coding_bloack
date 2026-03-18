// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.


// Input Format
// String


// Constraints
// Length of string should be between 1 to 1000.


// Output Format
// String


// Sample Input
// abC
// Sample Output
// ABc
// Explanation
// Toggle Case means to change UpperCase
//  character to LowerCase character and vice-versa.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
    string s;
    getline(cin, s);

    for (int i=0; i<s.size(); i++){
        if (isupper(s[i])){
           s[i]=tolower(s[i]);
        }
        else {
			s[i]=toupper(s[i]);
		}
    }
	cout<<s;
return 0;
}
