#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>pahila (nums1.begin(),nums1.end());
        multiset<int>dusra (nums2.begin(),nums2.end());
        vector<int>uttar;
        set_intersection(pahila.begin(),pahila.end(),
                            dusra.begin(),dusra.end(),
                            back_inserter(uttar));
        return uttar;
    }
};