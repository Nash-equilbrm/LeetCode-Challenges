class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.length() <= numRows) return s;
        string res = "";
        for(int i = 0 ; i < numRows; ++i){
            int j = numRows - i - 1;
            int stepDown = j * 2 - 1;
            int stepUp = i * 2 - 1;
            int step = stepUp;
            for(int t = i; t < s.length(); t += (step + 1)){
                res += s[t];
                if(step == stepUp && stepDown > 0) step = stepDown;
                else if(step == stepDown && stepUp > 0) step = stepUp;
            }
        }
        return res;
    }
};