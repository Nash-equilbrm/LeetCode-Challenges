class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int blue = nums.size() - 1;
        for(int i = 0 ; i < nums.size(); ++i){
            if(nums[i] == 0 && i > red){
                int tmp = nums[i];
                nums[i] = nums[red];
                nums[red] = tmp;
                red++;
                i--;
            }
            else if(nums[i] == 2 && i < blue){
                int tmp = nums[i];
                nums[i] = nums[blue];
                nums[blue] = tmp;
                blue--;
                i--;
            }
            for(int j = 0 ; j < nums.size(); ++j){
                cout << nums[j] << " ";
            }
            cout << endl;
        }
    }
};