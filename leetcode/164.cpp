class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1, ans=0;
        for(int i=1;i<=n;i++){
            int sum=nums[i]-nums[i-1];
            if(sum>ans){
                ans=sum;
            }
        
        }
        return ans;
    }
};