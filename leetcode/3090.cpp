class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int left = 0, ans = 0;

        for(int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            // shrink window if any char count > 2
            while(freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
