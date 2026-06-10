// Author : Shantanu Kundu
// Date: 27/05/2026

/*
========================================
COUNT THE NUMBER OF SPECIAL CHARACTERS II - LEETCODE 3121
========================================

Description:
You are given a string word. A letter c is called special if it appears both in lowercase and uppercase in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.Return the number of special letters in word.

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
There are no special characters in word.


----------------------------------------
Example 3
----------------------------------------

Input:
word = "AbBCab"

Output:
0

Explanation:
There are no special characters in word.

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
        int lower_pos[26]={0}, upper_pos[26]={0};

        //Special: Every lowercase occurence of 'c' must appear before the first uppercase appearance of 'C'.
        for(int i=0; i< word.size(); i++){
            if(islower(word[i])){
                lower[word[i]-'a'] = 1;
                lower_pos[word[i]-'a'] = i;
            }
            if(isupper(word[i])){
                if(upper[word[i]-'A'] == 0)
                    upper_pos[word[i]-'A'] = i;
                upper[word[i]-'A'] = 1;
            }
        }

        for(int i=0;i<26;i++){
            if((lower[i] && upper[i]) && (lower_pos[i] < upper_pos[i]))
                flag++;
        }

        return flag;        
    }
};