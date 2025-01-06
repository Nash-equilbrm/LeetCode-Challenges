class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count = 0;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for(char& outside:alphabet){
            vector<int> o = findInString(s, outside);
            count += (o.size() >= 3) ? 1 : 0;
            if(o.size() <= 0) continue;
            for(char& inside:alphabet){
                if(inside == outside) continue;
                vector<int> i = findInString(s, inside);
                if(i.size() <= 0) continue;
                count += (
                    o.front() < i.front() && i.front() < o.back()
                    || o.front() < i.back() && i.back() < o.back()
                    ) ? 1 : 0;
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

    int getIndex(vector<int>& v, int i){
        auto it = find(v.begin(), v.end(), i);
        return it - v.begin();
    }
};