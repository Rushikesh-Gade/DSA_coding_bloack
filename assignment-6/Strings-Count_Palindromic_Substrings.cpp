// Take as input S, a string. Write a program that 
// gives the count of substrings of this string which 
// are palindromes and Print the ans.


// Input Format
// Single line input containing a string


// Constraints
// Length of string is between 1 to 1000.


// Output Format
// Integer output showing the number of palindromic substrings.


// Sample Input
// abc
// Sample Output
// 3
// Explanation
// For the given sample case , 
// the palindromic substrings of the string abc are "a","b" 
// and "c".So, the ans is 3.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int n=s.size();
	int ans=0;

	for(int i=0; i<n; i++){
		int l=i,r=i;
		while(l>=0 && r<n && s[l]==s[r]){
			ans++;
			l--;
			r++;
		}

		l=i;
		r=i+1;
		while(l>=0 && r<n && s[l]==s[r]){
			ans++;
			l--;
			r++;
		}
	}

	cout<<ans;
	return 0;
}