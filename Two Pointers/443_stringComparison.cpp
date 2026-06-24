// Author : Shantanu Kundu
// Date: 24/06/2026

/*
========================================
STRING COMPARISION - LEETCODE 443
========================================

Description:
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array. You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and should be ignored.

----------------------------------------
Example 1
----------------------------------------

Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
After modifying the input array in-place, the first 6 characters of chars should be ["a","2","b","2","c","3"].


----------------------------------------
Example 2
----------------------------------------

Input: chars = ["a"]
Output: 1
Explanation: The only group is "a", which remains uncompressed since it is a single character.
After modifying the input array in-place, the first character of chars should be ["a"].

----------------------------------------
Example 3
----------------------------------------

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: 4
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
After modifying the input array in-place, the first 4 characters of chars should be ["a","b","1","2"].


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), count=1;
        vector<char> chars_res;
        for(int i = 0; i<n; i++){
            if(i < n-1 && chars[i] == chars[i+1]) 
                count++;
            else{
                chars_res.push_back(chars[i]);
                if(count > 1){
                    string str_count = to_string(count);
                    for(char c: str_count)
                        chars_res.push_back(c); 
                }
                count = 1;
            }     
        }
        chars.clear();
        for(char ch : chars_res)
            chars.push_back(ch); 
        return chars.size();
    }
};
