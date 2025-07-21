Date:21-july-2025
Problem 1: https://leetcode.com/problems/valid-anagram/?envType=problem-list-v2&envId=string

Solution:
#include <algorithm> // for sort
#include <string>
class Solution {
public:
    bool isAnagram(string s, string t) {
      
        if (s.length() != t.length()) return false;

     
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

       
        return s == t;
    }
};

What i learned in this:
New library called algorithm that contains many functions like sorting and begin end which help sorting the string so that the string will be compared easily.
