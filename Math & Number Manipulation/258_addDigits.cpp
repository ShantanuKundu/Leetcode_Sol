// Author : Shantanu Kundu
// Date: 26/06/2026

/*
========================================
ADD DIGITS - LEETCODE 258
========================================

Description:
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

----------------------------------------
Example 1
----------------------------------------

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

----------------------------------------
Example 2
----------------------------------------

Input: num = 0
Output: 0


========================================
SOLUTION 
========================================

Time Complexity  : O(d), where d is the number of digits in n.
Space Complexity : O(1)

*/

class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;

            if(num==0){
                num=sum;
                if(num/10==0)
                    return num;
                sum=0;
            }
        }
        return num;
    }
};