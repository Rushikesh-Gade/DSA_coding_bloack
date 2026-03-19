// Given a string S, the task is to identify the character
//  that appears most frequently. It is guaranteed that 
//  only one character has the highest frequency.


// Input Format
// A single string S (1 ≤ |S| ≤ 100), consisting of lowercase and 
// uppercase English letters.


// Constraints
// A string of length between 1 to 100.


// Output Format
// A single character that appears most frequently in the given string.


// Sample Input
// aaabacB
// Sample Output
// a
// Explanation
// Frequency of each character in the string:

// 'a' → 4 times
// 'b' → 2 times
// 'c' → 1 time
// 'B' → 1 time
// Note: Since 'B' (uppercase) is different from 
// 'b' (lowercase), they are counted separately.

// The character with the highest frequency is
//  'a' (appearing 4 times).

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s,a,c;
	getline(cin, s);
	int n=1,m=0;
	a=s;
	 for(int i=0; i<s.size(); i++){
		 for(int j=0; j<a.size();j++){
		 if(s[i]==a[j]){
            n++;
			if(n>m){
				c=s[i];
				m=n;
			}
         }
		  else{ 
            n=1;
         } 
		}
     }
	cout<<c;

	return 0;
}