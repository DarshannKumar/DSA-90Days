// 47. Permutations II
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

// Example 1:

// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]
// Example 2:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]


class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& temp, vector<bool>& visited , vector<vector<int>>& result){
        if (temp.size()==nums.size()){
            result.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if (visited[i]) continue;

            if (i>0 && !visited[i-1] && nums[i]==nums[i-1]) continue;

            temp.push_back(nums[i]);
            visited[i]=true;

            backtrack(nums, temp, visited, result);
            temp.pop_back();
            visited[i]=false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> temp;
        vector<bool> visited (nums.size(),false);
        backtrack(nums, temp, visited, result);
        return result;

        
    }
};