//Starting from 6 December 2024 Daily 1 Problem ==Streak 1

//Problem-1 longest-uncommon-subsequence
//Catogery:String
var findLUSlength = function(a, b) {
    if(a===b){
        return -1
    }
    else{
         return Math.max(a.length, b.length);
    }
};

//Problem-1 Single Number
//Catogery:Array
function singleNumber(nums) {
    let result = 0; // Start with 0
    for (let num of nums) {
        result ^= num; // XOR each number with the result
    }
    return result; // After all XORs, result will be the single number
}