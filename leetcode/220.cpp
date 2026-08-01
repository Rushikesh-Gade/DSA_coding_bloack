class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        multiset<long long> window;  // use long long to avoid overflow
        for (int i = 0; i < nums.size(); i++) {
            // Find the smallest number >= nums[i] - valueDiff
            auto it = window.lower_bound((long long)nums[i] - valueDiff);
            
            // Check if within valueDiff
            if (it != window.end() && *it <= (long long)nums[i] + valueDiff) {
                return true;
            }
            
            // Insert current number
            window.insert(nums[i]);
            
            // Maintain window size
            if (i >= indexDiff) {
                window.erase(window.find(nums[i - indexDiff]));
            }
        }
        return false;
    }
};
