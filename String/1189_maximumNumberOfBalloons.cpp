// Author : Shantanu Kundu
// Date: 22/06/2026

/*
========================================
MAXIMUM NUMBER OF BALLOONS - LEETCODE 1189
========================================

Description:
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.


----------------------------------------
Example 1
----------------------------------------

Input: text = "nlaebolko"
Output: 1

----------------------------------------
Example 2
----------------------------------------

Input: text = "loonbalxballpoon"
Output: 2

----------------------------------------
Example 3
----------------------------------------

Input: text = "leetcode"
Output: 0


========================================
SOLUTION:
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string given = "balloon";
        unordered_map<char, int> bal, textmp;

        if (given.size() <= text.size()) {   // FIX 1
            for (char ch : given)
                bal[ch]++;

            for (char ch : text)
                textmp[ch]++;

            int sum = INT_MAX;

            for (auto x : bal) {
                char key = x.first;

                // FIX 2: don't skip missing characters
                sum = min(sum, textmp[key] / bal[key]);
            }

            return sum;
        }
        else {
            return 0;
        }
    }
};