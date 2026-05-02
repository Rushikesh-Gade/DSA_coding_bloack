class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int uttar=0;
        sort(nums.begin(),nums.end());
        for(auto i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                uttar ^=nums[i];
            }
        }
        return uttar;
    }
};