class Solution {
public:
    int maxScore(string s) {
      
        int max = 0;
        for(int i = 1; i < s.length(); ++i){
            int l = 0;
            int r = 0;
            string left = s.substr(0, i);
            string right = s.substr(i, s.length() - i);
            for(char& c : left) {
                if(c == '0') l++;
            }
            for(char& c : right) {
                if(c == '1') r++;
            }
            if(l + r >= max) max = l + r;
        }
        return max;
    }
};