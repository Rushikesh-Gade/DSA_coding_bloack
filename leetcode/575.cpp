#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>kiti (candyType.begin(),candyType.end());
        return kiti.size();
    }
};