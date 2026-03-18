// Given a string, find the first non-repeating character in it. For example, if the input string is “coding blocks”, then the output should be ‘d’ and if the input string is “coding”, then the output should be ‘c’.


// Input Format
// The first line contains T denoting the number of testcases. The following T lines contain the string S.


// Constraints
// String Length <100000


// Output Format
// For each testcase, print the first non repeating character present in string. Print -1 if there is no non repeating character.


// Sample Input
// 4
// codingblocks
// abbac
// java
// ccdd
// Sample Output
// d
// c
// j
// -1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int w = 0; w < n; w++) {
        string s = words[w];
        char ans = '\0';  // matlab abhi answer mila nahi

        // s ke har character ko check karo
        for (int i = 0; i < (int)s.length(); i++) {
            int count = 0;

            // yehi character kitni baar aaya, count karo
            for (int j = 0; j < (int)s.length(); j++) {
                if (s[i] == s[j]) {
                    count++;
                }
            }

            // jo character sirf 1 baar aaye, wahi answer
            if (count == 1) {
                ans = s[i];
                break;
            }
        }

        if (ans == '\0') {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}