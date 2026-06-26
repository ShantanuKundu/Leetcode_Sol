// Author : Shantanu Kundu
// Date: 26/06/2026

/*
========================================
COUNT INTEGERS WITH EVEN DIGIT SUM - LEETCODE 2180
========================================

Description:
Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.
The digit sum of a positive integer is the sum of all its digits.

----------------------------------------
Example 1
----------------------------------------

Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4. 

----------------------------------------
Example 2
----------------------------------------

Input: num = 30
Output: 14
Explanation:
The 14 integers less than or equal to 30 whose digit sums are even are
2, 4, 6, 8, 11, 13, 15, 17, 19, 20, 22, 24, 26, and 28.


========================================
SOLUTION 
========================================

Time Complexity  : O(n)  
Space Complexity : O(1)

*/

class Solution {
public:
    int retEven(int num){
        int rem = 0;
        while(num != 0){
            rem+=num%10;
            num/=10;
        }
        return rem;
    }
    int countEven(int num) {
        int flag, count=0; 
        for(int i=1; i<=num; i++){
            flag = retEven(i);
                if(flag%2==0)
                    count++;
        }
        return count;
    }
};