class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int blue = nums.size() - 1;
        for(int i = 0 ; i < nums.size(); ++i){
            if(nums[i] == 0 && i > red){
                swap(nums[red++], nums[i--]);
            }
            else if(nums[i] == 2 && i < blue){
                swap(nums[blue--], nums[i--]);
            }

            // at this point should stop iterating
            else if(nums[i] == 2 && i >= blue){
                return;
            }
        }
    }
};