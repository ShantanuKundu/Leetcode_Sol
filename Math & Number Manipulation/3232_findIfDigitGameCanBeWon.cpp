// Author : Shantanu Kundu
// Date: 26/06/2026

/*
========================================
FIND IF DIGIT GAME CAN BE WON  - LEETCODE 3232.
========================================

Description:
You are given an array of positive integers nums. Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.
Return true if Alice can win this game, otherwise, return false.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [1,2,3,4,10]
Output: false
Explanation: Alice cannot win by choosing either single-digit or double-digit numbers.

----------------------------------------
Example 2
----------------------------------------

Input: nums = [1,2,3,4,5,14]
Output: true
Explanation: Alice can win by choosing single-digit numbers which have a sum equal to 15.

----------------------------------------
Example 3
----------------------------------------

Input: nums = [5,5,5,25]
Output: true
Explanation: Alice can win by choosing double-digit numbers which have a sum equal to 25.


========================================
SOLUTION 
========================================

Time Complexity  : O(n) 
Space Complexity : O(1)

*/

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s_sum=0, d_sum=0;
        for(int i: nums){
            if(i/10==0)
                s_sum+=i;
            else
                d_sum+=i;
        }

        if(s_sum == d_sum)
            return false;
        else
            return true;
    }
};