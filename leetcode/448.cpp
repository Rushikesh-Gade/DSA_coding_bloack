#include<iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>sapda (nums.begin(),nums.end());
        vector<int>sapdla;
        for(auto a=1;a<=nums.size();a++){
            if(sapda.find(a)==sapda.end()){
                sapdla.push_back(a);
            }
        }
        return sapdla;
    }
};