// Author : Shantanu Kundu
// Date: 31/05/2026

/*
========================================
REVERSE INTEGER - LEETCODE 7
========================================

Description:
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


----------------------------------------
Example 1
----------------------------------------

Input: x = 123
Output: 321

----------------------------------------
Example 2
----------------------------------------

Input: x = -123
Output: -321
----------------------------------------
Example 3
----------------------------------------

Input: x = 120
Output: 21


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    int reverse(int x) {
        long long X=x, res=0, flag=1;
        if(X<0)
            flag=-1;
        X = abs(X);
        while(X!=0){
            res=(res*10) + (X % 10);
            X/=10;
        }
        
        //Checking the Integer Range
        if(res < -2147483648 || res > 2147483647)
            return 0;
        
        return flag*res;
    }
};
