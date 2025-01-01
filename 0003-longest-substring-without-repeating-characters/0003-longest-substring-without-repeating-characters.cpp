class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndexMap; // Maps character to its last seen index
        int maxLen = 0, start = 0;

        for (int end = 0; end < s.size(); ++end) {
            if (charIndexMap.count(s[end]) > 0 && charIndexMap[s[end]] >= start) {
                start = charIndexMap[s[end]] + 1;
            }
            charIndexMap[s[end]] = end;
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};