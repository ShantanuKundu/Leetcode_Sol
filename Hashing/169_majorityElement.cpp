// Author : Shantanu Kundu
// Date: 30/05/2026

/*
========================================
MAJORITY ELEMENT - LEETCODE 169	
========================================

Description:
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [2,2,1,1,1,2,2]
Output: 2

----------------------------------------
Example 2
----------------------------------------

Input: nums = [3,2,3]
Output: 3


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), maj=0;
        unordered_map<int, int> mp;
        for(int i:nums)
            mp[i]++;

        for(auto x:mp){
            int val = x.second;
            if(val>n/2)
                maj= x.first;
        }
        return maj;
    }
};
};
