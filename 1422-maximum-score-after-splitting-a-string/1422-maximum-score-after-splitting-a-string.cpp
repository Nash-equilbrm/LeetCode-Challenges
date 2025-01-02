class Solution {
public:
    int maxScore(string s) {
        vector<pair<int,int>> countDigitLeft (s.length() + 1, {0,0});
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') {
                countDigitLeft[i + 1].first = countDigitLeft[i].first + 1;
                countDigitLeft[i + 1].second = countDigitLeft[i].second;
            }
            if(s[i] == '1') {
                countDigitLeft[i + 1].first = countDigitLeft[i].first;
                countDigitLeft[i + 1].second = countDigitLeft[i].second + 1;
            }
        }
        int L, R;
        int max = 0;
        for(int i = 1; i < countDigitLeft.size() - 1; ++i){
            L = countDigitLeft[i].first;
            R = countDigitLeft.back().second - countDigitLeft[i].second;
            if(L + R > max) max = L + R;
        }
        return max;
    }
};