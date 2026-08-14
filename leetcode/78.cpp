class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(nums, 0, current, ans);
        return ans;
    }

    void backtrack(vector<int>& nums, int start, vector<int>& current, vector<vector<int>>& ans) {
        ans.push_back(current); // add current subset
        for(int i = start; i < nums.size(); i++) {
            current.push_back(nums[i]);          // choose
            backtrack(nums, i + 1, current, ans); // explore
            current.pop_back();                  // un-choose
        }
    }
};
