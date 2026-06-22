// Author : Shantanu Kundu
// Date: 22/06/2026

/*
========================================
PROCESS STRING WITH SPECIAL OPERATIONS II - LEETCODE 3614
========================================

Description:
You are given a string s consisting of lowercase English letters and the special characters: '*', '#', and '%'.

You are also given an integer k.

Build a new string result by processing s according to the following rules from left to right:

If the letter is a lowercase English letter append it to result.
A '*' removes the last character from result, if it exists.
A '#' duplicates the current result and appends it to itself.
A '%' reverses the current result.
Return the kth character of the final string result. If k is out of the bounds of result, return '.'.

----------------------------------------
Example 1
----------------------------------------

Input: s = "a#b%*", k = 1
Output: "a"

----------------------------------------
Example 2
----------------------------------------

Input: s = "cd%#*#", k = 3
Output: "d"

----------------------------------------
Example 3
----------------------------------------

Input: s = "z*#", k = 0
Output: "."


========================================
SOLUTION 
========================================

Time Complexity  : O(n) 
Space Complexity : O(1)
 
*/

class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;

        for(char ch : s){
            if(ch == '*'){
                if(len > 0)
                    len--;
            }
            else if(ch == '#')
                len *= 2;
            else if(ch == '%')
                continue;
            else
                len++;
        }

        if(k >= len)
            return '.';

        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == '*'){
                len++;
            }
            else if(s[i] == '#'){
                len /= 2;
                if(k >= len)
                    k -= len;
            }
            else if(s[i] == '%'){
                k = len - k - 1;
            }
            else{
                len--;
                if(k == len)
                    return s[i];
            }
        }

        return '.';
    }
};