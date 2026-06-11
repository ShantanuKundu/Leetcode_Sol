// Author : Shantanu Kundu
// Date: 11/06/2026

/*
========================================
LETTER COMBINATIONS OF A PHONE NUMBER - LEETCODE 17
========================================

Description:
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
Return the answer in any order. A mapping of digits to letters (just like on the telephone buttons) is given below. 
Note that 1 does not map to any letters.
 
----------------------------------------
Example 1
----------------------------------------

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

----------------------------------------
Example 2
----------------------------------------

Input: digits = "2"
Output: ["a","b","c"]
 

========================================
SOLUTION 
========================================

Time Complexity  : O((n × 4^n))
Space Complexity : O(n)

*/

class Solution {
public:
    unordered_map<char, string> phone;
    vector<string> finalStr;

    void resDig(int index, string nowStr, int dig_len, string digits){
        if(index == dig_len){
            finalStr.push_back(nowStr);
            return;
        }

        string str_dig = phone[digits[index]];

        for(char ch : str_dig)
            resDig(index + 1, nowStr + ch, dig_len, digits);
    }

    vector<string> letterCombinations(string digits) {
        phone = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        int n = digits.size();
        string curr = "";

        if(n == 0)
            return {};

        resDig(0, curr, n, digits);

        return finalStr;
    }
};