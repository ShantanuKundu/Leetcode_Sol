// Author : Shantanu Kundu
// Date: 25/06/2026

/*
========================================
HAPPY NUMBER - LEETCODE 202 	(Also can be solved by Linked List method: Floyd Cycle Detection)
========================================

Description:
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

----------------------------------------
Example 1
----------------------------------------

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

----------------------------------------
Example 2
----------------------------------------

Input: n = 2
Output: false


========================================
SOLUTION 
========================================

Time Complexity  : O(log n)
Space Complexity : O(log n)

*/
class Solution {
public:
    int calHappy(int n){
        int rem = 0;
        while(n!=0){
            rem += pow(n%10,2);
            n/=10;
        }
        return rem;
    }
    bool isHappy(int n) {
        unordered_set<int> rem_don;
        int rem_check = 0;
        while(rem_check != 1){
            rem_check = calHappy(n); 
            if(rem_check == 1)
                return true;
            else{
                if(rem_don.find(rem_check) != rem_don.end())
                    break;
                else{
                    rem_don.insert(rem_check); 
                    n = rem_check;
                }       
            } 
        }
        return false;
    }
};