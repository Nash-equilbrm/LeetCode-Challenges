class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1) return true;
        if(nums[0] == 0) return false;
        vector<bool> canArrive(nums.size(), false);
        canArrive[nums.size() - 1] = true;
        for(int i = nums.size() - 2; i >= 0; --i){
            if(nums[i] == 0) continue;
            else{
                for(int step = 1; step <= nums[i]; ++ step){
                    if(canArrive[i + step])
                    {
                        canArrive[i] = true;
                        break;
                    }
                }
            }
        }

        return canArrive[0];
    }
};