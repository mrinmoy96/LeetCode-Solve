/**
 * @param {number[]} nums
 * @return {number[]}
 */

//
// var sortedSquares = function(nums) {
//     let ans=[];
//     for(let i=0; i<nums.length; i++){
//         let val=nums[i]*nums[i];
//         ans.push(val);
//     }
//     ans.sort((a, b) => a - b);
//     return ans;
// };

var sortedSquares = function(nums) {
    const squares = nums.map(num => num * num);
    squares.sort((a, b) => a - b);
    return squares;
};