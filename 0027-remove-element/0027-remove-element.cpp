class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        int p = nums.size() - 1;
        int i;
        for(int i = p; i >= 0; --i){
            if(nums[i] == val){
                int tmp = nums[p];
                nums[p] = nums[i];
                nums[i] = tmp;
                p--;
                cnt++;
            }
        }
        return nums.size() - cnt;
    }
};