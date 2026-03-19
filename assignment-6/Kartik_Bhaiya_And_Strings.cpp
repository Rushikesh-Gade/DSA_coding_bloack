// Kartik Bhaiya has a string consisting of only 'a' and 'b' as the characters. Kartik Bhaiya describes perfectness of a string as the maximum length substring of equal characters. Kartik Bhaiya is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.


// Input Format
// The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.


// Constraints
// 2 ≤ N ≤ 10^6


// Output Format
// A single integer denoting the maximum perfectness achievable.


// Sample Input
// 2
// abba
// Sample Output
// 4
// Explanation
// We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
// Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.

#include<iostream>
#include<string>
using namespace std;
int main() {
	int k,n=1,m=1;
	cin>>k;
	string s;
	cin>>s;

		for(int i=0; i<s.size(); i++){

			    if(k>0 && s[i]=='a'){
				s[i]='b';
				k--;
				
			}
		}
	
	for(int i=1; i<s.size(); i++){
		if(s[i]=s[i-1]){
			n++;
		}
		else{
			break;
		}
	}

			for(int i=0; i<s.size(); i++){

			    if(k>0 && s[i]=='b'){
				s[i]='a';
				k--;
				
			}
		}
	
	for(int i=1; i<s.size(); i++){
		if(s[i]==s[i-1]){
			m++;
		}
		else{
			break;
			
		}
	}
	if(n>=m){
	cout<<n;
	}
	else{
		cout<<m;
	}
	return 0;
}