class Solution {
public:
    const int MAX_COUNT = 2;
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2) return nums.size();
        int j = 0;
        for (int num : nums) {
            if (j < 2 || num != nums[j - 2]) {
                nums[j++] = num;
            }
        }
        return j;
    }
};
