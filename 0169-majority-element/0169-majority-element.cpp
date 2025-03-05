class Solution {
public:
    // Boyer–Moore majority vote algorithm
    int majorityElement(vector<int>& nums) {
        int candidate = 0, vote = 0;
        for (int num : nums) {
            if (vote == 0) {
                candidate = num;
            }
            vote += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};