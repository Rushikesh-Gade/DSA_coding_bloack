class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        string t="1"+s+"1";
        int n=t.size();
        vector<pair<char,int>> b;
        int i=0;
        while(i<n){
            char c=t[i];
            int j=i;
            while(j<n and t[j]==c) j++;
            b.push_back({c,j-i});
            i=j;
        }
        int initial=count(s.begin(),s.end(),'1');
        int trade=0;
        for(int i=1;i+1<(int)b.size();i++){
            if(b[i].first=='1' and b[i-1].first=='0' and b[i+1].first=='0'){
                trade=max(trade,b[i-1].second+b[i+1].second);
            }
        }
        return initial+trade;
    }
};