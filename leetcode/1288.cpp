class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& q) {
        sort(q.begin(),q.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]!=b[0]){
                return a[0]<b[0];
            }
            return a[1]>b[1];
        });
        int c=0, right=0;
        for(auto i:q){
            if(i[1]>right){
                c++;
                right=i[1];
            }
        }
        return c;
    }
};