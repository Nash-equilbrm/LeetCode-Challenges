class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt = 0;
        vector<long long int> sum;
        for (auto & i : nums) {
            if(sum.size() == 0) sum.emplace_back(i);
            else sum.emplace_back(sum.back() + i);
        }
        for(int i = 0; i < nums.size() - 1; ++i){
            if(sum[i] >= sum.back() - sum[i]) cnt++;
        }
        return cnt;
    }
};