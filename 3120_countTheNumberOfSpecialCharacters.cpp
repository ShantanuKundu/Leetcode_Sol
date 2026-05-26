// Author : Shantanu Kundu
// Date: 26/05/2026

/*
========================================
COUNT THE NUMBER OF SPECIAL CHARACTERS - LEETCODE 3120
========================================

Description:
You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word. Return the number of special letters in word.

----------------------------------------
Example 1
----------------------------------------

Input:
word = "aaAbcBC"

Output:
3

Explanation:
The special characters in word are 'a', 'b', and 'c'.


----------------------------------------
Example 2
----------------------------------------

Input:
word = "abc"

Output:
0

Explanation:
No character in word appears in uppercase.


----------------------------------------
Example 3
----------------------------------------

Input:
word = "abBCab"

Output:
1

Explanation:
The only special character in word is 'b'.

========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26]={0}, upper[26]={0}, flag=0;
        for(char ch: word){
            if(islower(ch))
                lower[ch-'a'] = 1;
            if(isupper(ch))
                upper[ch-'A'] = 1;
        }

        for(int i=0;i<26;i++){
            if(lower[i] && upper[i])
                flag++;
        }

        return flag;
    }
};