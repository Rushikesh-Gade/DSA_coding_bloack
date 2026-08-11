class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        vector<int> st;

        for (int x : nums2) {
            while (!st.empty() && st.back() < x) {
                nextGreater[st.back()] = x;
                st.pop_back();
            }
            st.push_back(x);
        }

        vector<int> ans;
        for (int v : nums1) {
            ans.push_back(nextGreater.count(v) ? nextGreater[v] : -1);
        }
        return ans;
    }
};
