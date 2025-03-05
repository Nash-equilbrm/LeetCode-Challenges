/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let candidate = 0, vote = 0;
    for(var num of nums){
        if(vote === 0) candidate = num;
        vote += (candidate === num) ? 1 : -1;
    }
    return candidate;
};