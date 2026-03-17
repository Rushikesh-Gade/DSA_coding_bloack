// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.


// Input Format
// A single String S


// Constraints
// 1 < = length of String < = 1000


// Output Format
// The compressed String.


// Sample Input
// aaabbccdsaa
// Sample Output
// a3b2c2d1s1a2
// Explanation
// In the given sample test case 'a' 
// is repeated 3 times consecutively, 
// 'b' is repeated twice, 'c' is repeated twice 
// and 'd and 's' occurred only once.

#include <iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            n++;
        }
        else{
            cout << s[i] << n; 
            n=1;
        }
        
    }
    return 0;
}
