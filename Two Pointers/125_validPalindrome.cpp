// Author : Shantanu Kundu
// Date: 25/05/2026

/*
========================================
VALID PALINDROME - LEETCODE 125
========================================

Description:
A phrase is a palindrome if, after converting all uppercaseletters into lowercase letters and removing all non-alphanumericcharacters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome,or false otherwise.


----------------------------------------
Example 1
----------------------------------------

Input:
s = "A man, a plan, a canal: Panama"

Output:
true

Explanation:
"amanaplanacanalpanama" is a palindrome.


----------------------------------------
Example 2
----------------------------------------

Input:
s = "race a car"

Output:
false

Explanation:
"raceacar" is not a palindrome.


----------------------------------------
Example 3
----------------------------------------

Input:
s = " "

Output:
true

Explanation:
s becomes an empty string ""
after removing non-alphanumeric characters.

Since an empty string reads the sameforward and backward, it is a palindrome.

========================================
SOLUTION 1
(Using Extra String)
========================================

Time Complexity  : O(n)
Space Complexity : O(n)

*/

class Solution {
public:
    bool isPalindrome(string s) {
        string newpal;
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                newpal += tolower(s[i]);
            }
        }


        int left = 0, right = newpal.length() - 1;
        while(left < right) {
            if(newpal[left] != newpal[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};



/*
========================================
SOLUTION 2 [OPTIMAL]
(Two Pointer Approach)
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length()-1;
        while (left < right){
            while (left < right && !isalnum(s[left]))
                left++;
            while (left < right && !isalnum(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++;
            right--;
        }
        return true;
    }
};