class Solution {
public:
    int singleNumber(vector<int>& nums) {
        multiset<int>pahila (nums.begin(), nums.end());
        int uttar=0;
        for(auto num:nums){
            uttar ^=num;
        }
        return uttar;
    }
};