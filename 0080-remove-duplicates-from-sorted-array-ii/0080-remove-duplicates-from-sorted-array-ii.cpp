class Solution {
public:
    const int MAX_COUNT = 2;
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int cnt = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (j == 0 || j == 1 || nums[i] != nums[j - 2]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
