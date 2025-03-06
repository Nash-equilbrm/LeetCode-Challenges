class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        vector<int> minStep(size, 0);
        minStep[size - 1] = 0;
        for(int i = size - 2; i >= 0; --i){
            minStep[i] = 10001;
            for(int step = 1; step <= nums[i]; ++step){
                if(i + step >= size - 1){
                    minStep[i] = 1;
                    continue;
                }
                minStep[i] = min(minStep[i + step] + 1, minStep[i]);
            }
        }
        return minStep[0];
    }
};