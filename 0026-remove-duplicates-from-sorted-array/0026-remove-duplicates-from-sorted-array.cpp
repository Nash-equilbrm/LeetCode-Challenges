class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // -100 <= nums[i] <= 100
        int val = -101;
        int j = 0;
        for(int i = 0 ; i < nums.size(); ++i){
            if(nums[i] != val){
                nums[j++] = nums[i];
                val = nums[i];
            }
        }
        return j;
    }
};