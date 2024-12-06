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