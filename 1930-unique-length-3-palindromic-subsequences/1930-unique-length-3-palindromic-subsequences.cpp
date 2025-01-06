class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count = 0;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for(char& outside:alphabet){
            vector<int> o = findInString(s, outside);
            if(o.size() <= 0) continue;
            count += (o.size() >= 3) ? 1 : 0;
            for(char& inside:alphabet){
                if(inside == outside) continue;
                vector<int> i = findInString(s, inside);
                if(i.size() <= 0) continue;
                for(int& i_index:i){
                    if(i_index > o.front() && i_index < o.back()) {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }

    vector<int> findInString(string& s, char& c){
        vector<int> res;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == c) res.emplace_back(i);
        }
        return res;
    }
};