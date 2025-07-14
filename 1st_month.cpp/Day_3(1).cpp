// 283. Move Zeroes

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;  // Points to where the next non-zero element should go

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};
