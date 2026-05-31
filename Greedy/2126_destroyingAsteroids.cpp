// Author : Shantanu Kundu
// Date: 31/05/2026

/*
========================================
DESTROYING ASTEROIDS - LEETCODE 2126
========================================

Description:
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

----------------------------------------
Example 1
----------------------------------------

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

----------------------------------------
Example 2
----------------------------------------

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false


========================================
SOLUTION 
========================================

Time Complexity  : O(n logn) -> Sorting
Space Complexity : O(logn) -> 
std::sort() uses Introsort, not just Quick Sort. 
It starts with Quick Sort, but if recursion gets too deep it switches to Heap Sort, and for small subarrays it uses Insertion Sort.
Recursion happens because Quick Sort works by repeatedly splitting the array into smaller parts (divide and conquer).

*/
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long re_mass = mass;
        sort(asteroids.begin(), asteroids.end());

        for(const int& i: asteroids){
            if(re_mass < i)
                return false;
                re_mass+=i;
        }
        return true;
    }
};
