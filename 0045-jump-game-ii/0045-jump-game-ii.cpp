class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 0;
        int jump = 0, furthestReach = 0, curEnd = 0;
        for(int i = 0; i < size; ++i){
            furthestReach = max(furthestReach, i + nums[i]);
            if(i == curEnd){
                jump++;
                curEnd = furthestReach;
                if(furthestReach >= size - 1) break;
            }
        }
        return jump;
    }
};