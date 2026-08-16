class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size()-1;
        vector<int> ans;
        for(int i=1;i<n;i++){
            if(mountain[i]>mountain[i-1] and mountain[i]>mountain[i+1]){
               ans.push_back(i);
            }
        }
        return ans;
    }
};