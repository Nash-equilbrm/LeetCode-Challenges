/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let val = -101;
    let j = 0;
    for(let i = 0 ; i < nums.length; ++i){
        if(nums[i] !== val){
            nums[j++] = nums[i];
            val = nums[i];
        }
    }
    return j;
};