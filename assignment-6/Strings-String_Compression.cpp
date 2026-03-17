// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2ds.


// Input Format
// A single String S.


// Constraints
// A string of length between 1 to 1000


// Output Format
// The compressed String.


// Sample Input
// aaabbccds
// Sample Output
// a3b2c2ds
// Explanation
// In the given sample test case 'a' is repeated 3 times consecutively,
//  'b' is repeated twice, 'c' is repeated twice. But, 'd' and 's' occurred only 
// once that's why we do not write their occurrence.

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
        else if(n==1){
            cout << s[i]; 
            
        }
		else{
			cout << s[i] << n;
			n=1;
		}
        
    }
    return 0;
}
