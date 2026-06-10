class Solution {
public:
    string getPermutation(int n, int k) {
        vector<char> numbers;
        for(int i=1; i<=n; i++ ){
            numbers.push_back('0'+i);
        }
        for(int i=1; i<k; i++ ){
            next_permutation(numbers.begin(), numbers.end());
        }
        string ans="";
        for(char c:numbers){
            ans+=c;
        }
        return ans;
    }
};