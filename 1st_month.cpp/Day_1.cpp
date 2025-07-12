1. Longest substring Leetcode Qn: 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0];

        for(int i = 1;i<strs.size();i++){
            int j=0;
            // Here we have used for loop from 2nd element in list 
            // where iteration is taken in place by means of [i][j] to iterate in serial way with all elemts in ith value of list with jth value also 
            while(j<prefix.size()&&j<strs[i].size()&&prefix[j]==strs[i][j]){
                j++;
            } //while loop runs until it reaches first element size and checks the subset which is equal in that ith element 
            //for loop will then increment for i to traverse in next element

            prefix = prefix.substr(0,j);
            // we are stroing the equal subset only values inside prefix and return it in last 

            if (prefix=="") return "";

        }
        return prefix;

        
    }
};