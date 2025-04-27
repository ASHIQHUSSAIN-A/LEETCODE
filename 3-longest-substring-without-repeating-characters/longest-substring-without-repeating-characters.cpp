class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>charIndex;
        int maxLen = 0, left = 0;
        for(int i= 0; i < s.size();++i) {
            char current = s[i];
            if (charIndex.count(current) && charIndex[current] >= left) { 
                left = charIndex[current] + 1;
            }
            charIndex[current] = i;
            maxLen = max(maxLen, i - left + 1);
        }
        return maxLen;
    }
};  