// 2.  Longest Harmonious Subsequence Leetcode Qn-594

// Example 1:

// Input: nums = [1,3,2,2,5,2,3,7]

// Output: 5

// Explanation:

// The longest harmonious subsequence is [3,2,2,2,3].

// Example 2:

// Input: nums = [1,2,3,4]

// Output: 2

// Explanation:

// The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.

// Example 3:

// Input: nums = [1,1,1,1]

// Output: 0

// Explanation:

// No harmonic subsequence exists.


// the question was asking like how many integer are there who has difference of '1' so here we used frequency of numbers 
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxy = 0;
        for(int i:nums){
            m[i]++;
        }
        for(int i:nums){
            if(m[i-1] || m[i+1]){
                maxy = max({maxy, m[i] + m[i-1], m[i] + m[i+1]});
            }
        }
        return maxy;
    }
};