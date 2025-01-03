class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt = 0;
        long long int sum = 0;
        vector<long long int> leftSum;
        for (auto & i : nums) {
            sum += i;
            leftSum.emplace_back(sum);
        }
        for(size_t i = 0; i < nums.size() - 1; ++i){
            if(leftSum[i] >= sum - leftSum[i]) cnt++;
        }
        return cnt;
    }
};