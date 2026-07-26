class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums ;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(nums));
        double median=0;
        int s=nums.size();
        if (s % 2 == 1) {
            return nums[s / 2]; // odd med
        } else {
            return (nums[s / 2-1 ] + nums[s / 2]) / 2.0; // even med
        }
    }

};