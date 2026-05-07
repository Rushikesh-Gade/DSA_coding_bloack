class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>rishi;
        for(auto x:nums){
            rishi[x]++;
            if(rishi[x]>1){
                return true;
            }
        }
        return false;
    }
};