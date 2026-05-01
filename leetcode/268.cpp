#include<iostream>
#include<set>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int total=0;
        for(auto a:s){
            total+=a;
        }
        
    }
};