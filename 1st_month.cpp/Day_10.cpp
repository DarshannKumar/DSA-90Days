
// 347. Top K Frequent Elements
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
       unordered_map<int, int> frequencyMap;
       for (int num : nums) {
        frequencyMap[num]++; // Increment the count for the current number
    } 
     priority_queue< pair<int,int>>max_heap;
     for (const auto& pair : frequencyMap) {
            max_heap.push({ pair.second,pair.first}); 
        }
        for(int i=0;i<k;i++){
            v.push_back(max_heap.top().second); // return number
            max_heap.pop();
        }
        return v;    
    }
};