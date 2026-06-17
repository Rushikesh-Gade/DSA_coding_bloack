class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int x=target[0];
        int y=target[1];
        int dist=abs(y)+abs(x);
        for(auto i:ghosts){
            int d=abs(x-i[0])+abs(y-i[1]);
            if(d<=dist){
                return false;
            }
        }
        return true;
    }
};