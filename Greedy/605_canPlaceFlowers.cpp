// Author : Shantanu Kundu
// Date: 31/05/2026

/*
========================================
CAN PLACE FLOWERS - LEETCODE 605	
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

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
            return true;

        int fsize = flowerbed.size(), flag=0;
        for(int i=0; i<fsize; i++){
            if(flowerbed[i]==0){
                if((i == 0 || flowerbed[i-1] == 0) && (i == fsize-1 || flowerbed[i+1] == 0)){
                    flowerbed[i]=1;
                    flag++;
                    if(flag==n)
                        return true;
                }
            }
        }
        return false;
    }
};
