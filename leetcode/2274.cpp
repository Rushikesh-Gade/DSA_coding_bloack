class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int ans=0;
        // pehla gap
        ans=max(ans,special[0]-bottom);
        for(int i=1;i<special.size();i++){
            //special floor me ka gap
            ans=max(ans,special[i]-special[i-1]-1);
        }
        //last ka gap
        ans=max(ans,top-special.back());
        return ans;
    }
};