class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump=0, jump=0, end=0;
        for(int i=0;i<nums.size()-1;i++){
            maxjump=max(maxjump,i+nums[i]);
            if(i==end){
                jump++;
                end=maxjump;
            }
        }
    return jump;
    }
};