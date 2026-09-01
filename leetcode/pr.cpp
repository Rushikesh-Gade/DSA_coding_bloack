#include <iostream>
#include <vector>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (int j=0;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }

};
int main() {
    Solution s;
    std::vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    for (int i : nums) {
        std::cout << i << " ";
    }
    return 0;
}