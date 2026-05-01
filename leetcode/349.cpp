#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> a(nums1.begin(), nums1.end());
        std::set<int> b(nums2.begin(), nums2.end());
        
        std::vector<int> result;
        std::set_intersection(a.begin(), a.end(),
                              b.begin(), b.end(),
                              std::back_inserter(result));
        
        return result;
    }
};
