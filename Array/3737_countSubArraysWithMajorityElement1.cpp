// Author : Shantanu Kundu
// Date: 25/06/2026

/*
========================================
COUNT SUBARRAYS WITH MAJORITY ELEMENT 1 - LEETCODE 3737
========================================

Description:
You are given an integer array nums and an integer target. Return the number of subarrays of nums in which target is the majority element.
The majority element of a subarray is the element that appears strictly more than half of the times in that subarray.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [1,2,2,3], target = 2
Output: 5
Explanation:
Valid subarrays with target = 2 as the majority element:
nums[1..1] = [2]
nums[2..2] = [2]
nums[1..2] = [2,2]
nums[0..2] = [1,2,2]
nums[1..3] = [2,2,3]
So there are 5 such subarrays.

----------------------------------------
Example 2
----------------------------------------

Input: nums = [1,1,1,1], target = 1
Output: 10
Explanation:

​​​​​​​All 10 subarrays have 1 as the majority element.

----------------------------------------
Example 3
----------------------------------------

Input: nums = [1,2,3], target = 4
Output: 0
Explanation:
target = 4 does not appear in nums at all. Therefore, there cannot be any subarray where 4 is the majority element. 
Hence the answer is 0.


========================================
SOLUTION 
========================================

Time Complexity  : O(n2)
Space Complexity : O(1)

*/

class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int target_in_subarr, target_count = 0;
        for(int i = 0; i<nums.size(); i++){
            target_in_subarr = 0;
            for(int j = i; j<nums.size(); j++){
                if(nums[j] == target){
                    target_in_subarr++; 
                }
                int len = j-i+1;
                if(target_in_subarr > len/2)
                    target_count++;
                
            }
        }
        return target_count;
    }
};