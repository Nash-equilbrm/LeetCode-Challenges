class Solution {
public:
    const string VOWELS = "aeiou";
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> f(words.size() + 1, 0);
        for(int i = 0; i < words.size(); ++i){
            if(VOWELS.contains(words[i].front()) && VOWELS.contains(words[i].back())){
                f[i + 1] = f[i] + 1;
            }
            else{
                f[i + 1] = f[i];
            }
        }
        vector<int> res(queries.size(), 0);
        for(int i = 0; i < queries.size(); ++i){
            res[i] = f[queries[i][1] + 1] - f[queries[i][0]];
        }
        return res;
    }
};