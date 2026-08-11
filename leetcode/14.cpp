class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string ans="";
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<strs.size();i++){
            if (first[i]==last[i]){
                ans += first[i];
            } 
            else{
                break;
            }
        }
        return ans;
    }
};