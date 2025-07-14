// 34. Find First and Last Position of Element in Sorted Array


// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
 

class Solution {
public:

int firstOccurence(vector<int> &nums,int n,int target){
    int first=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;     //you will use two binary serach where each will retrun index value and we will take it and retrun 
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }else if(nums[mid]<target){
            low=mid+1;
        }else{                      // taking index value is easy only get to know increment of left and right and call function accordingly
            high=mid-1;
        }
    }return first;
}

int lastOccurence(vector<int> &nums, int n, int target){
    int last=-1;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }else if(nums[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccurence(nums,nums.size(),target);
        if(first==-1) return{-1,-1};
        int last=lastOccurence(nums,nums.size(),target);
     return{first,last};
    }
};