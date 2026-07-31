class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int res = 0;
        int minVal = arrays[0][0];
        int maxVal = arrays[0].back();

        for (int i = 1; i < arrays.size(); i++) {
            res = max(res, abs(arrays[i].back() - minVal));
            res = max(res, abs(maxVal - arrays[i][0]));

            minVal = min(minVal, arrays[i][0]);
            maxVal = max(maxVal, arrays[i].back());
        }

        return res;
    }
};
