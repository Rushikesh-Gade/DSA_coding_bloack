class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> digits;
        int t=n;
        while(t>0){
            digits.push_back(t%10);
            t=t/10;
        }
        reverse(digits.begin(),digits.end());
        if(!next_permutation(digits.begin(),digits.end())) return -1;
        long long ans=0;
        for(int d:digits){
        ans=ans*10+d;
        if(ans>INT_MAX) return -1;
         }
    return (int)ans;
    }
};