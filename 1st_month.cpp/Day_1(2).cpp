2.  Longest Harmonious Subsequence Leetcode Qn-594

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