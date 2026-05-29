// Author : Shantanu Kundu
// Date: 29/05/2026

/*
========================================
MINIMUM ELEMENT AFTER REPLACEMENT WITH DIGIT SUM - LEETCODE 3300
========================================

Description:
You are given an integer array nums. You replace each element in nums with the sum of its digits. Return the minimum element in nums after all replacements.


----------------------------------------
Example 1
----------------------------------------

Input: nums = [10,12,13,14]
Output: 1
Explanation: nums becomes [1, 3, 4, 5] after all replacements, with minimum element 1.

----------------------------------------
Example 2
----------------------------------------

Input: nums = [1,2,3,4]
Output: 1
Explanation: nums becomes [1, 2, 3, 4] after all replacements, with minimum element 1.

----------------------------------------
Example 3
----------------------------------------

Input: nums = [999,19,199]
Output: 10
Explanation: nums becomes [27, 10, 19] after all replacements, with minimum element 10.


========================================
SOLUTION 
========================================

Time Complexity  : O(nxd) = O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_num=INT_MAX;
        for(int num:nums){
            int i=0, sum=0;
            while(num!=0){
                sum+=num%10;
                num/=10;
                i++;
            }
            min_num=min(min_num, sum);
        }
        return min_num;
    }
};
