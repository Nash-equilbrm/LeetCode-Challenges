class Solution {
public:
    // Boyer–Moore majority vote algorithm
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int cur = -1000000001;
        for(int i = 0 ; i < nums.size(); ++i){
            if(vote == 0){
                cur = nums[i];
                vote++;
            }
            else if(nums[i] == cur) vote++;
            else if(nums[i] != cur) vote--;
        }
        return cur;
    }
};