// A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.


// Input Format
// A string 'S' containing only lowercase English letters ('a' to 'z').


// Constraints
// Length of string < 10^5


// Output Format
// A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String. If no valid Good String exists, print 0.


// Sample Input
// cbaeicde
// Sample Output
// 3
// Explanation
// Longest good substring is "aei"

#include<iostream>
#include<string>
using namespace std;
bool isovowel(char c){
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int main() {
	string s;
	cin>>s;
	int sum=0;
	int count=0;
	for(int i=0; i<s.size(); i++){
		if(isovowel(s[i])){
			count++;
		}
		else{

		if(sum<count){
			sum=count;
			
		}
		count=0;
		}
	}
	 if(sum<count){
			sum=count;
		}
	cout<<sum;
	return 0;
}