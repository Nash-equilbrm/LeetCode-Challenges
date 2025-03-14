/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length <= 2) return nums.length;
    let j = 0;
    for(let i = 0 ; i < nums.length; ++i){
        if(j < 2 || nums[i] !== nums[j - 2]){
            nums[j++] = nums[i];
        }
    }
    return j;
};