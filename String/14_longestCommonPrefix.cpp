// Author : Shantanu Kundu
// Date: 23/06/2026

/*
========================================
LONGEST COMMMON PREFIX - LEETCODE 14
========================================

Description:
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
 
----------------------------------------
Example 1
----------------------------------------

Input: strs = ["flower","flow","flight"]
Output: "fl"

----------------------------------------
Example 2
----------------------------------------

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


========================================
SOLUTION:
========================================

Time Complexity  : O(n x m), where n is the length of the first string and m is the length of the string 
Space Complexity : O(n)

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = strs[0], re_pref = "";
        for(int i = 0; i<pref.size(); i++){
            for(int j = 1; j<strs.size(); j++){
                if(pref[i] != strs[j][i] || i >= strs[j].size())
                    return re_pref;
            } 
            re_pref += pref[i];
        }
        return re_pref;
    }
};