class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multi_set<int>pahila (nums1.begin(),nums1.end());
        multi_set<int>dusra (nums2.begin(),nums2.end());
        vector<int>uttar;
        multi_set_intersect(pahila.begin(),pahila.end(),
                            dusra.begin(),dusra.end(),
                            back_inersect(uttar));
        return uttar;
    }
};