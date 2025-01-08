class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> shiftDiff(n + 1, 0);

        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            shiftDiff[start] += (direction == 1) ? 1 : -1;
            shiftDiff[end + 1] -= (direction == 1) ? 1 : -1;
        }

        int cumulativeShift = 0;
        for (int i = 0; i < n; ++i) {
            cumulativeShift += shiftDiff[i];
            s[i] = shiftChar(s[i], cumulativeShift);
        }

        return s;
    }

private:
    char shiftChar(char ch, int shift) {
        shift = (shift % 26 + 26) % 26;
        return 'a' + (ch - 'a' + shift) % 26;
    }
};
