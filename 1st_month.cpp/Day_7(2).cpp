// 3318. Find X-Sum of All K-Long Subarrays I
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// You are given an array nums of n integers and two integers k and x.

// The x-sum of an array is calculated by the following procedure:

// Count the occurrences of all elements in the array.
// Keep only the occurrences of the top x most frequent elements. If two elements have the same number of occurrences, the element with the bigger value is considered more frequent.
// Calculate the sum of the resulting array.
// Note that if an array has less than x distinct elements, its x-sum is the sum of the array.

// Return an integer array answer of length n - k + 1 where answer[i] is the x-sum of the subarray nums[i..i + k - 1].

 

// Example 1:

// Input: nums = [1,1,2,2,3,4,2,3], k = 6, x = 2

// Output: [6,10,12]

// Explanation:

// For subarray [1, 1, 2, 2, 3, 4], only elements 1 and 2 will be kept in the resulting array. Hence, answer[0] = 1 + 1 + 2 + 2.
// For subarray [1, 2, 2, 3, 4, 2], only elements 2 and 4 will be kept in the resulting array. Hence, answer[1] = 2 + 2 + 2 + 4. Note that 4 is kept in the array since it is bigger than 3 and 1 which occur the same number of times.
// For subarray [2, 2, 3, 4, 2, 3], only elements 2 and 3 are kept in the resulting array. Hence, answer[2] = 2 + 2 + 2 + 3 + 3.
// Example 2:

// Input: nums = [3,8,7,8,7,5], k = 2, x = 2

// Output: [11,15,15,15,12]

// Explanation:

// Since k == x, answer[i] is equal to the sum of the subarray nums[i..i + k - 1].


class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        int siz=n-k+1; 
        vector<int> v;   // this looks like easy level but not!!!!
        int j=0;
        for (int j = 0; j < siz; j++){
            vector<pair<int, int>> arr(51, {0,0});
            for(int i=j; i<k+j; i++){
                arr[nums[i]].first++;
                arr[nums[i]].second=nums[i];
            }
            sort(arr.begin(), arr.end()); //  use sorting after making sub array and use for loop for sum late and use map 
            // map used and retrunr in your way dont use this its confusing.....
            int ni= arr.size();

            int count=0;
             for (int i = 1; i <= x; i++){
                count+= arr[ni-i].first*arr[ni-i].second;
            }
            v.push_back(count);
        }
        return v;
    }
};