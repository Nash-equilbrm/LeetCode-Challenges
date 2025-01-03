class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt = 0;
        long long int sum = 0;
        long long int leftSum = 0;
        for (int & i : nums) {
            sum += i;
        }
        for(size_t i = 0; i < nums.size() - 1; ++i){
            leftSum += nums[i];
            if(leftSum >= sum - leftSum) cnt++;
        }
        return cnt;
    }
};